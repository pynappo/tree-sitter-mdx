// Copyright 2024 pynappo
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <wctype.h>

// This scanner exists to determine what can be highlighted with JSX and what
// can be highlighted with markdown
enum TokenType {
    IMPORT_START,
    INTERPOLATION_START,
    INTERPOLATION_TEXT,
    END_OF_FILE,
    ERROR,
};

// Brackets and possible strings
enum Delimiter {
    CURLY_BRACKET,
    BACKTICK,
    DOUBLE_QUOTE,
    SINGLE_QUOTE,
};

typedef Array(enum Delimiter) DelimiterStack;
typedef struct Scanner {
    // uint8_t indentation;
    DelimiterStack *delimiter_stack;
} Scanner;

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

// for debugging:
//
// #define advance(lexer) {\
//   printf("advance %c, L%d\n", lexer->lookahead, __LINE__);\
//   advance(lexer);\
// }
//
// #define skip(lexer) {\
//   printf("skip %c, L%d\n", lexer->lookahead, __LINE__);\
//   skip(lexer);\
// }

static bool match(TSLexer *lexer, char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (lexer->lookahead != str[i] || lexer->eof(lexer)) {
            return false;
        }
        if (iswspace(str[i])) {
            skip(lexer);
        } else {
            advance(lexer);
        }
    }
    return true;
}

static bool scan_js_expr(Scanner *scanner, TSLexer *lexer);
static void scan_js_string(Scanner *scanner, TSLexer *lexer) {
    // consume opening delimiter
    char delim = lexer->lookahead;
    // consume opening delimiter
    advance(lexer);
    if (delim == '`') {
        while (lexer->lookahead) {
            if (lexer->lookahead == '$') {
                advance(lexer);
                if (lexer->lookahead == '{') {
                    // String interpolation
                    advance(lexer);
                    scan_js_expr(scanner, lexer);
                    // Advance past the final curly
                } else {
                    // Ignore this character
                    continue;
                }
            } else if (lexer->lookahead == '`') {
                // End of string
                advance(lexer);
                break;
            }
            advance(lexer);
        }
    } else {
        while (lexer->lookahead != delim) {
            advance(lexer);
            if (lexer->lookahead == '\\') {
                advance(lexer);
            }
        }
    }
    // consume closing delimiter
    advance(lexer);
}
static bool scan_js_expr(Scanner *scanner, TSLexer *lexer) {
    // TODO: Implement comments
    DelimiterStack *delim_stack = scanner->delimiter_stack;
    int starting_size = delim_stack->size;
    do {
        // advance until we pop the full stack of delimiters

        if (lexer->eof(lexer)) {
            // pop everything for safety
            while (delim_stack->size > 0) {
                array_pop(delim_stack);
            }
            break;
        }
        switch (lexer->lookahead) {
        case '\\':
            // consume backslash
            advance(lexer);
            // consume next char
            advance(lexer);
            break;
        case '{':
            array_push(delim_stack, CURLY_BRACKET);
            advance(lexer);
            break;
        case '}':
            if (array_back(delim_stack) == CURLY_BRACKET) {
                array_pop(delim_stack);
                // leave the last curly to the grammar
                if (delim_stack->size == starting_size)
                    goto finish;
            }
            advance(lexer);
            break;
        case '"':
            //[[fallthrough]]
        case '\'':
            //[[fallthrough]]
        case '`':
            // consume the whole string
            scan_js_string(scanner, lexer);
            break;
        default:
            break;
        }
    } while (delim_stack->size > 0);

finish:
    return true;
}

// largely taken from markdown's scanner
void *tree_sitter_mdx_external_scanner_create() {
    Scanner *s = (Scanner *)ts_malloc(sizeof(Scanner));
    s->delimiter_stack = ts_malloc(sizeof(DelimiterStack));
    array_init(s->delimiter_stack);

    return s;
}

unsigned tree_sitter_mdx_external_scanner_serialize(void *payload,
                                                    char *buffer) {
    Scanner *s = (Scanner *)payload;
    unsigned size = 0;
    for (int i = 0; i < s->delimiter_stack->size; i++) {
        char delim = *array_get(s->delimiter_stack, i);
        buffer[size++] = delim;
    }
    return size;
}
void tree_sitter_mdx_external_scanner_deserialize(void *payload, char *buffer,
                                                  unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    unsigned size = 0;
    array_init(scanner->delimiter_stack);
    while (size < length) {
        enum Delimiter d = (enum Delimiter)buffer[size++];
        array_push(scanner->delimiter_stack, d);
    }
}
void tree_sitter_mdx_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    array_delete(scanner->delimiter_stack);
    ts_free(scanner);
}

bool tree_sitter_mdx_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {

    printf("\nINPUT: %c\n", lexer->lookahead);
    // clang-format off
    printf("valid symbols:\n");
    printf("IMPORT_START: %s\n", valid_symbols[IMPORT_START] ? "true" : "false");
    printf("INTERPOLATION_START: %s\n", valid_symbols[INTERPOLATION_START] ? "true" : "false");
    printf("INTERPOLATION_TEXT: %s\n", valid_symbols[INTERPOLATION_TEXT] ? "true" : "false");
    printf("END_OF_FILE: %s\n", valid_symbols[END_OF_FILE] ? "true" : "false");
    printf("ERROR: %s\n", valid_symbols[ERROR] ? "true" : "false");
    // clang-format on
    Scanner *scanner = (Scanner *)payload;
    if (valid_symbols[ERROR]) {
        printf("return ERROR\n");
        lexer->result_symbol = ERROR;
        return false;
    }
    if (valid_symbols[END_OF_FILE]) {
        if (lexer->eof(lexer)) {
            lexer->result_symbol = END_OF_FILE;
            lexer->mark_end(lexer);
            printf("return EOF\n");
            return true;
        }
    }

    if (valid_symbols[IMPORT_START] || lexer->get_column(lexer) == 0) {
        // the extra space is mandatory
        if (match(lexer, "import ")) {
            lexer->result_symbol = IMPORT_START;
            printf("return IMPORT_START\n");
            return true;
        }
    }

    if (valid_symbols[INTERPOLATION_START]) {
        if (lexer->lookahead == '\\') {
            // consume the backslash
            advance(lexer);
            // consume next char
            advance(lexer);
            printf("return backslash\n");
            return false;
        } else if (lexer->lookahead == '{') {
            advance(lexer);
            lexer->result_symbol = INTERPOLATION_START;
            printf("return INTERP_START\n");
            return true;
        }
    }

    if (valid_symbols[INTERPOLATION_TEXT]) {
        // scan until the interpolation ends
        if (lexer->lookahead == '}') {
            // let the grammar figure out that INTERPOLATION_TEXT is not here
            printf("return no INTERP_TEXT\n");
            return false;
        }
        lexer->result_symbol = INTERPOLATION_TEXT;
        printf("return INTERP_TEXT\n");
        return scan_js_expr(scanner, lexer);
    }

    // if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
    //   return false;
    // }
    // s->indentation = 1;
    printf("return nothing\n");
    return false;
}

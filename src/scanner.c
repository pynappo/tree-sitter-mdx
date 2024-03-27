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
        advance(lexer);
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
    if (delim_stack->size > 0) {
        // something went wrong
        printf("delimstack should not be populated");
        return false;
    }
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
            // consume next char
            advance(lexer);
            break;
        case '{':
            array_push(delim_stack, CURLY_BRACKET);
            break;
        case '}':
            if (array_back(delim_stack) == CURLY_BRACKET) {
                printf("popped a curly");
                array_pop(delim_stack);
                // leave the last curly to the grammar
                if (delim_stack->size == 0)
                    goto finish;
            }
            printf("still isn't a curly");
            break;
        case '"':
            //[[fallthrough]]
        case '\'':
            //[[fallthrough]]
        case '`':
            scan_js_string(scanner, lexer);
            break;
        default:
            break;
        }
        advance(lexer);
    } while (delim_stack->size > 0);

finish:
    lexer->result_symbol = INTERPOLATION_TEXT;
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
    Scanner *scanner = (Scanner *)payload;
    if (valid_symbols[ERROR]) {
        lexer->result_symbol = ERROR;
        return false;
    }
    if (valid_symbols[END_OF_FILE]) {
        if (lexer->eof(lexer)) {
            lexer->result_symbol = END_OF_FILE;
            lexer->mark_end(lexer);
            return true;
        }
    }

    if (valid_symbols[IMPORT_START] || lexer->get_column(lexer) == 0) {
        // the extra space is mandatory
        if (match(lexer, "import ")) {
            lexer->result_symbol = IMPORT_START;
            return true;
        }
    }

    if (valid_symbols[INTERPOLATION_START]) {
        if (lexer->lookahead == '\\') {
            // consume the backslash
            advance(lexer);
            // consume next char
            advance(lexer);
            return false;
        } else if (lexer->lookahead == '{') {
            advance(lexer);
            lexer->result_symbol = INTERPOLATION_START;
            return true;
        }
    }

    if (valid_symbols[INTERPOLATION_TEXT]) {
        // scan until the interpolation ends
        if (lexer->lookahead == '}') {
            // let the grammar figure out that INTERPOLATION_TEXT is not here
            // instead
            return false;
        }
        return scan_js_expr(scanner, lexer);
    }

    // if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
    //   return false;
    // }
    // s->indentation = 1;
    return false;
}

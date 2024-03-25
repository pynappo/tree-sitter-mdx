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
  bool escape_following_char;
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

static void scan_js_string(Scanner *scanner, TSLexer *lexer, uint32_t delim) {
  // consume opening delimiter
  advance(lexer);
  while (lexer->lookahead != delim) {
    advance(lexer);
    if (lexer->lookahead == '\\') {
      advance(lexer);
    }
  }
  // consume closing delimiter
  advance(lexer);
  // array_pop(scanner->delimiter_stack);
}
static bool scan_js_expr(Scanner *scanner, TSLexer *lexer) {
  // TODO: Implement comments
  DelimiterStack *delim_stack = scanner->delimiter_stack;
  if (delim_stack->size > 0) {
    // something went wrong
    printf("delimstack should not be populated");
    return false;
  }
  while (delim_stack->size > 0) {
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
      advance(lexer);
      break;
    case '{':
      array_push(delim_stack, CURLY_BRACKET);
      break;
    case '}':
      if (array_back(delim_stack) == CURLY_BRACKET) {
        if (delim_stack->size == 1) {
          // if it's the final one we stop the text there
          lexer->mark_end(lexer);
        }
        array_pop(delim_stack);
      }
      break;
    case '"':
      // array_push(delim_stack, DOUBLE_QUOTE);
      scan_js_string(scanner, lexer, '"');
      break;
    case '\'':
      // array_push(delim_stack, SINGLE_QUOTE);
      scan_js_string(scanner, lexer, '\'');
      break;
    case '`':
      // array_push(delim_stack, BACKTICK);
      scan_js_string(scanner, lexer, '`');
      break;
    default:
      break;
    }
    advance(lexer);
  }
  return true;
}

// largely taken from markdown's scanner
void *tree_sitter_mdx_external_scanner_create() {
  printf("hi");
  Scanner *s = (Scanner *)ts_malloc(sizeof(Scanner));
  s->delimiter_stack = ts_malloc(sizeof(DelimiterStack));
  array_init(s->delimiter_stack);

  return s;
}

unsigned tree_sitter_mdx_external_scanner_serialize(void *payload,
                                                    char *buffer) {
  printf("hi");
  Scanner *s = (Scanner *)payload;
  unsigned size = 0;
  // buffer[size++] = (char)s->indentation;
  buffer[size++] = (bool)s->escape_following_char;
  for (int i = 0; i < s->delimiter_stack->size; i++) {
    char delim = *array_get(s->delimiter_stack, i);
    buffer[size++] = delim;
  }
  return size;
}
void tree_sitter_mdx_external_scanner_deserialize(void *payload, char *buffer,
                                                  unsigned length) {
  printf("hi");
  Scanner *scanner = (Scanner *)payload;
  unsigned size = 0;
  array_init(scanner->delimiter_stack);
  scanner->escape_following_char = (bool)buffer[size++];
  while (size < length) {
    enum Delimiter d = (enum Delimiter)buffer[size++];
    array_push(scanner->delimiter_stack, d);
  }
}
void tree_sitter_mdx_external_scanner_destroy(void *payload) {
  printf("hi");
  Scanner *scanner = (Scanner *)payload;
  array_delete(scanner->delimiter_stack);
  ts_free(scanner);
}

bool tree_sitter_mdx_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;
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
      lexer->mark_end(lexer);
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
      lexer->result_symbol = INTERPOLATION_START;
      array_push(scanner->delimiter_stack, CURLY_BRACKET);
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    }
  }

  if (valid_symbols[INTERPOLATION_TEXT]) {
    // scan until the interpolation ends
    if (lexer->lookahead == '}') {
      // let the grammar count this as optional
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

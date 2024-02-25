#include "tree_sitter/parser.h"
#include <assert.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>

// This scanner exists to determine what can be highlighted with JSX and what
// can be highlighted with markdown
enum TokenType {
  IMPORT_START,
  INTERPOLATION_START,
  INTERPOLATION_END,
  _EOF,
  MARKDOWN,
};

typedef struct {
  uint8_t indentation;
  bool escape_following_char;
} Scanner;
static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

// for debugging:
// #define advance(lexer) {\
//   printf("advance %c, L%d\n", lexer->lookahead, __LINE__);\
//   advance(lexer);\
// }
//
// #define skip(lexer) {\
//   printf("skip %c, L%d\n", lexer->lookahead, __LINE__);\
//   skip(lexer);\
// }

static unsigned serialize(Scanner *s, char *buffer) {
  unsigned size = 0;
  buffer[size++] = (char)s->indentation;
  buffer[size++] = (bool)s->escape_following_char;
  return size;
}

static void deserialize(Scanner *s, const char *buffer, unsigned length) {
  s->indentation = 0;
}

// largely taken from markdown's scanner
void *tree_sitter_mdx_external_scanner_create(void) {
  Scanner *s = (Scanner *)malloc(sizeof(Scanner));
  deserialize(s, NULL, 0);

  return s;
}

unsigned tree_sitter_mdx_external_scanner_serialize(void *payload,
                                                    char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  return serialize(scanner, buffer);
}

void tree_sitter_mdx_external_scanner_deserialize(void *payload,
                                                  char *buffer,
                                                  unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  deserialize(scanner, buffer, length);
}

void tree_sitter_mdx_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  free(scanner);
}

static bool match(TSLexer *lexer, char* str) {
  for (int i = 0; i < strlen(str); i++) {
    if (lexer->lookahead != str[i]) {
      return false;
    }
    advance(lexer);
  }
  return true;
}

int i = 0;
bool tree_sitter_mdx_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *s = (Scanner *)payload;
  // printf("%d, %c\n", i++, lexer->lookahead);
  if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
    s->indentation = 0;
    return false;
  }

  if (valid_symbols[IMPORT_START] || !(s->indentation)) {
    // the extra space is mandatory
    if (match(lexer, "import ")) {
      lexer->result_symbol = IMPORT_START;
      return true;
    }
  }

  if (valid_symbols[INTERPOLATION_START]) {
    if (lexer->lookahead == '\\') {
      advance(lexer);
    }
    if (lexer->lookahead == '{') {
      lexer->result_symbol = INTERPOLATION_START;
      return true;
    }
  }

  if (valid_symbols[INTERPOLATION_END]) {
    if (lexer->lookahead == "\\"){
      return false;
    }
    if (lexer->lookahead == '{') {
      lexer->result_symbol = INTERPOLATION_START;
      return true;
    }
  }

  if (valid_symbols[_EOF]) {
    if (lexer->eof) {
      lexer->result_symbol = _EOF;
      return true;
    }
  }

  s->indentation = 1;
  return false;
}

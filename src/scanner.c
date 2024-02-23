#include "tree_sitter/parser.h"
#include <wctype.h>

// This scanner exists to determine what can be highlighted with JSX and what
// can be highlighted with markdown
enum TokenType {
  JSX_SECTION,
  MARKDOWN_SECTION,
};

struct Scanner {
	uint8_t indentation;
};
void *tree_sitter_mdx_external_scanner_create() { return NULL; }

void tree_sitter_mdx_external_scanner_destroy(void *p) {}

void tree_sitter_mdx_external_scanner_reset(void *p) {}

unsigned tree_sitter_mdx_external_scanner_serialize(void *p, char *buffer) { return 0; }

void tree_sitter_mdx_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

// for debugging:
#define advance(lexer) {\
	printf("advance %c, L%d\n", lexer->lookahead, __LINE__);\
	advance(lexer);\
}

#define skip(lexer) {\
	printf("skip %c, L%d\n", lexer->lookahead, __LINE__);\
	skip(lexer);\
}


bool tree_sitter_mdx_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    return false;
}

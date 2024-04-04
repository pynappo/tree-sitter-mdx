#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 1
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_interpolation_token1 = 1,
  sym_markdown_word = 2,
  aux_sym_escaped_char_token1 = 3,
  sym_escape = 4,
  aux_sym_import_statement_token1 = 5,
  anon_sym_COMMA = 6,
  aux_sym_import_statement_token2 = 7,
  aux_sym_import_statement_token3 = 8,
  aux_sym_jsx_component_token1 = 9,
  aux_sym_jsx_component_token2 = 10,
  aux_sym_jsx_component_token3 = 11,
  sym_jsx_identifier = 12,
  aux_sym_new_line_token1 = 13,
  sym_import_start = 14,
  sym_interpolation_start = 15,
  sym_interpolation_content = 16,
  sym_eof = 17,
  sym_jsx_string = 18,
  sym_error = 19,
  sym_document = 20,
  sym_jsx_section = 21,
  sym_markdown_section = 22,
  sym_interpolation = 23,
  sym_escaped_char = 24,
  sym_import_statement = 25,
  sym_html_component = 26,
  sym_jsx_component = 27,
  sym_new_line = 28,
  aux_sym_document_repeat1 = 29,
  aux_sym_jsx_section_repeat1 = 30,
  aux_sym_markdown_section_repeat1 = 31,
  aux_sym_markdown_section_repeat2 = 32,
  aux_sym_import_statement_repeat1 = 33,
  alias_sym_interpolation_end = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_interpolation_token1] = "right_brace",
  [sym_markdown_word] = "markdown_word",
  [aux_sym_escaped_char_token1] = "escaped_char_token1",
  [sym_escape] = "escape",
  [aux_sym_import_statement_token1] = "left_brace",
  [anon_sym_COMMA] = ",",
  [aux_sym_import_statement_token2] = "import_statement_token2",
  [aux_sym_import_statement_token3] = "semicolon",
  [aux_sym_jsx_component_token1] = "jsx_component_token1",
  [aux_sym_jsx_component_token2] = "jsx_component_token2",
  [aux_sym_jsx_component_token3] = "jsx_component_token3",
  [sym_jsx_identifier] = "jsx_identifier",
  [aux_sym_new_line_token1] = "new_line_token1",
  [sym_import_start] = "import_start",
  [sym_interpolation_start] = "interpolation_start",
  [sym_interpolation_content] = "interpolation_content",
  [sym_eof] = "eof",
  [sym_jsx_string] = "jsx_string",
  [sym_error] = "error",
  [sym_document] = "document",
  [sym_jsx_section] = "jsx_section",
  [sym_markdown_section] = "markdown_section",
  [sym_interpolation] = "interpolation",
  [sym_escaped_char] = "escaped_char",
  [sym_import_statement] = "import_statement",
  [sym_html_component] = "html_component",
  [sym_jsx_component] = "jsx_component",
  [sym_new_line] = "new_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_jsx_section_repeat1] = "jsx_section_repeat1",
  [aux_sym_markdown_section_repeat1] = "markdown_section_repeat1",
  [aux_sym_markdown_section_repeat2] = "markdown_section_repeat2",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [alias_sym_interpolation_end] = "interpolation_end",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_interpolation_token1] = aux_sym_interpolation_token1,
  [sym_markdown_word] = sym_markdown_word,
  [aux_sym_escaped_char_token1] = aux_sym_escaped_char_token1,
  [sym_escape] = sym_escape,
  [aux_sym_import_statement_token1] = aux_sym_import_statement_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_import_statement_token2] = aux_sym_import_statement_token2,
  [aux_sym_import_statement_token3] = aux_sym_import_statement_token3,
  [aux_sym_jsx_component_token1] = aux_sym_jsx_component_token1,
  [aux_sym_jsx_component_token2] = aux_sym_jsx_component_token2,
  [aux_sym_jsx_component_token3] = aux_sym_jsx_component_token3,
  [sym_jsx_identifier] = sym_jsx_identifier,
  [aux_sym_new_line_token1] = aux_sym_new_line_token1,
  [sym_import_start] = sym_import_start,
  [sym_interpolation_start] = sym_interpolation_start,
  [sym_interpolation_content] = sym_interpolation_content,
  [sym_eof] = sym_eof,
  [sym_jsx_string] = sym_jsx_string,
  [sym_error] = sym_error,
  [sym_document] = sym_document,
  [sym_jsx_section] = sym_jsx_section,
  [sym_markdown_section] = sym_markdown_section,
  [sym_interpolation] = sym_interpolation,
  [sym_escaped_char] = sym_escaped_char,
  [sym_import_statement] = sym_import_statement,
  [sym_html_component] = sym_html_component,
  [sym_jsx_component] = sym_jsx_component,
  [sym_new_line] = sym_new_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_jsx_section_repeat1] = aux_sym_jsx_section_repeat1,
  [aux_sym_markdown_section_repeat1] = aux_sym_markdown_section_repeat1,
  [aux_sym_markdown_section_repeat2] = aux_sym_markdown_section_repeat2,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [alias_sym_interpolation_end] = alias_sym_interpolation_end,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_interpolation_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_markdown_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_escaped_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_import_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_jsx_component_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jsx_component_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jsx_component_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_jsx_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_new_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_import_start] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation_start] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation_content] = {
    .visible = true,
    .named = true,
  },
  [sym_eof] = {
    .visible = true,
    .named = true,
  },
  [sym_jsx_string] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_jsx_section] = {
    .visible = true,
    .named = true,
  },
  [sym_markdown_section] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_html_component] = {
    .visible = true,
    .named = true,
  },
  [sym_jsx_component] = {
    .visible = true,
    .named = true,
  },
  [sym_new_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jsx_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_markdown_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_markdown_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_interpolation_end] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_interpolation_end,
  },
  [2] = {
    [2] = alias_sym_interpolation_end,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '\\') SKIP(0)
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '{') SKIP(25)
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(14)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(14)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == '{') SKIP(25)
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(44);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(48);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '/') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 'S' ||
          lookahead == 'n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(15);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == '\\') SKIP(19)
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(15);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == '\\') SKIP(21)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(48);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '/') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == '{') SKIP(25)
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(35);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(15);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_escaped_char_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_import_statement_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_import_statement_token3);
      if (lookahead == ';') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(16);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_jsx_component_token2);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_jsx_component_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_jsx_component_token3);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(48);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(48);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_new_line_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 27, .external_lex_state = 2},
  [2] = {.lex_state = 27, .external_lex_state = 2},
  [3] = {.lex_state = 27, .external_lex_state = 2},
  [4] = {.lex_state = 1, .external_lex_state = 3},
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 1, .external_lex_state = 3},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 2, .external_lex_state = 4},
  [9] = {.lex_state = 2, .external_lex_state = 4},
  [10] = {.lex_state = 27, .external_lex_state = 2},
  [11] = {.lex_state = 27, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 1, .external_lex_state = 3},
  [14] = {.lex_state = 1, .external_lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 3},
  [16] = {.lex_state = 1, .external_lex_state = 3},
  [17] = {.lex_state = 2, .external_lex_state = 4},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 2, .external_lex_state = 4},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 3, .external_lex_state = 5},
  [23] = {.lex_state = 3, .external_lex_state = 5},
  [24] = {.lex_state = 23, .external_lex_state = 6},
  [25] = {.lex_state = 1, .external_lex_state = 5},
  [26] = {.lex_state = 3, .external_lex_state = 5},
  [27] = {.lex_state = 3, .external_lex_state = 5},
  [28] = {.lex_state = 1, .external_lex_state = 5},
  [29] = {.lex_state = 24, .external_lex_state = 7},
  [30] = {.lex_state = 1, .external_lex_state = 5},
  [31] = {.lex_state = 1, .external_lex_state = 5},
  [32] = {.lex_state = 1, .external_lex_state = 5},
  [33] = {.lex_state = 1, .external_lex_state = 5},
  [34] = {.lex_state = 1, .external_lex_state = 5},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 0, .external_lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0, .external_lex_state = 6},
  [40] = {.lex_state = 0, .external_lex_state = 6},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 24},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_import_statement_token2] = ACTIONS(1),
    [aux_sym_jsx_component_token3] = ACTIONS(1),
    [sym_import_start] = ACTIONS(1),
    [sym_interpolation_start] = ACTIONS(1),
    [sym_interpolation_content] = ACTIONS(1),
    [sym_eof] = ACTIONS(1),
    [sym_jsx_string] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(43),
    [sym_jsx_section] = STATE(25),
    [sym_markdown_section] = STATE(25),
    [sym_interpolation] = STATE(5),
    [sym_escaped_char] = STATE(5),
    [sym_import_statement] = STATE(28),
    [sym_html_component] = STATE(28),
    [sym_jsx_component] = STATE(28),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_jsx_section_repeat1] = STATE(9),
    [aux_sym_markdown_section_repeat1] = STATE(5),
    [aux_sym_markdown_section_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_markdown_word] = ACTIONS(5),
    [sym_escape] = ACTIONS(7),
    [aux_sym_jsx_component_token1] = ACTIONS(9),
    [sym_import_start] = ACTIONS(11),
    [sym_interpolation_start] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      sym_markdown_word,
    ACTIONS(7), 1,
      sym_escape,
    ACTIONS(9), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(11), 1,
      sym_import_start,
    ACTIONS(13), 1,
      sym_interpolation_start,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(6), 1,
      aux_sym_markdown_section_repeat2,
    STATE(9), 1,
      aux_sym_jsx_section_repeat1,
    STATE(25), 2,
      sym_jsx_section,
      sym_markdown_section,
    STATE(5), 3,
      sym_interpolation,
      sym_escaped_char,
      aux_sym_markdown_section_repeat1,
    STATE(28), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [42] = 12,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_markdown_word,
    ACTIONS(22), 1,
      sym_escape,
    ACTIONS(25), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(28), 1,
      sym_import_start,
    ACTIONS(31), 1,
      sym_interpolation_start,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(6), 1,
      aux_sym_markdown_section_repeat2,
    STATE(9), 1,
      aux_sym_jsx_section_repeat1,
    STATE(25), 2,
      sym_jsx_section,
      sym_markdown_section,
    STATE(5), 3,
      sym_interpolation,
      sym_escaped_char,
      aux_sym_markdown_section_repeat1,
    STATE(28), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [84] = 6,
    ACTIONS(34), 1,
      sym_markdown_word,
    ACTIONS(37), 1,
      sym_escape,
    ACTIONS(42), 1,
      sym_interpolation_start,
    STATE(4), 1,
      aux_sym_markdown_section_repeat2,
    ACTIONS(40), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(5), 3,
      sym_interpolation,
      sym_escaped_char,
      aux_sym_markdown_section_repeat1,
  [106] = 6,
    ACTIONS(7), 1,
      sym_escape,
    ACTIONS(13), 1,
      sym_interpolation_start,
    ACTIONS(45), 1,
      sym_markdown_word,
    STATE(15), 1,
      sym_new_line,
    ACTIONS(47), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(7), 3,
      sym_interpolation,
      sym_escaped_char,
      aux_sym_markdown_section_repeat1,
  [128] = 6,
    ACTIONS(5), 1,
      sym_markdown_word,
    ACTIONS(7), 1,
      sym_escape,
    ACTIONS(13), 1,
      sym_interpolation_start,
    STATE(4), 1,
      aux_sym_markdown_section_repeat2,
    ACTIONS(49), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(5), 3,
      sym_interpolation,
      sym_escaped_char,
      aux_sym_markdown_section_repeat1,
  [150] = 5,
    ACTIONS(51), 1,
      sym_markdown_word,
    ACTIONS(54), 1,
      sym_escape,
    ACTIONS(59), 1,
      sym_interpolation_start,
    ACTIONS(57), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(7), 3,
      sym_interpolation,
      sym_escaped_char,
      aux_sym_markdown_section_repeat1,
  [169] = 5,
    ACTIONS(62), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(67), 1,
      sym_import_start,
    STATE(8), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(65), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(28), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [188] = 5,
    ACTIONS(9), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(11), 1,
      sym_import_start,
    STATE(8), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(70), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(28), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [207] = 2,
    ACTIONS(74), 2,
      sym_markdown_word,
      aux_sym_jsx_component_token1,
    ACTIONS(72), 4,
      sym_import_start,
      sym_interpolation_start,
      ts_builtin_sym_end,
      sym_escape,
  [218] = 2,
    ACTIONS(76), 2,
      sym_markdown_word,
      aux_sym_jsx_component_token1,
    ACTIONS(17), 4,
      sym_import_start,
      sym_interpolation_start,
      ts_builtin_sym_end,
      sym_escape,
  [229] = 2,
    ACTIONS(78), 1,
      sym_markdown_word,
    ACTIONS(80), 4,
      sym_interpolation_start,
      sym_eof,
      sym_escape,
      aux_sym_new_line_token1,
  [239] = 2,
    ACTIONS(74), 1,
      sym_markdown_word,
    ACTIONS(72), 4,
      sym_interpolation_start,
      sym_eof,
      sym_escape,
      aux_sym_new_line_token1,
  [249] = 2,
    ACTIONS(82), 1,
      sym_markdown_word,
    ACTIONS(84), 4,
      sym_interpolation_start,
      sym_eof,
      sym_escape,
      aux_sym_new_line_token1,
  [259] = 2,
    ACTIONS(86), 1,
      sym_markdown_word,
    ACTIONS(40), 4,
      sym_interpolation_start,
      sym_eof,
      sym_escape,
      aux_sym_new_line_token1,
  [269] = 2,
    ACTIONS(88), 1,
      sym_markdown_word,
    ACTIONS(90), 4,
      sym_interpolation_start,
      sym_eof,
      sym_escape,
      aux_sym_new_line_token1,
  [279] = 2,
    ACTIONS(92), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(65), 3,
      sym_import_start,
      sym_eof,
      aux_sym_new_line_token1,
  [288] = 3,
    ACTIONS(94), 1,
      aux_sym_interpolation_token1,
    STATE(20), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      sym_jsx_identifier,
  [299] = 2,
    ACTIONS(74), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(72), 3,
      sym_import_start,
      sym_eof,
      aux_sym_new_line_token1,
  [308] = 3,
    ACTIONS(98), 1,
      aux_sym_interpolation_token1,
    STATE(21), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(100), 2,
      anon_sym_COMMA,
      sym_jsx_identifier,
  [319] = 3,
    ACTIONS(102), 1,
      aux_sym_interpolation_token1,
    STATE(21), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      sym_jsx_identifier,
  [330] = 2,
    ACTIONS(107), 1,
      aux_sym_import_statement_token3,
    ACTIONS(109), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [338] = 2,
    ACTIONS(111), 1,
      aux_sym_import_statement_token3,
    ACTIONS(113), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [346] = 3,
    ACTIONS(115), 1,
      aux_sym_import_statement_token1,
    ACTIONS(117), 1,
      sym_jsx_identifier,
    ACTIONS(119), 1,
      sym_jsx_string,
  [356] = 2,
    STATE(11), 1,
      sym_new_line,
    ACTIONS(121), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [364] = 2,
    ACTIONS(123), 1,
      aux_sym_import_statement_token3,
    ACTIONS(125), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [372] = 2,
    ACTIONS(127), 1,
      aux_sym_import_statement_token3,
    ACTIONS(129), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [380] = 2,
    STATE(17), 1,
      sym_new_line,
    ACTIONS(131), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [388] = 2,
    ACTIONS(133), 1,
      aux_sym_interpolation_token1,
    ACTIONS(135), 1,
      sym_interpolation_content,
  [395] = 1,
    ACTIONS(137), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [400] = 1,
    ACTIONS(125), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [405] = 1,
    ACTIONS(139), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [410] = 1,
    ACTIONS(129), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [415] = 1,
    ACTIONS(141), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [420] = 1,
    ACTIONS(143), 1,
      aux_sym_escaped_char_token1,
  [424] = 1,
    ACTIONS(145), 1,
      sym_jsx_string,
  [428] = 1,
    ACTIONS(147), 1,
      aux_sym_import_statement_token2,
  [432] = 1,
    ACTIONS(149), 1,
      aux_sym_import_statement_token2,
  [436] = 1,
    ACTIONS(151), 1,
      sym_jsx_string,
  [440] = 1,
    ACTIONS(153), 1,
      sym_jsx_string,
  [444] = 1,
    ACTIONS(155), 1,
      aux_sym_import_statement_token2,
  [448] = 1,
    ACTIONS(157), 1,
      aux_sym_jsx_component_token2,
  [452] = 1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [456] = 1,
    ACTIONS(161), 1,
      aux_sym_jsx_component_token3,
  [460] = 1,
    ACTIONS(163), 1,
      aux_sym_interpolation_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 169,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 218,
  [SMALL_STATE(12)] = 229,
  [SMALL_STATE(13)] = 239,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 269,
  [SMALL_STATE(17)] = 279,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 308,
  [SMALL_STATE(21)] = 319,
  [SMALL_STATE(22)] = 330,
  [SMALL_STATE(23)] = 338,
  [SMALL_STATE(24)] = 346,
  [SMALL_STATE(25)] = 356,
  [SMALL_STATE(26)] = 364,
  [SMALL_STATE(27)] = 372,
  [SMALL_STATE(28)] = 380,
  [SMALL_STATE(29)] = 388,
  [SMALL_STATE(30)] = 395,
  [SMALL_STATE(31)] = 400,
  [SMALL_STATE(32)] = 405,
  [SMALL_STATE(33)] = 410,
  [SMALL_STATE(34)] = 415,
  [SMALL_STATE(35)] = 420,
  [SMALL_STATE(36)] = 424,
  [SMALL_STATE(37)] = 428,
  [SMALL_STATE(38)] = 432,
  [SMALL_STATE(39)] = 436,
  [SMALL_STATE(40)] = 440,
  [SMALL_STATE(41)] = 444,
  [SMALL_STATE(42)] = 448,
  [SMALL_STATE(43)] = 452,
  [SMALL_STATE(44)] = 456,
  [SMALL_STATE(45)] = 460,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markdown_section_repeat2, 2), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat2, 2), SHIFT_REPEAT(35),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat2, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat2, 2), SHIFT_REPEAT(29),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_section, 1),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(35),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(29),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsx_section_repeat1, 2), SHIFT_REPEAT(42),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jsx_section_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jsx_section_repeat1, 2), SHIFT_REPEAT(24),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_section, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_line, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_line, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_markdown_section_repeat2, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_char, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_char, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsx_section_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(21),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_component, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_import_start = 0,
  ts_external_token_interpolation_start = 1,
  ts_external_token_interpolation_content = 2,
  ts_external_token_eof = 3,
  ts_external_token_jsx_string = 4,
  ts_external_token_error = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_import_start] = sym_import_start,
  [ts_external_token_interpolation_start] = sym_interpolation_start,
  [ts_external_token_interpolation_content] = sym_interpolation_content,
  [ts_external_token_eof] = sym_eof,
  [ts_external_token_jsx_string] = sym_jsx_string,
  [ts_external_token_error] = sym_error,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_import_start] = true,
    [ts_external_token_interpolation_start] = true,
    [ts_external_token_interpolation_content] = true,
    [ts_external_token_eof] = true,
    [ts_external_token_jsx_string] = true,
    [ts_external_token_error] = true,
  },
  [2] = {
    [ts_external_token_import_start] = true,
    [ts_external_token_interpolation_start] = true,
  },
  [3] = {
    [ts_external_token_interpolation_start] = true,
    [ts_external_token_eof] = true,
  },
  [4] = {
    [ts_external_token_import_start] = true,
    [ts_external_token_eof] = true,
  },
  [5] = {
    [ts_external_token_eof] = true,
  },
  [6] = {
    [ts_external_token_jsx_string] = true,
  },
  [7] = {
    [ts_external_token_interpolation_content] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_mdx_external_scanner_create(void);
void tree_sitter_mdx_external_scanner_destroy(void *);
bool tree_sitter_mdx_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_mdx_external_scanner_serialize(void *, char *);
void tree_sitter_mdx_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mdx(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_mdx_external_scanner_create,
      tree_sitter_mdx_external_scanner_destroy,
      tree_sitter_mdx_external_scanner_scan,
      tree_sitter_mdx_external_scanner_serialize,
      tree_sitter_mdx_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

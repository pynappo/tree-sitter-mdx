#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 1
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_interpolation_token1 = 1,
  aux_sym_interpolation_token2 = 2,
  aux_sym_markdown_text_token1 = 3,
  aux_sym_import_statement_token1 = 4,
  anon_sym_COMMA = 5,
  anon_sym_from = 6,
  aux_sym_jsx_component_token1 = 7,
  aux_sym_jsx_component_token2 = 8,
  aux_sym_jsx_component_token3 = 9,
  sym_semicolon = 10,
  sym_word = 11,
  sym_identifier = 12,
  sym_double_quoted_string = 13,
  sym_single_quoted_string = 14,
  sym_backtick_quoted_string = 15,
  sym_newline_token = 16,
  sym_import_start = 17,
  sym_interpolation_start = 18,
  sym_markdown = 19,
  sym_eof = 20,
  sym_document = 21,
  sym_jsx_section = 22,
  sym_markdown_section = 23,
  sym_interpolation = 24,
  sym_markdown_text = 25,
  sym_import_statement = 26,
  sym_html_component = 27,
  sym_jsx_component = 28,
  sym_string = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_jsx_section_repeat1 = 31,
  aux_sym_markdown_section_repeat1 = 32,
  aux_sym_markdown_text_repeat1 = 33,
  aux_sym_import_statement_repeat1 = 34,
  alias_sym_right_brace = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_interpolation_token1] = "interpolation_token1",
  [aux_sym_interpolation_token2] = "interpolation_token2",
  [aux_sym_markdown_text_token1] = "markdown_text_token1",
  [aux_sym_import_statement_token1] = "left_brace",
  [anon_sym_COMMA] = ",",
  [anon_sym_from] = "from",
  [aux_sym_jsx_component_token1] = "jsx_component_token1",
  [aux_sym_jsx_component_token2] = "jsx_component_token2",
  [aux_sym_jsx_component_token3] = "jsx_component_token3",
  [sym_semicolon] = "semicolon",
  [sym_word] = "word",
  [sym_identifier] = "identifier",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_backtick_quoted_string] = "backtick_quoted_string",
  [sym_newline_token] = "newline_token",
  [sym_import_start] = "import_start",
  [sym_interpolation_start] = "interpolation_start",
  [sym_markdown] = "markdown",
  [sym_eof] = "eof",
  [sym_document] = "document",
  [sym_jsx_section] = "jsx_section",
  [sym_markdown_section] = "markdown_section",
  [sym_interpolation] = "interpolation",
  [sym_markdown_text] = "markdown_text",
  [sym_import_statement] = "import_statement",
  [sym_html_component] = "html_component",
  [sym_jsx_component] = "jsx_component",
  [sym_string] = "string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_jsx_section_repeat1] = "jsx_section_repeat1",
  [aux_sym_markdown_section_repeat1] = "markdown_section_repeat1",
  [aux_sym_markdown_text_repeat1] = "markdown_text_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [alias_sym_right_brace] = "right_brace",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_interpolation_token1] = aux_sym_interpolation_token1,
  [aux_sym_interpolation_token2] = aux_sym_interpolation_token2,
  [aux_sym_markdown_text_token1] = aux_sym_markdown_text_token1,
  [aux_sym_import_statement_token1] = aux_sym_import_statement_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_from] = anon_sym_from,
  [aux_sym_jsx_component_token1] = aux_sym_jsx_component_token1,
  [aux_sym_jsx_component_token2] = aux_sym_jsx_component_token2,
  [aux_sym_jsx_component_token3] = aux_sym_jsx_component_token3,
  [sym_semicolon] = sym_semicolon,
  [sym_word] = sym_word,
  [sym_identifier] = sym_identifier,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_backtick_quoted_string] = sym_backtick_quoted_string,
  [sym_newline_token] = sym_newline_token,
  [sym_import_start] = sym_import_start,
  [sym_interpolation_start] = sym_interpolation_start,
  [sym_markdown] = sym_markdown,
  [sym_eof] = sym_eof,
  [sym_document] = sym_document,
  [sym_jsx_section] = sym_jsx_section,
  [sym_markdown_section] = sym_markdown_section,
  [sym_interpolation] = sym_interpolation,
  [sym_markdown_text] = sym_markdown_text,
  [sym_import_statement] = sym_import_statement,
  [sym_html_component] = sym_html_component,
  [sym_jsx_component] = sym_jsx_component,
  [sym_string] = sym_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_jsx_section_repeat1] = aux_sym_jsx_section_repeat1,
  [aux_sym_markdown_section_repeat1] = aux_sym_markdown_section_repeat1,
  [aux_sym_markdown_text_repeat1] = aux_sym_markdown_text_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [alias_sym_right_brace] = alias_sym_right_brace,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_interpolation_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolation_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_markdown_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
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
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_backtick_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_newline_token] = {
    .visible = true,
    .named = true,
  },
  [sym_import_start] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation_start] = {
    .visible = true,
    .named = true,
  },
  [sym_markdown] = {
    .visible = true,
    .named = true,
  },
  [sym_eof] = {
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
  [sym_markdown_text] = {
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
  [sym_string] = {
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
  [aux_sym_markdown_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_right_brace] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_right_brace,
  },
  [2] = {
    [3] = alias_sym_right_brace,
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
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '\\') SKIP(0)
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == '/' ||
          lookahead == 'S') ADVANCE(75);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(136);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(32)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(19);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(20);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(23);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '`') ADVANCE(131);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(43);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(71);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '/') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(126);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '/') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == ';') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '<') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(36);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '<') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == '/' ||
          lookahead == 'S') ADVANCE(75);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(36);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == '\\') SKIP(42)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == '`') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(45)
      END_STATE();
    case 46:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(136);
      if (lookahead == '\\') SKIP(49)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(36);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\f' < lookahead) &&
          lookahead != ' ') ADVANCE(46);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '\\') SKIP(49)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(36);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_interpolation_token2);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_interpolation_token2);
      if (lookahead == '}') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_markdown_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(3);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(4);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(5);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(6);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(7);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_jsx_component_token2);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_jsx_component_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_jsx_component_token3);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_semicolon);
      if (lookahead == ';') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '/' ||
          lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/' ||
          lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(101);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(80);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(104);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(115);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '`') ADVANCE(84);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '`') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(86);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(82);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(94);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(84);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(99);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(86);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(96);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(125);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(126);
      if (lookahead == '`') ADVANCE(96);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(126);
      if (lookahead == '`') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(101);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '`') ADVANCE(99);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '`') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(126);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '`') ADVANCE(131);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '\'') ADVANCE(126);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_newline_token);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_newline_token);
      if (lookahead == '\n') ADVANCE(135);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 40, .external_lex_state = 2},
  [2] = {.lex_state = 40, .external_lex_state = 2},
  [3] = {.lex_state = 47, .external_lex_state = 3},
  [4] = {.lex_state = 48, .external_lex_state = 4},
  [5] = {.lex_state = 47, .external_lex_state = 3},
  [6] = {.lex_state = 48, .external_lex_state = 4},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 48, .external_lex_state = 4},
  [9] = {.lex_state = 48, .external_lex_state = 4},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 47, .external_lex_state = 3},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 48, .external_lex_state = 4},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 47},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 51},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 42},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 47},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [aux_sym_jsx_component_token3] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_import_start] = ACTIONS(1),
    [sym_interpolation_start] = ACTIONS(1),
    [sym_markdown] = ACTIONS(1),
    [sym_eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(34),
    [sym_jsx_section] = STATE(18),
    [sym_markdown_section] = STATE(18),
    [sym_interpolation] = STATE(6),
    [sym_markdown_text] = STATE(6),
    [sym_import_statement] = STATE(33),
    [sym_html_component] = STATE(33),
    [sym_jsx_component] = STATE(33),
    [aux_sym_jsx_section_repeat1] = STATE(3),
    [aux_sym_markdown_section_repeat1] = STATE(6),
    [aux_sym_markdown_text_repeat1] = STATE(8),
    [aux_sym_markdown_text_token1] = ACTIONS(3),
    [aux_sym_jsx_component_token1] = ACTIONS(5),
    [sym_import_start] = ACTIONS(7),
    [sym_interpolation_start] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      aux_sym_markdown_text_token1,
    ACTIONS(5), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(7), 1,
      sym_import_start,
    ACTIONS(9), 1,
      sym_interpolation_start,
    STATE(3), 1,
      aux_sym_jsx_section_repeat1,
    STATE(8), 1,
      aux_sym_markdown_text_repeat1,
    STATE(25), 2,
      sym_jsx_section,
      sym_markdown_section,
    STATE(6), 3,
      sym_interpolation,
      sym_markdown_text,
      aux_sym_markdown_section_repeat1,
    STATE(33), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [33] = 5,
    ACTIONS(5), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(7), 1,
      sym_import_start,
    STATE(5), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym_newline_token,
    STATE(33), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [52] = 5,
    ACTIONS(15), 1,
      aux_sym_markdown_text_token1,
    ACTIONS(18), 1,
      sym_interpolation_start,
    STATE(8), 1,
      aux_sym_markdown_text_repeat1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_newline_token,
    STATE(4), 3,
      sym_interpolation,
      sym_markdown_text,
      aux_sym_markdown_section_repeat1,
  [71] = 5,
    ACTIONS(23), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(26), 1,
      sym_import_start,
    STATE(5), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_newline_token,
    STATE(33), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [90] = 5,
    ACTIONS(9), 1,
      sym_interpolation_start,
    ACTIONS(31), 1,
      aux_sym_markdown_text_token1,
    STATE(8), 1,
      aux_sym_markdown_text_repeat1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_newline_token,
    STATE(4), 3,
      sym_interpolation,
      sym_markdown_text,
      aux_sym_markdown_section_repeat1,
  [109] = 4,
    ACTIONS(33), 1,
      aux_sym_import_statement_token1,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(23), 1,
      sym_string,
    ACTIONS(37), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [124] = 2,
    STATE(9), 1,
      aux_sym_markdown_text_repeat1,
    ACTIONS(39), 4,
      sym_interpolation_start,
      ts_builtin_sym_end,
      aux_sym_markdown_text_token1,
      sym_newline_token,
  [134] = 3,
    ACTIONS(43), 1,
      aux_sym_markdown_text_token1,
    STATE(9), 1,
      aux_sym_markdown_text_repeat1,
    ACTIONS(41), 3,
      sym_interpolation_start,
      ts_builtin_sym_end,
      sym_newline_token,
  [146] = 3,
    ACTIONS(46), 1,
      aux_sym_interpolation_token2,
    STATE(10), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(48), 2,
      anon_sym_COMMA,
      sym_identifier,
  [157] = 2,
    STATE(26), 1,
      sym_string,
    ACTIONS(37), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [166] = 2,
    STATE(21), 1,
      sym_string,
    ACTIONS(37), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [175] = 3,
    ACTIONS(51), 1,
      aux_sym_interpolation_token2,
    STATE(10), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(53), 2,
      anon_sym_COMMA,
      sym_identifier,
  [186] = 2,
    ACTIONS(55), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(21), 3,
      sym_import_start,
      ts_builtin_sym_end,
      sym_newline_token,
  [195] = 2,
    STATE(24), 1,
      sym_string,
    ACTIONS(37), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [204] = 3,
    ACTIONS(57), 1,
      aux_sym_interpolation_token2,
    STATE(13), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      sym_identifier,
  [215] = 1,
    ACTIONS(61), 4,
      sym_interpolation_start,
      ts_builtin_sym_end,
      aux_sym_markdown_text_token1,
      sym_newline_token,
  [222] = 3,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_newline_token,
    STATE(20), 1,
      aux_sym_document_repeat1,
  [232] = 3,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_newline_token,
    STATE(19), 1,
      aux_sym_document_repeat1,
  [242] = 3,
    ACTIONS(65), 1,
      sym_newline_token,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_document_repeat1,
  [252] = 2,
    ACTIONS(74), 1,
      sym_semicolon,
    ACTIONS(76), 1,
      sym_newline_token,
  [259] = 2,
    ACTIONS(78), 1,
      sym_semicolon,
    ACTIONS(80), 1,
      sym_newline_token,
  [266] = 2,
    ACTIONS(82), 1,
      sym_semicolon,
    ACTIONS(84), 1,
      sym_newline_token,
  [273] = 2,
    ACTIONS(86), 1,
      sym_semicolon,
    ACTIONS(88), 1,
      sym_newline_token,
  [280] = 1,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      sym_newline_token,
  [285] = 2,
    ACTIONS(92), 1,
      sym_semicolon,
    ACTIONS(94), 1,
      sym_newline_token,
  [292] = 1,
    ACTIONS(96), 1,
      sym_newline_token,
  [296] = 1,
    ACTIONS(98), 1,
      sym_newline_token,
  [300] = 1,
    ACTIONS(100), 1,
      aux_sym_jsx_component_token2,
  [304] = 1,
    ACTIONS(102), 1,
      anon_sym_from,
  [308] = 1,
    ACTIONS(104), 1,
      anon_sym_from,
  [312] = 1,
    ACTIONS(106), 1,
      anon_sym_from,
  [316] = 1,
    ACTIONS(108), 1,
      sym_newline_token,
  [320] = 1,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
  [324] = 1,
    ACTIONS(112), 1,
      aux_sym_interpolation_token1,
  [328] = 1,
    ACTIONS(114), 1,
      sym_newline_token,
  [332] = 1,
    ACTIONS(116), 1,
      aux_sym_jsx_component_token3,
  [336] = 1,
    ACTIONS(118), 1,
      sym_newline_token,
  [340] = 1,
    ACTIONS(120), 1,
      sym_newline_token,
  [344] = 1,
    ACTIONS(122), 1,
      aux_sym_interpolation_token2,
  [348] = 1,
    ACTIONS(124), 1,
      sym_newline_token,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 157,
  [SMALL_STATE(12)] = 166,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 204,
  [SMALL_STATE(17)] = 215,
  [SMALL_STATE(18)] = 222,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 242,
  [SMALL_STATE(21)] = 252,
  [SMALL_STATE(22)] = 259,
  [SMALL_STATE(23)] = 266,
  [SMALL_STATE(24)] = 273,
  [SMALL_STATE(25)] = 280,
  [SMALL_STATE(26)] = 285,
  [SMALL_STATE(27)] = 292,
  [SMALL_STATE(28)] = 296,
  [SMALL_STATE(29)] = 300,
  [SMALL_STATE(30)] = 304,
  [SMALL_STATE(31)] = 308,
  [SMALL_STATE(32)] = 312,
  [SMALL_STATE(33)] = 316,
  [SMALL_STATE(34)] = 320,
  [SMALL_STATE(35)] = 324,
  [SMALL_STATE(36)] = 328,
  [SMALL_STATE(37)] = 332,
  [SMALL_STATE(38)] = 336,
  [SMALL_STATE(39)] = 340,
  [SMALL_STATE(40)] = 344,
  [SMALL_STATE(41)] = 348,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_section, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(8),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jsx_section_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsx_section_repeat1, 2), SHIFT_REPEAT(29),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jsx_section_repeat1, 2), SHIFT_REPEAT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_section, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_text, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markdown_text_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_text_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(10),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsx_section_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_component, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [110] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7, .production_id = 2),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_import_start = 0,
  ts_external_token_interpolation_start = 1,
  ts_external_token_markdown = 2,
  ts_external_token_eof = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_import_start] = sym_import_start,
  [ts_external_token_interpolation_start] = sym_interpolation_start,
  [ts_external_token_markdown] = sym_markdown,
  [ts_external_token_eof] = sym_eof,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_import_start] = true,
    [ts_external_token_interpolation_start] = true,
    [ts_external_token_markdown] = true,
    [ts_external_token_eof] = true,
  },
  [2] = {
    [ts_external_token_import_start] = true,
    [ts_external_token_interpolation_start] = true,
  },
  [3] = {
    [ts_external_token_import_start] = true,
  },
  [4] = {
    [ts_external_token_interpolation_start] = true,
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

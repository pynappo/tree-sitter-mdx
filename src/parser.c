#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 1
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_interpolation_token1 = 1,
  sym_markdown_word = 2,
  sym_escaped_slash = 3,
  aux_sym_import_statement_token1 = 4,
  anon_sym_COMMA = 5,
  aux_sym_import_statement_token2 = 6,
  aux_sym_import_statement_token3 = 7,
  aux_sym_jsx_component_token1 = 8,
  aux_sym_jsx_component_token2 = 9,
  aux_sym_jsx_component_token3 = 10,
  sym_jsx_identifier = 11,
  sym_double_quoted_string = 12,
  sym_single_quoted_string = 13,
  sym_backtick_quoted_string = 14,
  aux_sym_new_line_token1 = 15,
  sym_import_start = 16,
  sym_interpolation_start = 17,
  sym_interpolation_content = 18,
  sym_eof = 19,
  sym_error = 20,
  sym_document = 21,
  sym_jsx_section = 22,
  sym_markdown_section = 23,
  sym_interpolation = 24,
  sym_import_statement = 25,
  sym_html_component = 26,
  sym_jsx_component = 27,
  sym_jsx_string = 28,
  sym_new_line = 29,
  aux_sym_document_repeat1 = 30,
  aux_sym_jsx_section_repeat1 = 31,
  aux_sym_markdown_section_repeat1 = 32,
  aux_sym_markdown_section_repeat2 = 33,
  aux_sym_import_statement_repeat1 = 34,
  alias_sym_interpolation_end = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_interpolation_token1] = "right_brace",
  [sym_markdown_word] = "markdown_word",
  [sym_escaped_slash] = "escaped_slash",
  [aux_sym_import_statement_token1] = "left_brace",
  [anon_sym_COMMA] = ",",
  [aux_sym_import_statement_token2] = "import_statement_token2",
  [aux_sym_import_statement_token3] = "semicolon",
  [aux_sym_jsx_component_token1] = "jsx_component_token1",
  [aux_sym_jsx_component_token2] = "jsx_component_token2",
  [aux_sym_jsx_component_token3] = "jsx_component_token3",
  [sym_jsx_identifier] = "jsx_identifier",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_backtick_quoted_string] = "backtick_quoted_string",
  [aux_sym_new_line_token1] = "new_line_token1",
  [sym_import_start] = "import_start",
  [sym_interpolation_start] = "interpolation_start",
  [sym_interpolation_content] = "interpolation_content",
  [sym_eof] = "eof",
  [sym_error] = "error",
  [sym_document] = "document",
  [sym_jsx_section] = "jsx_section",
  [sym_markdown_section] = "markdown_section",
  [sym_interpolation] = "interpolation",
  [sym_import_statement] = "import_statement",
  [sym_html_component] = "html_component",
  [sym_jsx_component] = "jsx_component",
  [sym_jsx_string] = "jsx_string",
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
  [sym_escaped_slash] = sym_escaped_slash,
  [aux_sym_import_statement_token1] = aux_sym_import_statement_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_import_statement_token2] = aux_sym_import_statement_token2,
  [aux_sym_import_statement_token3] = aux_sym_import_statement_token3,
  [aux_sym_jsx_component_token1] = aux_sym_jsx_component_token1,
  [aux_sym_jsx_component_token2] = aux_sym_jsx_component_token2,
  [aux_sym_jsx_component_token3] = aux_sym_jsx_component_token3,
  [sym_jsx_identifier] = sym_jsx_identifier,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_backtick_quoted_string] = sym_backtick_quoted_string,
  [aux_sym_new_line_token1] = aux_sym_new_line_token1,
  [sym_import_start] = sym_import_start,
  [sym_interpolation_start] = sym_interpolation_start,
  [sym_interpolation_content] = sym_interpolation_content,
  [sym_eof] = sym_eof,
  [sym_error] = sym_error,
  [sym_document] = sym_document,
  [sym_jsx_section] = sym_jsx_section,
  [sym_markdown_section] = sym_markdown_section,
  [sym_interpolation] = sym_interpolation,
  [sym_import_statement] = sym_import_statement,
  [sym_html_component] = sym_html_component,
  [sym_jsx_component] = sym_jsx_component,
  [sym_jsx_string] = sym_jsx_string,
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
  [sym_escaped_slash] = {
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
  [sym_jsx_string] = {
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

enum ts_field_identifiers {
  field_type = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = alias_sym_interpolation_end,
  },
  [3] = {
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
  [13] = 13,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 11,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == '\\') SKIP(0)
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(45)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '\\') SKIP(46)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(37);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(36)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(36)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '\\') SKIP(46)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(37);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '{') SKIP(45)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(84);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '`') ADVANCE(95);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(96);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(86);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '`') ADVANCE(95);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(98);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '`') ADVANCE(16);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(23);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '`') ADVANCE(131);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(26);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(48);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(126);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(78);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '/') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '`') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '`') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '/') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'S' ||
          lookahead == 'n') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') SKIP(42)
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == ';') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == '<') ADVANCE(74);
      END_STATE();
    case 38:
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '\\') SKIP(46)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(37);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == '\\') SKIP(42)
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '{') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(45)
      END_STATE();
    case 45:
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '\\') SKIP(46)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(37);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '{') SKIP(45)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == '`') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(50)
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '}') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escaped_slash);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') ADVANCE(39);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_escaped_slash);
      if (lookahead == '\\') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(7);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(8);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '`') ADVANCE(95);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(9);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(10);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(11);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(12);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '`') ADVANCE(95);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(13);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_import_statement_token2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_import_statement_token3);
      if (lookahead == ';') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_jsx_component_token2);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_jsx_component_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_jsx_component_token3);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(103);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(82);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(106);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(117);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '`') ADVANCE(86);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(84);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '`') ADVANCE(95);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(96);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(86);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '`') ADVANCE(93);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(101);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(11);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(12);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '`') ADVANCE(95);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(13);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '\'') ADVANCE(127);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '\'') ADVANCE(127);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '`') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '`') ADVANCE(135);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(103);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '`') ADVANCE(101);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '`') ADVANCE(136);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '`') ADVANCE(16);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(84);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(86);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '`') ADVANCE(131);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(84);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '`') ADVANCE(95);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(96);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '`') ADVANCE(95);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(98);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(126);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '`') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '`') ADVANCE(131);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(126);
      if (lookahead == '`') ADVANCE(134);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '`') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '`') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_new_line_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 51, .external_lex_state = 2},
  [2] = {.lex_state = 51, .external_lex_state = 2},
  [3] = {.lex_state = 51, .external_lex_state = 2},
  [4] = {.lex_state = 1, .external_lex_state = 3},
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 2, .external_lex_state = 4},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 2, .external_lex_state = 4},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 51, .external_lex_state = 2},
  [12] = {.lex_state = 51, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 3},
  [14] = {.lex_state = 1, .external_lex_state = 3},
  [15] = {.lex_state = 1, .external_lex_state = 3},
  [16] = {.lex_state = 1, .external_lex_state = 3},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 2, .external_lex_state = 4},
  [20] = {.lex_state = 2, .external_lex_state = 4},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 3, .external_lex_state = 5},
  [26] = {.lex_state = 3, .external_lex_state = 5},
  [27] = {.lex_state = 3, .external_lex_state = 5},
  [28] = {.lex_state = 3, .external_lex_state = 5},
  [29] = {.lex_state = 3, .external_lex_state = 5},
  [30] = {.lex_state = 1, .external_lex_state = 5},
  [31] = {.lex_state = 1, .external_lex_state = 5},
  [32] = {.lex_state = 50, .external_lex_state = 6},
  [33] = {.lex_state = 1, .external_lex_state = 5},
  [34] = {.lex_state = 1, .external_lex_state = 5},
  [35] = {.lex_state = 1, .external_lex_state = 5},
  [36] = {.lex_state = 1, .external_lex_state = 5},
  [37] = {.lex_state = 1, .external_lex_state = 5},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
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
    [sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(44),
    [sym_jsx_section] = STATE(30),
    [sym_markdown_section] = STATE(30),
    [sym_interpolation] = STATE(7),
    [sym_import_statement] = STATE(31),
    [sym_html_component] = STATE(31),
    [sym_jsx_component] = STATE(31),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_jsx_section_repeat1] = STATE(6),
    [aux_sym_markdown_section_repeat1] = STATE(7),
    [aux_sym_markdown_section_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_markdown_word] = ACTIONS(5),
    [sym_escaped_slash] = ACTIONS(5),
    [aux_sym_jsx_component_token1] = ACTIONS(7),
    [sym_import_start] = ACTIONS(9),
    [sym_interpolation_start] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(7), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(9), 1,
      sym_import_start,
    ACTIONS(11), 1,
      sym_interpolation_start,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(4), 1,
      aux_sym_markdown_section_repeat2,
    STATE(6), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(5), 2,
      sym_markdown_word,
      sym_escaped_slash,
    STATE(7), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
    STATE(30), 2,
      sym_jsx_section,
      sym_markdown_section,
    STATE(31), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [39] = 11,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(23), 1,
      sym_import_start,
    ACTIONS(26), 1,
      sym_interpolation_start,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(4), 1,
      aux_sym_markdown_section_repeat2,
    STATE(6), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(17), 2,
      sym_markdown_word,
      sym_escaped_slash,
    STATE(7), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
    STATE(30), 2,
      sym_jsx_section,
      sym_markdown_section,
    STATE(31), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [78] = 5,
    ACTIONS(11), 1,
      sym_interpolation_start,
    STATE(5), 1,
      aux_sym_markdown_section_repeat2,
    ACTIONS(5), 2,
      sym_markdown_word,
      sym_escaped_slash,
    ACTIONS(29), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(7), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
  [97] = 5,
    ACTIONS(36), 1,
      sym_interpolation_start,
    STATE(5), 1,
      aux_sym_markdown_section_repeat2,
    ACTIONS(31), 2,
      sym_markdown_word,
      sym_escaped_slash,
    ACTIONS(34), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(7), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
  [116] = 5,
    ACTIONS(7), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(9), 1,
      sym_import_start,
    STATE(8), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(39), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(31), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [135] = 5,
    ACTIONS(11), 1,
      sym_interpolation_start,
    STATE(16), 1,
      sym_new_line,
    ACTIONS(41), 2,
      sym_markdown_word,
      sym_escaped_slash,
    ACTIONS(43), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(9), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
  [154] = 5,
    ACTIONS(45), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(50), 1,
      sym_import_start,
    STATE(8), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(48), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(31), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [173] = 4,
    ACTIONS(58), 1,
      sym_interpolation_start,
    ACTIONS(53), 2,
      sym_markdown_word,
      sym_escaped_slash,
    ACTIONS(56), 2,
      sym_eof,
      aux_sym_new_line_token1,
    STATE(9), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
  [189] = 4,
    ACTIONS(61), 1,
      aux_sym_import_statement_token1,
    ACTIONS(63), 1,
      sym_jsx_identifier,
    STATE(26), 1,
      sym_jsx_string,
    ACTIONS(65), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [204] = 2,
    ACTIONS(67), 3,
      sym_import_start,
      sym_interpolation_start,
      ts_builtin_sym_end,
    ACTIONS(69), 3,
      sym_markdown_word,
      sym_escaped_slash,
      aux_sym_jsx_component_token1,
  [215] = 2,
    ACTIONS(15), 3,
      sym_import_start,
      sym_interpolation_start,
      ts_builtin_sym_end,
    ACTIONS(71), 3,
      sym_markdown_word,
      sym_escaped_slash,
      aux_sym_jsx_component_token1,
  [226] = 2,
    ACTIONS(73), 2,
      sym_markdown_word,
      sym_escaped_slash,
    ACTIONS(75), 3,
      sym_interpolation_start,
      sym_eof,
      aux_sym_new_line_token1,
  [236] = 2,
    ACTIONS(69), 2,
      sym_markdown_word,
      sym_escaped_slash,
    ACTIONS(67), 3,
      sym_interpolation_start,
      sym_eof,
      aux_sym_new_line_token1,
  [246] = 2,
    ACTIONS(77), 2,
      sym_markdown_word,
      sym_escaped_slash,
    ACTIONS(79), 3,
      sym_interpolation_start,
      sym_eof,
      aux_sym_new_line_token1,
  [256] = 2,
    ACTIONS(81), 2,
      sym_markdown_word,
      sym_escaped_slash,
    ACTIONS(34), 3,
      sym_interpolation_start,
      sym_eof,
      aux_sym_new_line_token1,
  [266] = 3,
    ACTIONS(83), 1,
      aux_sym_interpolation_token1,
    STATE(17), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(85), 2,
      anon_sym_COMMA,
      sym_jsx_identifier,
  [277] = 2,
    STATE(28), 1,
      sym_jsx_string,
    ACTIONS(65), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [286] = 2,
    ACTIONS(69), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(67), 3,
      sym_import_start,
      sym_eof,
      aux_sym_new_line_token1,
  [295] = 2,
    ACTIONS(88), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(48), 3,
      sym_import_start,
      sym_eof,
      aux_sym_new_line_token1,
  [304] = 2,
    STATE(27), 1,
      sym_jsx_string,
    ACTIONS(65), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [313] = 3,
    ACTIONS(90), 1,
      aux_sym_interpolation_token1,
    STATE(23), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(92), 2,
      anon_sym_COMMA,
      sym_jsx_identifier,
  [324] = 3,
    ACTIONS(94), 1,
      aux_sym_interpolation_token1,
    STATE(17), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      sym_jsx_identifier,
  [335] = 2,
    STATE(29), 1,
      sym_jsx_string,
    ACTIONS(65), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [344] = 2,
    ACTIONS(98), 1,
      aux_sym_import_statement_token3,
    ACTIONS(100), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [352] = 2,
    ACTIONS(102), 1,
      aux_sym_import_statement_token3,
    ACTIONS(104), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [360] = 2,
    ACTIONS(106), 1,
      aux_sym_import_statement_token3,
    ACTIONS(108), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [368] = 2,
    ACTIONS(110), 1,
      aux_sym_import_statement_token3,
    ACTIONS(112), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [376] = 2,
    ACTIONS(114), 1,
      aux_sym_import_statement_token3,
    ACTIONS(116), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [384] = 2,
    STATE(12), 1,
      sym_new_line,
    ACTIONS(118), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [392] = 2,
    STATE(20), 1,
      sym_new_line,
    ACTIONS(120), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [400] = 2,
    ACTIONS(122), 1,
      aux_sym_interpolation_token1,
    ACTIONS(124), 1,
      sym_interpolation_content,
  [407] = 1,
    ACTIONS(126), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [412] = 1,
    ACTIONS(128), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [417] = 1,
    ACTIONS(112), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [422] = 1,
    ACTIONS(108), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [427] = 1,
    ACTIONS(130), 2,
      sym_eof,
      aux_sym_new_line_token1,
  [432] = 1,
    ACTIONS(132), 1,
      aux_sym_import_statement_token2,
  [436] = 1,
    ACTIONS(134), 1,
      aux_sym_interpolation_token1,
  [440] = 1,
    ACTIONS(136), 1,
      aux_sym_import_statement_token2,
  [444] = 1,
    ACTIONS(138), 1,
      aux_sym_jsx_component_token2,
  [448] = 1,
    ACTIONS(140), 1,
      aux_sym_import_statement_token2,
  [452] = 1,
    ACTIONS(142), 1,
      aux_sym_jsx_component_token3,
  [456] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 173,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 266,
  [SMALL_STATE(18)] = 277,
  [SMALL_STATE(19)] = 286,
  [SMALL_STATE(20)] = 295,
  [SMALL_STATE(21)] = 304,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 335,
  [SMALL_STATE(25)] = 344,
  [SMALL_STATE(26)] = 352,
  [SMALL_STATE(27)] = 360,
  [SMALL_STATE(28)] = 368,
  [SMALL_STATE(29)] = 376,
  [SMALL_STATE(30)] = 384,
  [SMALL_STATE(31)] = 392,
  [SMALL_STATE(32)] = 400,
  [SMALL_STATE(33)] = 407,
  [SMALL_STATE(34)] = 412,
  [SMALL_STATE(35)] = 417,
  [SMALL_STATE(36)] = 422,
  [SMALL_STATE(37)] = 427,
  [SMALL_STATE(38)] = 432,
  [SMALL_STATE(39)] = 436,
  [SMALL_STATE(40)] = 440,
  [SMALL_STATE(41)] = 444,
  [SMALL_STATE(42)] = 448,
  [SMALL_STATE(43)] = 452,
  [SMALL_STATE(44)] = 456,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_section, 1),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markdown_section_repeat2, 2), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat2, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat2, 2), SHIFT_REPEAT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_section, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsx_section_repeat1, 2), SHIFT_REPEAT(41),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jsx_section_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jsx_section_repeat1, 2), SHIFT_REPEAT(10),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(32),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_line, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_line, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_markdown_section_repeat2, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(17),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsx_section_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_string, 1, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_string, 1, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_component, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_import_start = 0,
  ts_external_token_interpolation_start = 1,
  ts_external_token_interpolation_content = 2,
  ts_external_token_eof = 3,
  ts_external_token_error = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_import_start] = sym_import_start,
  [ts_external_token_interpolation_start] = sym_interpolation_start,
  [ts_external_token_interpolation_content] = sym_interpolation_content,
  [ts_external_token_eof] = sym_eof,
  [ts_external_token_error] = sym_error,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_import_start] = true,
    [ts_external_token_interpolation_start] = true,
    [ts_external_token_interpolation_content] = true,
    [ts_external_token_eof] = true,
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_interpolation_token1 = 1,
  sym_markdown_word = 2,
  aux_sym_import_statement_token1 = 3,
  anon_sym_COMMA = 4,
  aux_sym_import_statement_token2 = 5,
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
  aux_sym_end_of_line_token1 = 16,
  sym_import_start = 17,
  sym_interpolation_start = 18,
  sym_interpolation_end = 19,
  sym_eof = 20,
  sym_error = 21,
  sym_document = 22,
  sym_jsx_section = 23,
  sym_markdown_section = 24,
  sym_interpolation = 25,
  sym_import_statement = 26,
  sym_html_component = 27,
  sym_jsx_component = 28,
  sym_string = 29,
  sym_end_of_line = 30,
  aux_sym_document_repeat1 = 31,
  aux_sym_document_repeat2 = 32,
  aux_sym_jsx_section_repeat1 = 33,
  aux_sym_markdown_section_repeat1 = 34,
  aux_sym_import_statement_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_interpolation_token1] = "interpolation_content",
  [sym_markdown_word] = "markdown_word",
  [aux_sym_import_statement_token1] = "left_brace",
  [anon_sym_COMMA] = ",",
  [aux_sym_import_statement_token2] = "right_brace",
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
  [aux_sym_end_of_line_token1] = "end_of_line_token1",
  [sym_import_start] = "import_start",
  [sym_interpolation_start] = "interpolation_start",
  [sym_interpolation_end] = "interpolation_end",
  [sym_eof] = "eof",
  [sym_error] = "error",
  [sym_document] = "document",
  [sym_jsx_section] = "jsx_section",
  [sym_markdown_section] = "markdown_section",
  [sym_interpolation] = "interpolation",
  [sym_import_statement] = "import_statement",
  [sym_html_component] = "html_component",
  [sym_jsx_component] = "jsx_component",
  [sym_string] = "string",
  [sym_end_of_line] = "end_of_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_jsx_section_repeat1] = "jsx_section_repeat1",
  [aux_sym_markdown_section_repeat1] = "markdown_section_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_interpolation_token1] = aux_sym_interpolation_token1,
  [sym_markdown_word] = sym_markdown_word,
  [aux_sym_import_statement_token1] = aux_sym_import_statement_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_import_statement_token2] = aux_sym_import_statement_token2,
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
  [aux_sym_end_of_line_token1] = aux_sym_end_of_line_token1,
  [sym_import_start] = sym_import_start,
  [sym_interpolation_start] = sym_interpolation_start,
  [sym_interpolation_end] = sym_interpolation_end,
  [sym_eof] = sym_eof,
  [sym_error] = sym_error,
  [sym_document] = sym_document,
  [sym_jsx_section] = sym_jsx_section,
  [sym_markdown_section] = sym_markdown_section,
  [sym_interpolation] = sym_interpolation,
  [sym_import_statement] = sym_import_statement,
  [sym_html_component] = sym_html_component,
  [sym_jsx_component] = sym_jsx_component,
  [sym_string] = sym_string,
  [sym_end_of_line] = sym_end_of_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_jsx_section_repeat1] = aux_sym_jsx_section_repeat1,
  [aux_sym_markdown_section_repeat1] = aux_sym_markdown_section_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
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
  [aux_sym_import_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_statement_token2] = {
    .visible = true,
    .named = true,
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
  [aux_sym_end_of_line_token1] = {
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
  [sym_interpolation_end] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_end_of_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
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
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
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
  [11] = 9,
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
  [28] = 9,
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
  [42] = 9,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '\\') SKIP(0)
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == '/' ||
          lookahead == 'S') ADVANCE(74);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(33)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '{') SKIP(44)
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(19);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(20);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(16);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(22);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(41);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '`') ADVANCE(131);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(25);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '/') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '/') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(40)
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == ';') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(34);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == '<') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == '\\') SKIP(38)
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == '/' ||
          lookahead == 'S') ADVANCE(74);
      if (lookahead == 'n' ||
          lookahead == 'r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == '\\') SKIP(40)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(29);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == '`') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == '}') SKIP(43)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') SKIP(44)
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 45:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(34);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') ADVANCE(134);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == '\\') SKIP(47)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '\\') SKIP(47)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(34);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(34);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(3);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(4);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(5);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(6);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(7);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(9);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_import_statement_token2);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_jsx_component_token1);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_jsx_component_token2);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_jsx_component_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_jsx_component_token3);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_semicolon);
      if (lookahead == ';') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '/' ||
          lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/' ||
          lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(100);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(79);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(103);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(114);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '`') ADVANCE(83);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '`') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '`') ADVANCE(85);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '`') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(81);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(93);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(83);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(85);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(124);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '`') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '`') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(100);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '`') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '`') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '`') ADVANCE(14);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(16);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '`') ADVANCE(131);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '`') ADVANCE(129);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(123);
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
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '`') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '`') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_end_of_line_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_end_of_line_token1);
      if (lookahead == '\n') ADVANCE(134);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 45, .external_lex_state = 2},
  [2] = {.lex_state = 45, .external_lex_state = 2},
  [3] = {.lex_state = 45, .external_lex_state = 2},
  [4] = {.lex_state = 46, .external_lex_state = 3},
  [5] = {.lex_state = 46, .external_lex_state = 3},
  [6] = {.lex_state = 45, .external_lex_state = 2},
  [7] = {.lex_state = 2, .external_lex_state = 4},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 45, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 4},
  [11] = {.lex_state = 46, .external_lex_state = 3},
  [12] = {.lex_state = 45, .external_lex_state = 5},
  [13] = {.lex_state = 45, .external_lex_state = 5},
  [14] = {.lex_state = 45, .external_lex_state = 5},
  [15] = {.lex_state = 45, .external_lex_state = 5},
  [16] = {.lex_state = 46, .external_lex_state = 3},
  [17] = {.lex_state = 45, .external_lex_state = 5},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 2, .external_lex_state = 4},
  [21] = {.lex_state = 45, .external_lex_state = 5},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 2, .external_lex_state = 4},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 1, .external_lex_state = 5},
  [28] = {.lex_state = 45, .external_lex_state = 5},
  [29] = {.lex_state = 1, .external_lex_state = 5},
  [30] = {.lex_state = 45, .external_lex_state = 5},
  [31] = {.lex_state = 1, .external_lex_state = 5},
  [32] = {.lex_state = 1, .external_lex_state = 5},
  [33] = {.lex_state = 45, .external_lex_state = 5},
  [34] = {.lex_state = 1, .external_lex_state = 5},
  [35] = {.lex_state = 45, .external_lex_state = 5},
  [36] = {.lex_state = 43, .external_lex_state = 6},
  [37] = {.lex_state = 45, .external_lex_state = 5},
  [38] = {.lex_state = 45, .external_lex_state = 5},
  [39] = {.lex_state = 45, .external_lex_state = 5},
  [40] = {.lex_state = 45, .external_lex_state = 5},
  [41] = {.lex_state = 45, .external_lex_state = 5},
  [42] = {.lex_state = 45, .external_lex_state = 5},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 40},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [aux_sym_jsx_component_token3] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_import_start] = ACTIONS(1),
    [sym_interpolation_start] = ACTIONS(1),
    [sym_interpolation_end] = ACTIONS(1),
    [sym_eof] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(45),
    [sym_jsx_section] = STATE(14),
    [sym_markdown_section] = STATE(14),
    [sym_interpolation] = STATE(7),
    [sym_import_statement] = STATE(35),
    [sym_html_component] = STATE(35),
    [sym_jsx_component] = STATE(35),
    [sym_end_of_line] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_jsx_section_repeat1] = STATE(4),
    [aux_sym_markdown_section_repeat1] = STATE(7),
    [sym_markdown_word] = ACTIONS(3),
    [aux_sym_jsx_component_token1] = ACTIONS(5),
    [aux_sym_end_of_line_token1] = ACTIONS(7),
    [sym_import_start] = ACTIONS(9),
    [sym_interpolation_start] = ACTIONS(11),
    [sym_eof] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_markdown_word,
    ACTIONS(5), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(9), 1,
      sym_import_start,
    ACTIONS(11), 1,
      sym_interpolation_start,
    STATE(4), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(7), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
    STATE(6), 2,
      sym_end_of_line,
      aux_sym_document_repeat1,
    STATE(7), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
    STATE(33), 2,
      sym_jsx_section,
      sym_markdown_section,
    STATE(35), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [37] = 10,
    ACTIONS(3), 1,
      sym_markdown_word,
    ACTIONS(5), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(9), 1,
      sym_import_start,
    ACTIONS(11), 1,
      sym_interpolation_start,
    STATE(4), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(7), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
    STATE(6), 2,
      sym_end_of_line,
      aux_sym_document_repeat1,
    STATE(7), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
    STATE(17), 2,
      sym_jsx_section,
      sym_markdown_section,
    STATE(35), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [74] = 5,
    ACTIONS(5), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(9), 1,
      sym_import_start,
    STATE(5), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(13), 3,
      sym_eof,
      ts_builtin_sym_end,
      aux_sym_end_of_line_token1,
    STATE(35), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [94] = 5,
    ACTIONS(17), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(20), 1,
      sym_import_start,
    STATE(5), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(15), 3,
      sym_eof,
      ts_builtin_sym_end,
      aux_sym_end_of_line_token1,
    STATE(35), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [114] = 4,
    ACTIONS(23), 2,
      sym_markdown_word,
      aux_sym_jsx_component_token1,
    ACTIONS(25), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
    ACTIONS(28), 2,
      sym_import_start,
      sym_interpolation_start,
    STATE(6), 2,
      sym_end_of_line,
      aux_sym_document_repeat1,
  [131] = 5,
    ACTIONS(11), 1,
      sym_interpolation_start,
    ACTIONS(30), 1,
      sym_markdown_word,
    STATE(30), 1,
      sym_end_of_line,
    ACTIONS(32), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
    STATE(10), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
  [149] = 4,
    ACTIONS(34), 1,
      aux_sym_import_statement_token1,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(27), 1,
      sym_string,
    ACTIONS(38), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [164] = 2,
    ACTIONS(40), 2,
      sym_markdown_word,
      aux_sym_jsx_component_token1,
    ACTIONS(42), 4,
      sym_import_start,
      sym_interpolation_start,
      sym_eof,
      aux_sym_end_of_line_token1,
  [175] = 4,
    ACTIONS(44), 1,
      sym_markdown_word,
    ACTIONS(49), 1,
      sym_interpolation_start,
    ACTIONS(47), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
    STATE(10), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
  [190] = 2,
    ACTIONS(40), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(42), 4,
      sym_import_start,
      sym_eof,
      ts_builtin_sym_end,
      aux_sym_end_of_line_token1,
  [200] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_document_repeat2,
    STATE(21), 1,
      sym_end_of_line,
    ACTIONS(54), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [214] = 4,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_document_repeat2,
    STATE(21), 1,
      sym_end_of_line,
    ACTIONS(58), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [228] = 4,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym_document_repeat2,
    STATE(21), 1,
      sym_end_of_line,
    ACTIONS(54), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [242] = 4,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_document_repeat2,
    STATE(21), 1,
      sym_end_of_line,
    ACTIONS(54), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [256] = 2,
    ACTIONS(65), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(15), 4,
      sym_import_start,
      sym_eof,
      ts_builtin_sym_end,
      aux_sym_end_of_line_token1,
  [266] = 4,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_document_repeat2,
    STATE(21), 1,
      sym_end_of_line,
    ACTIONS(54), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [280] = 3,
    ACTIONS(69), 1,
      aux_sym_import_statement_token2,
    STATE(23), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      sym_identifier,
  [291] = 2,
    STATE(32), 1,
      sym_string,
    ACTIONS(38), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [300] = 2,
    ACTIONS(71), 1,
      sym_markdown_word,
    ACTIONS(73), 3,
      sym_interpolation_start,
      sym_eof,
      aux_sym_end_of_line_token1,
  [309] = 2,
    ACTIONS(7), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
    STATE(2), 2,
      sym_end_of_line,
      aux_sym_document_repeat1,
  [318] = 2,
    STATE(29), 1,
      sym_string,
    ACTIONS(38), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [327] = 3,
    ACTIONS(77), 1,
      aux_sym_import_statement_token2,
    STATE(26), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      sym_identifier,
  [338] = 2,
    STATE(34), 1,
      sym_string,
    ACTIONS(38), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [347] = 2,
    ACTIONS(79), 1,
      sym_markdown_word,
    ACTIONS(81), 3,
      sym_interpolation_start,
      sym_eof,
      aux_sym_end_of_line_token1,
  [356] = 3,
    ACTIONS(86), 1,
      aux_sym_import_statement_token2,
    STATE(26), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      sym_identifier,
  [367] = 2,
    ACTIONS(88), 1,
      sym_semicolon,
    ACTIONS(90), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [375] = 1,
    ACTIONS(42), 3,
      sym_eof,
      ts_builtin_sym_end,
      aux_sym_end_of_line_token1,
  [381] = 2,
    ACTIONS(92), 1,
      sym_semicolon,
    ACTIONS(94), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [389] = 1,
    ACTIONS(96), 3,
      sym_eof,
      ts_builtin_sym_end,
      aux_sym_end_of_line_token1,
  [395] = 2,
    ACTIONS(98), 1,
      sym_semicolon,
    ACTIONS(100), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [403] = 2,
    ACTIONS(102), 1,
      sym_semicolon,
    ACTIONS(104), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [411] = 1,
    ACTIONS(106), 3,
      sym_eof,
      ts_builtin_sym_end,
      aux_sym_end_of_line_token1,
  [417] = 2,
    ACTIONS(108), 1,
      sym_semicolon,
    ACTIONS(110), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [425] = 2,
    STATE(16), 1,
      sym_end_of_line,
    ACTIONS(112), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [433] = 2,
    ACTIONS(114), 1,
      aux_sym_interpolation_token1,
    ACTIONS(116), 1,
      sym_interpolation_end,
  [440] = 1,
    ACTIONS(118), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [445] = 1,
    ACTIONS(120), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [450] = 1,
    ACTIONS(104), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [455] = 1,
    ACTIONS(94), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [460] = 1,
    ACTIONS(122), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [465] = 1,
    ACTIONS(42), 2,
      sym_eof,
      aux_sym_end_of_line_token1,
  [470] = 1,
    ACTIONS(124), 1,
      anon_sym_from,
  [474] = 1,
    ACTIONS(126), 1,
      sym_interpolation_end,
  [478] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [482] = 1,
    ACTIONS(130), 1,
      anon_sym_from,
  [486] = 1,
    ACTIONS(132), 1,
      anon_sym_from,
  [490] = 1,
    ACTIONS(134), 1,
      aux_sym_jsx_component_token2,
  [494] = 1,
    ACTIONS(136), 1,
      aux_sym_jsx_component_token3,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 190,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 228,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 266,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 291,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 309,
  [SMALL_STATE(22)] = 318,
  [SMALL_STATE(23)] = 327,
  [SMALL_STATE(24)] = 338,
  [SMALL_STATE(25)] = 347,
  [SMALL_STATE(26)] = 356,
  [SMALL_STATE(27)] = 367,
  [SMALL_STATE(28)] = 375,
  [SMALL_STATE(29)] = 381,
  [SMALL_STATE(30)] = 389,
  [SMALL_STATE(31)] = 395,
  [SMALL_STATE(32)] = 403,
  [SMALL_STATE(33)] = 411,
  [SMALL_STATE(34)] = 417,
  [SMALL_STATE(35)] = 425,
  [SMALL_STATE(36)] = 433,
  [SMALL_STATE(37)] = 440,
  [SMALL_STATE(38)] = 445,
  [SMALL_STATE(39)] = 450,
  [SMALL_STATE(40)] = 455,
  [SMALL_STATE(41)] = 460,
  [SMALL_STATE(42)] = 465,
  [SMALL_STATE(43)] = 470,
  [SMALL_STATE(44)] = 474,
  [SMALL_STATE(45)] = 478,
  [SMALL_STATE(46)] = 482,
  [SMALL_STATE(47)] = 486,
  [SMALL_STATE(48)] = 490,
  [SMALL_STATE(49)] = 494,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_section, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jsx_section_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsx_section_repeat1, 2), SHIFT_REPEAT(48),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jsx_section_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_of_line, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_of_line, 1),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(36),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(42),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsx_section_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(26),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_section, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_component, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_import_start = 0,
  ts_external_token_interpolation_start = 1,
  ts_external_token_interpolation_end = 2,
  ts_external_token_eof = 3,
  ts_external_token_error = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_import_start] = sym_import_start,
  [ts_external_token_interpolation_start] = sym_interpolation_start,
  [ts_external_token_interpolation_end] = sym_interpolation_end,
  [ts_external_token_eof] = sym_eof,
  [ts_external_token_error] = sym_error,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_import_start] = true,
    [ts_external_token_interpolation_start] = true,
    [ts_external_token_interpolation_end] = true,
    [ts_external_token_eof] = true,
    [ts_external_token_error] = true,
  },
  [2] = {
    [ts_external_token_import_start] = true,
    [ts_external_token_interpolation_start] = true,
    [ts_external_token_eof] = true,
  },
  [3] = {
    [ts_external_token_import_start] = true,
    [ts_external_token_eof] = true,
  },
  [4] = {
    [ts_external_token_interpolation_start] = true,
    [ts_external_token_eof] = true,
  },
  [5] = {
    [ts_external_token_eof] = true,
  },
  [6] = {
    [ts_external_token_interpolation_end] = true,
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

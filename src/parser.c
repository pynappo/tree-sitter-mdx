#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
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
  sym_end_of_line = 15,
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
  sym_string = 28,
  aux_sym_document_repeat1 = 29,
  aux_sym_document_repeat2 = 30,
  aux_sym_jsx_section_repeat1 = 31,
  aux_sym_markdown_section_repeat1 = 32,
  aux_sym_import_statement_repeat1 = 33,
  alias_sym_right_brace = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_interpolation_token1] = "interpolation_end",
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
  [sym_end_of_line] = "end_of_line",
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
  [sym_string] = "string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_jsx_section_repeat1] = "jsx_section_repeat1",
  [aux_sym_markdown_section_repeat1] = "markdown_section_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [alias_sym_right_brace] = "right_brace",
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
  [sym_end_of_line] = sym_end_of_line,
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
  [sym_string] = sym_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_jsx_section_repeat1] = aux_sym_jsx_section_repeat1,
  [aux_sym_markdown_section_repeat1] = aux_sym_markdown_section_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [alias_sym_right_brace] = alias_sym_right_brace,
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
  [sym_end_of_line] = {
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
  [sym_string] = {
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
  [alias_sym_right_brace] = {
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
    [2] = alias_sym_right_brace,
  },
  [3] = {
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
      if (eof) ADVANCE(45);
      if (lookahead == '\\') SKIP(0)
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '{') SKIP(38)
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(78);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '`') ADVANCE(85);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(93);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(80);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(102);
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
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(19);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(20);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(23);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(124);
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
      if (lookahead == '`') ADVANCE(125);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(39);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(126);
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
          lookahead == 'r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '`') ADVANCE(85);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(95);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '/') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '`') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '`') ADVANCE(122);
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
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(95);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '/') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 'n') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == ';') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(32);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == '<') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '\\') SKIP(37)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == '\\') SKIP(36)
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == '\\') SKIP(37)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') SKIP(38)
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == '`') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == '}') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') SKIP(41)
      END_STATE();
    case 42:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(32);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 43:
      if (eof) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(130);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '\\') SKIP(44)
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (lookahead == '}') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(32);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_markdown_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escaped_slash);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '{') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r') ADVANCE(48);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escaped_slash);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != 'S' &&
          lookahead != 'n' &&
          lookahead != 'r' &&
          lookahead != '{') ADVANCE(52);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '`') ADVANCE(85);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(3);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(4);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(5);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '`') ADVANCE(85);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(6);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(7);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_import_statement_token1);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          (lookahead < 'S' || 'r' < lookahead)) ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'R') ||
          ('T' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_import_statement_token2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_import_statement_token3);
      if (lookahead == ';') ADVANCE(66);
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
          lookahead == 'r') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(34);
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
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '`') ADVANCE(85);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(74);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(98);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(109);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '`') ADVANCE(78);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '`') ADVANCE(121);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '`') ADVANCE(80);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '`') ADVANCE(122);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(76);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(88);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(78);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '`') ADVANCE(85);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(93);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(80);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(90);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '\'') ADVANCE(119);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(90);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(95);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '`') ADVANCE(93);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_jsx_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '`') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '`') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(78);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(80);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(124);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '`') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == '{') ADVANCE(59);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(88);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(80);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(124);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(90);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '`') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '`') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '`') ADVANCE(123);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '`') ADVANCE(124);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '`') ADVANCE(125);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead == '/' ||
          lookahead == 'S' ||
          lookahead == 'n' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_end_of_line);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_end_of_line);
      if (lookahead == '\n') ADVANCE(129);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 42, .external_lex_state = 2},
  [2] = {.lex_state = 42, .external_lex_state = 2},
  [3] = {.lex_state = 42, .external_lex_state = 2},
  [4] = {.lex_state = 43, .external_lex_state = 3},
  [5] = {.lex_state = 43, .external_lex_state = 3},
  [6] = {.lex_state = 42, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 4},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 1, .external_lex_state = 4},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 1, .external_lex_state = 4},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 1, .external_lex_state = 4},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 43, .external_lex_state = 3},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 42},
  [25] = {.lex_state = 41, .external_lex_state = 5},
  [26] = {.lex_state = 42},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 41},
  [30] = {.lex_state = 42},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 42},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 42},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 42},
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
    [sym_document] = STATE(33),
    [sym_jsx_section] = STATE(21),
    [sym_markdown_section] = STATE(21),
    [sym_interpolation] = STATE(7),
    [sym_import_statement] = STATE(35),
    [sym_html_component] = STATE(35),
    [sym_jsx_component] = STATE(35),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_jsx_section_repeat1] = STATE(5),
    [aux_sym_markdown_section_repeat1] = STATE(7),
    [sym_markdown_word] = ACTIONS(3),
    [sym_escaped_slash] = ACTIONS(3),
    [aux_sym_jsx_component_token1] = ACTIONS(5),
    [sym_end_of_line] = ACTIONS(7),
    [sym_import_start] = ACTIONS(9),
    [sym_interpolation_start] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(9), 1,
      sym_import_start,
    ACTIONS(11), 1,
      sym_interpolation_start,
    ACTIONS(13), 1,
      sym_end_of_line,
    STATE(5), 1,
      aux_sym_jsx_section_repeat1,
    STATE(6), 1,
      aux_sym_document_repeat1,
    ACTIONS(3), 2,
      sym_markdown_word,
      sym_escaped_slash,
    STATE(7), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
    STATE(27), 2,
      sym_jsx_section,
      sym_markdown_section,
    STATE(35), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [36] = 10,
    ACTIONS(5), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(9), 1,
      sym_import_start,
    ACTIONS(11), 1,
      sym_interpolation_start,
    ACTIONS(13), 1,
      sym_end_of_line,
    STATE(5), 1,
      aux_sym_jsx_section_repeat1,
    STATE(6), 1,
      aux_sym_document_repeat1,
    ACTIONS(3), 2,
      sym_markdown_word,
      sym_escaped_slash,
    STATE(7), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
    STATE(20), 2,
      sym_jsx_section,
      sym_markdown_section,
    STATE(35), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [72] = 5,
    ACTIONS(17), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(20), 1,
      sym_import_start,
    STATE(4), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      sym_end_of_line,
    STATE(35), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [91] = 5,
    ACTIONS(5), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(9), 1,
      sym_import_start,
    STATE(4), 1,
      aux_sym_jsx_section_repeat1,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_end_of_line,
    STATE(35), 3,
      sym_import_statement,
      sym_html_component,
      sym_jsx_component,
  [110] = 4,
    ACTIONS(27), 1,
      sym_end_of_line,
    STATE(6), 1,
      aux_sym_document_repeat1,
    ACTIONS(30), 2,
      sym_import_start,
      sym_interpolation_start,
    ACTIONS(25), 3,
      sym_markdown_word,
      sym_escaped_slash,
      aux_sym_jsx_component_token1,
  [126] = 4,
    ACTIONS(11), 1,
      sym_interpolation_start,
    ACTIONS(34), 1,
      sym_end_of_line,
    ACTIONS(32), 2,
      sym_markdown_word,
      sym_escaped_slash,
    STATE(9), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
  [141] = 4,
    ACTIONS(36), 1,
      aux_sym_import_statement_token1,
    ACTIONS(38), 1,
      sym_jsx_identifier,
    STATE(31), 1,
      sym_string,
    ACTIONS(40), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [156] = 4,
    ACTIONS(45), 1,
      sym_end_of_line,
    ACTIONS(47), 1,
      sym_interpolation_start,
    ACTIONS(42), 2,
      sym_markdown_word,
      sym_escaped_slash,
    STATE(9), 2,
      sym_interpolation,
      aux_sym_markdown_section_repeat1,
  [171] = 3,
    ACTIONS(50), 1,
      aux_sym_interpolation_token1,
    STATE(17), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      sym_jsx_identifier,
  [182] = 2,
    STATE(40), 1,
      sym_string,
    ACTIONS(40), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [191] = 2,
    STATE(44), 1,
      sym_string,
    ACTIONS(40), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [200] = 3,
    ACTIONS(54), 1,
      aux_sym_interpolation_token1,
    STATE(13), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(56), 2,
      anon_sym_COMMA,
      sym_jsx_identifier,
  [211] = 2,
    ACTIONS(59), 2,
      sym_markdown_word,
      sym_escaped_slash,
    ACTIONS(61), 2,
      sym_interpolation_start,
      sym_end_of_line,
  [220] = 2,
    STATE(38), 1,
      sym_string,
    ACTIONS(40), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [229] = 2,
    ACTIONS(63), 2,
      sym_markdown_word,
      sym_escaped_slash,
    ACTIONS(65), 2,
      sym_interpolation_start,
      sym_end_of_line,
  [238] = 3,
    ACTIONS(67), 1,
      aux_sym_interpolation_token1,
    STATE(13), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(69), 2,
      anon_sym_COMMA,
      sym_jsx_identifier,
  [249] = 2,
    ACTIONS(71), 1,
      aux_sym_jsx_component_token1,
    ACTIONS(15), 3,
      sym_import_start,
      ts_builtin_sym_end,
      sym_end_of_line,
  [258] = 3,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_end_of_line,
    STATE(23), 1,
      aux_sym_document_repeat2,
  [268] = 3,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_end_of_line,
    STATE(22), 1,
      aux_sym_document_repeat2,
  [278] = 3,
    ACTIONS(75), 1,
      sym_end_of_line,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_document_repeat2,
  [288] = 3,
    ACTIONS(75), 1,
      sym_end_of_line,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      aux_sym_document_repeat2,
  [298] = 3,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_end_of_line,
    STATE(23), 1,
      aux_sym_document_repeat2,
  [308] = 2,
    ACTIONS(86), 1,
      sym_end_of_line,
    STATE(2), 1,
      aux_sym_document_repeat1,
  [315] = 2,
    ACTIONS(88), 1,
      aux_sym_interpolation_token1,
    ACTIONS(90), 1,
      sym_interpolation_content,
  [322] = 1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_end_of_line,
  [327] = 1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_end_of_line,
  [332] = 1,
    ACTIONS(96), 1,
      sym_end_of_line,
  [336] = 1,
    ACTIONS(98), 1,
      aux_sym_interpolation_token1,
  [340] = 1,
    ACTIONS(100), 1,
      sym_end_of_line,
  [344] = 1,
    ACTIONS(102), 1,
      aux_sym_import_statement_token3,
  [348] = 1,
    ACTIONS(104), 1,
      aux_sym_jsx_component_token2,
  [352] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
  [356] = 1,
    ACTIONS(108), 1,
      aux_sym_jsx_component_token3,
  [360] = 1,
    ACTIONS(110), 1,
      sym_end_of_line,
  [364] = 1,
    ACTIONS(112), 1,
      aux_sym_import_statement_token2,
  [368] = 1,
    ACTIONS(114), 1,
      aux_sym_import_statement_token3,
  [372] = 1,
    ACTIONS(116), 1,
      aux_sym_import_statement_token3,
  [376] = 1,
    ACTIONS(118), 1,
      aux_sym_import_statement_token2,
  [380] = 1,
    ACTIONS(120), 1,
      aux_sym_import_statement_token3,
  [384] = 1,
    ACTIONS(122), 1,
      aux_sym_import_statement_token2,
  [388] = 1,
    ACTIONS(124), 1,
      sym_end_of_line,
  [392] = 1,
    ACTIONS(126), 1,
      sym_end_of_line,
  [396] = 1,
    ACTIONS(128), 1,
      aux_sym_import_statement_token3,
  [400] = 1,
    ACTIONS(130), 1,
      sym_end_of_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 182,
  [SMALL_STATE(12)] = 191,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 211,
  [SMALL_STATE(15)] = 220,
  [SMALL_STATE(16)] = 229,
  [SMALL_STATE(17)] = 238,
  [SMALL_STATE(18)] = 249,
  [SMALL_STATE(19)] = 258,
  [SMALL_STATE(20)] = 268,
  [SMALL_STATE(21)] = 278,
  [SMALL_STATE(22)] = 288,
  [SMALL_STATE(23)] = 298,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 315,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 327,
  [SMALL_STATE(28)] = 332,
  [SMALL_STATE(29)] = 336,
  [SMALL_STATE(30)] = 340,
  [SMALL_STATE(31)] = 344,
  [SMALL_STATE(32)] = 348,
  [SMALL_STATE(33)] = 352,
  [SMALL_STATE(34)] = 356,
  [SMALL_STATE(35)] = 360,
  [SMALL_STATE(36)] = 364,
  [SMALL_STATE(37)] = 368,
  [SMALL_STATE(38)] = 372,
  [SMALL_STATE(39)] = 376,
  [SMALL_STATE(40)] = 380,
  [SMALL_STATE(41)] = 384,
  [SMALL_STATE(42)] = 388,
  [SMALL_STATE(43)] = 392,
  [SMALL_STATE(44)] = 396,
  [SMALL_STATE(45)] = 400,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jsx_section_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_jsx_section_repeat1, 2), SHIFT_REPEAT(32),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jsx_section_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_section, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(13),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_jsx_section_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_section, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_component, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7, .production_id = 3),
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

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_import_start] = true,
  },
  [4] = {
    [ts_external_token_interpolation_start] = true,
  },
  [5] = {
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

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mdx() {
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

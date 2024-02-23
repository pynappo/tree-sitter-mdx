#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_markdown_section_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COMMA = 4,
  sym_import_start = 5,
  sym_export_start = 6,
  sym_semicolon = 7,
  sym_identifier = 8,
  sym_double_quoted_string = 9,
  sym_single_quoted_string = 10,
  sym_backtick_quoted_string = 11,
  sym_newline_token = 12,
  sym_document = 13,
  sym_jsx_section = 14,
  sym_markdown_section = 15,
  sym_import_statement = 16,
  sym_string = 17,
  aux_sym_document_repeat1 = 18,
  aux_sym_markdown_section_repeat1 = 19,
  aux_sym_import_statement_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_markdown_section_token1] = "markdown_section_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [sym_import_start] = "import_start",
  [sym_export_start] = "export_start",
  [sym_semicolon] = "semicolon",
  [sym_identifier] = "identifier",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_backtick_quoted_string] = "backtick_quoted_string",
  [sym_newline_token] = "newline_token",
  [sym_document] = "document",
  [sym_jsx_section] = "jsx_section",
  [sym_markdown_section] = "markdown_section",
  [sym_import_statement] = "import_statement",
  [sym_string] = "string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_markdown_section_repeat1] = "markdown_section_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_markdown_section_token1] = aux_sym_markdown_section_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_import_start] = sym_import_start,
  [sym_export_start] = sym_export_start,
  [sym_semicolon] = sym_semicolon,
  [sym_identifier] = sym_identifier,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_backtick_quoted_string] = sym_backtick_quoted_string,
  [sym_newline_token] = sym_newline_token,
  [sym_document] = sym_document,
  [sym_jsx_section] = sym_jsx_section,
  [sym_markdown_section] = sym_markdown_section,
  [sym_import_statement] = sym_import_statement,
  [sym_string] = sym_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_markdown_section_repeat1] = aux_sym_markdown_section_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_markdown_section_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_import_start] = {
    .visible = true,
    .named = true,
  },
  [sym_export_start] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
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
  [sym_import_statement] = {
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
  [aux_sym_markdown_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [29] = 14,
  [30] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '`') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '`') ADVANCE(37);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '`') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 16:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 17:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(44);
      if (lookahead == ';') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '`') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_markdown_section_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_markdown_section_token1);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_markdown_section_token1);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_markdown_section_token1);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_markdown_section_token1);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_markdown_section_token1);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_markdown_section_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_markdown_section_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_import_start);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_import_start);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_export_start);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '`') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '`') ADVANCE(37);
      if (('[' <= lookahead && lookahead <= '^')) ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '`') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_newline_token);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_newline_token);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 18},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_import_start] = ACTIONS(1),
    [sym_export_start] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_double_quoted_string] = ACTIONS(1),
    [sym_single_quoted_string] = ACTIONS(1),
    [sym_backtick_quoted_string] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(28),
    [sym_jsx_section] = STATE(6),
    [sym_markdown_section] = STATE(16),
    [sym_import_statement] = STATE(27),
    [aux_sym_document_repeat1] = STATE(10),
    [aux_sym_markdown_section_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_markdown_section_token1] = ACTIONS(5),
    [sym_import_start] = ACTIONS(7),
    [sym_newline_token] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      sym_backtick_quoted_string,
    STATE(3), 1,
      aux_sym_import_statement_repeat1,
    STATE(19), 1,
      sym_string,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [24] = 7,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      sym_backtick_quoted_string,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(4), 1,
      aux_sym_import_statement_repeat1,
    STATE(21), 1,
      sym_string,
    ACTIONS(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(21), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [48] = 6,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(36), 1,
      sym_backtick_quoted_string,
    STATE(4), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(25), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(34), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [69] = 2,
    ACTIONS(36), 2,
      sym_identifier,
      sym_backtick_quoted_string,
    ACTIONS(34), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [81] = 6,
    ACTIONS(5), 1,
      aux_sym_markdown_section_token1,
    ACTIONS(9), 1,
      sym_newline_token,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_markdown_section_repeat1,
    STATE(12), 1,
      sym_markdown_section,
    STATE(13), 1,
      aux_sym_document_repeat1,
  [100] = 4,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      aux_sym_markdown_section_token1,
    ACTIONS(44), 1,
      sym_newline_token,
    STATE(8), 1,
      aux_sym_markdown_section_repeat1,
  [113] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      aux_sym_markdown_section_token1,
    ACTIONS(51), 1,
      sym_newline_token,
    STATE(8), 1,
      aux_sym_markdown_section_repeat1,
  [126] = 3,
    ACTIONS(53), 1,
      sym_import_start,
    STATE(17), 1,
      sym_jsx_section,
    STATE(30), 1,
      sym_import_statement,
  [136] = 3,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_newline_token,
    STATE(15), 1,
      aux_sym_document_repeat1,
  [146] = 3,
    ACTIONS(55), 1,
      sym_newline_token,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym_document_repeat1,
  [156] = 3,
    ACTIONS(55), 1,
      sym_newline_token,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym_document_repeat1,
  [166] = 3,
    ACTIONS(55), 1,
      sym_newline_token,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym_document_repeat1,
  [176] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 2,
      aux_sym_markdown_section_token1,
      sym_newline_token,
  [184] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_newline_token,
    STATE(15), 1,
      aux_sym_document_repeat1,
  [194] = 3,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_newline_token,
    STATE(13), 1,
      aux_sym_document_repeat1,
  [204] = 3,
    ACTIONS(70), 1,
      aux_sym_markdown_section_token1,
    STATE(7), 1,
      aux_sym_markdown_section_repeat1,
    STATE(20), 1,
      sym_markdown_section,
  [214] = 2,
    ACTIONS(72), 1,
      sym_semicolon,
    ACTIONS(74), 1,
      sym_newline_token,
  [221] = 2,
    ACTIONS(76), 1,
      sym_semicolon,
    ACTIONS(78), 1,
      sym_newline_token,
  [228] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_newline_token,
  [233] = 2,
    ACTIONS(82), 1,
      sym_semicolon,
    ACTIONS(84), 1,
      sym_newline_token,
  [240] = 1,
    ACTIONS(86), 1,
      sym_newline_token,
  [244] = 1,
    ACTIONS(84), 1,
      sym_newline_token,
  [248] = 1,
    ACTIONS(88), 1,
      sym_newline_token,
  [252] = 1,
    ACTIONS(90), 1,
      sym_newline_token,
  [256] = 1,
    ACTIONS(92), 1,
      sym_newline_token,
  [260] = 1,
    ACTIONS(94), 1,
      sym_newline_token,
  [264] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [268] = 1,
    ACTIONS(61), 1,
      aux_sym_markdown_section_token1,
  [272] = 1,
    ACTIONS(98), 1,
      sym_newline_token,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 113,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 166,
  [SMALL_STATE(14)] = 176,
  [SMALL_STATE(15)] = 184,
  [SMALL_STATE(16)] = 194,
  [SMALL_STATE(17)] = 204,
  [SMALL_STATE(18)] = 214,
  [SMALL_STATE(19)] = 221,
  [SMALL_STATE(20)] = 228,
  [SMALL_STATE(21)] = 233,
  [SMALL_STATE(22)] = 240,
  [SMALL_STATE(23)] = 244,
  [SMALL_STATE(24)] = 248,
  [SMALL_STATE(25)] = 252,
  [SMALL_STATE(26)] = 256,
  [SMALL_STATE(27)] = 260,
  [SMALL_STATE(28)] = 264,
  [SMALL_STATE(29)] = 268,
  [SMALL_STATE(30)] = 272,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(25),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_section, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_section, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markdown_section_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markdown_section_repeat1, 2), SHIFT_REPEAT(8),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_markdown_section_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jsx_section, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jsx_section, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

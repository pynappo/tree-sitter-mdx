#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym_import_start = 3,
  sym_export_start = 4,
  sym_semicolon = 5,
  sym_markdown = 6,
  sym_identifier = 7,
  sym_double_quoted_string = 8,
  sym_single_quoted_string = 9,
  sym_backtick_quoted_string = 10,
  sym_document = 11,
  sym_section = 12,
  sym_standalone_jsx = 13,
  sym_import_statement = 14,
  sym_string = 15,
  aux_sym_document_repeat1 = 16,
  aux_sym_import_statement_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_import_start] = "import_start",
  [sym_export_start] = "export_start",
  [sym_semicolon] = "semicolon",
  [sym_markdown] = "markdown",
  [sym_identifier] = "identifier",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_backtick_quoted_string] = "backtick_quoted_string",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_standalone_jsx] = "standalone_jsx",
  [sym_import_statement] = "import_statement",
  [sym_string] = "string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_import_start] = sym_import_start,
  [sym_export_start] = sym_export_start,
  [sym_semicolon] = sym_semicolon,
  [sym_markdown] = sym_markdown,
  [sym_identifier] = sym_identifier,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_backtick_quoted_string] = sym_backtick_quoted_string,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_standalone_jsx] = sym_standalone_jsx,
  [sym_import_statement] = sym_import_statement,
  [sym_string] = sym_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_markdown] = {
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
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_standalone_jsx] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '`') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '`') ADVANCE(4);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '`') ADVANCE(34);
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
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_import_start);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_import_start);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_export_start);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_markdown);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_markdown);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_markdown);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_markdown);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_markdown);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_markdown);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_markdown);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_backtick_quoted_string);
      if (lookahead == '`') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_import_start] = ACTIONS(1),
    [sym_export_start] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_double_quoted_string] = ACTIONS(1),
    [sym_single_quoted_string] = ACTIONS(1),
    [sym_backtick_quoted_string] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(14),
    [sym_section] = STATE(4),
    [sym_standalone_jsx] = STATE(10),
    [sym_import_statement] = STATE(11),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_import_start] = ACTIONS(5),
    [sym_markdown] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(3), 1,
      aux_sym_import_statement_repeat1,
    STATE(8), 1,
      sym_string,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(11), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [17] = 4,
    STATE(6), 1,
      aux_sym_import_statement_repeat1,
    STATE(9), 1,
      sym_string,
    ACTIONS(11), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
    ACTIONS(13), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
  [34] = 6,
    ACTIONS(5), 1,
      sym_import_start,
    ACTIONS(7), 1,
      sym_markdown,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_standalone_jsx,
    STATE(11), 1,
      sym_import_statement,
    STATE(5), 2,
      sym_section,
      aux_sym_document_repeat1,
  [54] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_import_start,
    ACTIONS(22), 1,
      sym_markdown,
    STATE(10), 1,
      sym_standalone_jsx,
    STATE(11), 1,
      sym_import_statement,
    STATE(5), 2,
      sym_section,
      aux_sym_document_repeat1,
  [74] = 3,
    STATE(6), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(25), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
    ACTIONS(28), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_backtick_quoted_string,
  [88] = 2,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 3,
      sym_import_start,
      sym_semicolon,
      sym_markdown,
  [97] = 3,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_semicolon,
    ACTIONS(36), 2,
      sym_import_start,
      sym_markdown,
  [108] = 3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_semicolon,
    ACTIONS(42), 2,
      sym_import_start,
      sym_markdown,
  [119] = 2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 2,
      sym_import_start,
      sym_markdown,
  [127] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 2,
      sym_import_start,
      sym_markdown,
  [135] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 2,
      sym_import_start,
      sym_markdown,
  [143] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 2,
      sym_import_start,
      sym_markdown,
  [151] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 119,
  [SMALL_STATE(11)] = 127,
  [SMALL_STATE(12)] = 135,
  [SMALL_STATE(13)] = 143,
  [SMALL_STATE(14)] = 151,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(6),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standalone_jsx, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standalone_jsx, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

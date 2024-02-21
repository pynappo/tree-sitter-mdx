#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_import_start = 1,
  sym_export_start = 2,
  sym_statement_body = 3,
  sym_semicolon = 4,
  sym_markdown = 5,
  sym_document = 6,
  sym_section = 7,
  sym_standalone_jsx = 8,
  sym_import_statement = 9,
  sym_export_statement = 10,
  aux_sym_document_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_import_start] = "import_start",
  [sym_export_start] = "export_start",
  [sym_statement_body] = "statement_body",
  [sym_semicolon] = "semicolon",
  [sym_markdown] = "markdown",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_standalone_jsx] = "standalone_jsx",
  [sym_import_statement] = "import_statement",
  [sym_export_statement] = "export_statement",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_import_start] = sym_import_start,
  [sym_export_start] = sym_export_start,
  [sym_statement_body] = sym_statement_body,
  [sym_semicolon] = sym_semicolon,
  [sym_markdown] = sym_markdown,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_standalone_jsx] = sym_standalone_jsx,
  [sym_import_statement] = sym_import_statement,
  [sym_export_statement] = sym_export_statement,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_import_start] = {
    .visible = true,
    .named = true,
  },
  [sym_export_start] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_body] = {
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
  [sym_export_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'k') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'w') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_import_start);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_export_start);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_statement_body);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_statement_body);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_markdown);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_import_start] = ACTIONS(1),
    [sym_export_start] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_markdown] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(10),
    [sym_section] = STATE(2),
    [sym_standalone_jsx] = STATE(4),
    [sym_import_statement] = STATE(5),
    [sym_export_statement] = STATE(5),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_import_start] = ACTIONS(5),
    [sym_export_start] = ACTIONS(7),
    [sym_markdown] = ACTIONS(9),
  },
  [2] = {
    [sym_section] = STATE(3),
    [sym_standalone_jsx] = STATE(4),
    [sym_import_statement] = STATE(5),
    [sym_export_statement] = STATE(5),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_import_start] = ACTIONS(5),
    [sym_export_start] = ACTIONS(7),
    [sym_markdown] = ACTIONS(9),
  },
  [3] = {
    [sym_section] = STATE(3),
    [sym_standalone_jsx] = STATE(4),
    [sym_import_statement] = STATE(5),
    [sym_export_statement] = STATE(5),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_import_start] = ACTIONS(15),
    [sym_export_start] = ACTIONS(18),
    [sym_markdown] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      sym_import_start,
      sym_export_start,
      sym_markdown,
  [7] = 1,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      sym_import_start,
      sym_export_start,
      sym_markdown,
  [14] = 1,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      sym_import_start,
      sym_export_start,
      sym_markdown,
  [21] = 1,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      sym_import_start,
      sym_export_start,
      sym_markdown,
  [28] = 1,
    ACTIONS(32), 1,
      sym_statement_body,
  [32] = 1,
    ACTIONS(34), 1,
      sym_statement_body,
  [36] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
  [40] = 1,
    ACTIONS(38), 1,
      sym_semicolon,
  [44] = 1,
    ACTIONS(40), 1,
      sym_semicolon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 7,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 21,
  [SMALL_STATE(8)] = 28,
  [SMALL_STATE(9)] = 32,
  [SMALL_STATE(10)] = 36,
  [SMALL_STATE(11)] = 40,
  [SMALL_STATE(12)] = 44,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standalone_jsx, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [36] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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

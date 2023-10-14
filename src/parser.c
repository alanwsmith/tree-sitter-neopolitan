#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_paragraph_first_word_token1 = 1,
  sym_title_token = 2,
  aux_sym_word_token1 = 3,
  sym_source_file = 4,
  sym_paragraph = 5,
  sym_paragraph_first_word = 6,
  sym_title_headline = 7,
  sym_title_section = 8,
  sym_word = 9,
  aux_sym_source_file_repeat1 = 10,
  aux_sym_paragraph_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_paragraph_first_word_token1] = "paragraph_first_word_token1",
  [sym_title_token] = "title_token",
  [aux_sym_word_token1] = "word_token1",
  [sym_source_file] = "source_file",
  [sym_paragraph] = "title_headline",
  [sym_paragraph_first_word] = "paragraph_first_word",
  [sym_title_headline] = "title_headline",
  [sym_title_section] = "title_section",
  [sym_word] = "word",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_paragraph_first_word_token1] = aux_sym_paragraph_first_word_token1,
  [sym_title_token] = sym_title_token,
  [aux_sym_word_token1] = aux_sym_word_token1,
  [sym_source_file] = sym_source_file,
  [sym_paragraph] = sym_paragraph,
  [sym_paragraph_first_word] = sym_paragraph_first_word,
  [sym_title_headline] = sym_title_headline,
  [sym_title_section] = sym_title_section,
  [sym_word] = sym_word,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_paragraph_first_word_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_title_token] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_word_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = false,
  },
  [sym_paragraph_first_word] = {
    .visible = true,
    .named = true,
  },
  [sym_title_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_title_section] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
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
      if (eof) ADVANCE(9);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_paragraph_first_word_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_title_token);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_paragraph_first_word_token1] = ACTIONS(1),
    [sym_title_token] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym_title_section] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_title_token] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      aux_sym_word_token1,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      sym_title_token,
    STATE(3), 2,
      sym_word,
      aux_sym_paragraph_repeat1,
  [12] = 3,
    ACTIONS(7), 1,
      aux_sym_word_token1,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym_title_token,
    STATE(4), 2,
      sym_word,
      aux_sym_paragraph_repeat1,
  [24] = 3,
    ACTIONS(13), 1,
      aux_sym_word_token1,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym_title_token,
    STATE(4), 2,
      sym_word,
      aux_sym_paragraph_repeat1,
  [36] = 4,
    ACTIONS(16), 1,
      aux_sym_paragraph_first_word_token1,
    STATE(2), 1,
      sym_paragraph_first_word,
    STATE(10), 1,
      sym_paragraph,
    STATE(11), 1,
      sym_title_headline,
  [49] = 3,
    ACTIONS(3), 1,
      sym_title_token,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [60] = 3,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      sym_title_token,
    STATE(7), 2,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [71] = 2,
    ACTIONS(27), 1,
      aux_sym_word_token1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [79] = 2,
    ACTIONS(31), 1,
      aux_sym_word_token1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [87] = 1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [92] = 1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [97] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 49,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 71,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 97,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(9),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_headline, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 2),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Neopolitan(void) {
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

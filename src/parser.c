#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_empty_line = 1,
  sym_following_word_chars = 2,
  sym_non_lt_char = 3,
  sym_paragraph_first_word = 4,
  sym_title_token = 5,
  sym_whitespace = 6,
  sym_word = 7,
  sym_source_file = 8,
  sym_paragraph = 9,
  sym_title_headline = 10,
  sym_title_section = 11,
  aux_sym_source_file_repeat1 = 12,
  aux_sym_paragraph_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_empty_line] = "empty_line",
  [sym_following_word_chars] = "following_word_chars",
  [sym_non_lt_char] = "non_lt_char",
  [sym_paragraph_first_word] = "paragraph_first_word",
  [sym_title_token] = "title_token",
  [sym_whitespace] = "whitespace",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym_paragraph] = "title_headline",
  [sym_title_headline] = "title_headline",
  [sym_title_section] = "title_section",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_empty_line] = sym_empty_line,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_paragraph_first_word] = sym_paragraph_first_word,
  [sym_title_token] = sym_title_token,
  [sym_whitespace] = sym_whitespace,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym_paragraph] = sym_paragraph,
  [sym_title_headline] = sym_title_headline,
  [sym_title_section] = sym_title_section,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_empty_line] = {
    .visible = true,
    .named = true,
  },
  [sym_following_word_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_non_lt_char] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_first_word] = {
    .visible = true,
    .named = true,
  },
  [sym_title_token] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = false,
  },
  [sym_title_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_title_section] = {
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
      if (eof) ADVANCE(12);
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '<') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_empty_line);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(23);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_paragraph_first_word);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_paragraph_first_word);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_paragraph_first_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_title_token);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_empty_line] = ACTIONS(1),
    [sym_following_word_chars] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_paragraph_first_word] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_title_section] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_title_token] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      sym_paragraph_first_word,
    ACTIONS(7), 1,
      sym_whitespace,
    STATE(3), 1,
      aux_sym_paragraph_repeat1,
    STATE(8), 1,
      sym_paragraph,
    STATE(9), 1,
      sym_title_headline,
  [16] = 4,
    ACTIONS(7), 1,
      sym_whitespace,
    ACTIONS(11), 1,
      sym_paragraph_first_word,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [30] = 4,
    ACTIONS(15), 1,
      sym_paragraph_first_word,
    ACTIONS(18), 1,
      sym_whitespace,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [44] = 3,
    ACTIONS(3), 1,
      sym_title_token,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [55] = 3,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_title_token,
    STATE(6), 2,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [66] = 2,
    ACTIONS(28), 1,
      sym_paragraph_first_word,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_title_token,
      sym_whitespace,
  [75] = 1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [80] = 1,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [85] = 1,
    ACTIONS(34), 1,
      sym_empty_line,
  [89] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
  [93] = 1,
    ACTIONS(38), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 85,
  [SMALL_STATE(11)] = 89,
  [SMALL_STATE(12)] = 93,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_headline, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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

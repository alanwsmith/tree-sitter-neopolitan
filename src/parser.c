#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_empty_line = 1,
  anon_sym_LT = 2,
  sym_following_word_chars = 3,
  sym_non_lt_char = 4,
  sym_single_newline = 5,
  sym_title_token = 6,
  sym_whitespace = 7,
  sym_source_file = 8,
  sym_headline = 9,
  sym_initial_word_chars = 10,
  sym_lt_with_non_lt_char = 11,
  sym_paragraph = 12,
  sym_paragraph_first_word = 13,
  sym_title_section = 14,
  sym_word = 15,
  sym_wordbreak = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_paragraph_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_empty_line] = "empty_line",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_non_lt_char] = "non_lt_char",
  [sym_single_newline] = "single_newline",
  [sym_title_token] = "title_token",
  [sym_whitespace] = "whitespace",
  [sym_source_file] = "source_file",
  [sym_headline] = "headline",
  [sym_initial_word_chars] = "initial_word_chars",
  [sym_lt_with_non_lt_char] = "lt_with_non_lt_char",
  [sym_paragraph] = "headline",
  [sym_paragraph_first_word] = "paragraph_first_word",
  [sym_title_section] = "title_section",
  [sym_word] = "word",
  [sym_wordbreak] = "wordbreak",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_empty_line] = sym_empty_line,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_single_newline] = sym_single_newline,
  [sym_title_token] = sym_title_token,
  [sym_whitespace] = sym_whitespace,
  [sym_source_file] = sym_source_file,
  [sym_headline] = sym_headline,
  [sym_initial_word_chars] = sym_initial_word_chars,
  [sym_lt_with_non_lt_char] = sym_lt_with_non_lt_char,
  [sym_paragraph] = sym_paragraph,
  [sym_paragraph_first_word] = sym_paragraph_first_word,
  [sym_title_section] = sym_title_section,
  [sym_word] = sym_word,
  [sym_wordbreak] = sym_wordbreak,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_following_word_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_non_lt_char] = {
    .visible = true,
    .named = true,
  },
  [sym_single_newline] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_initial_word_chars] = {
    .visible = true,
    .named = true,
  },
  [sym_lt_with_non_lt_char] = {
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
  [sym_title_section] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_wordbreak] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
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
          lookahead != '<') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_empty_line);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_single_newline);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_title_token);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(21);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(21);
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
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_empty_line] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_single_newline] = ACTIONS(1),
    [sym_title_token] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_title_section] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_title_token] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(10), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_paragraph_repeat1,
    STATE(5), 1,
      sym_word,
    STATE(18), 1,
      sym_lt_with_non_lt_char,
    STATE(19), 1,
      sym_initial_word_chars,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [23] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_paragraph_repeat1,
    STATE(5), 1,
      sym_word,
    STATE(18), 1,
      sym_lt_with_non_lt_char,
    STATE(19), 1,
      sym_initial_word_chars,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [46] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_paragraph_repeat1,
    STATE(5), 1,
      sym_word,
    STATE(18), 1,
      sym_lt_with_non_lt_char,
    STATE(19), 1,
      sym_initial_word_chars,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [69] = 4,
    ACTIONS(23), 1,
      sym_non_lt_char,
    STATE(8), 1,
      sym_wordbreak,
    ACTIONS(25), 2,
      sym_single_newline,
      sym_whitespace,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym_title_token,
  [85] = 2,
    ACTIONS(29), 1,
      sym_non_lt_char,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym_single_newline,
      sym_title_token,
      sym_whitespace,
  [96] = 2,
    ACTIONS(33), 1,
      sym_non_lt_char,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym_title_token,
  [105] = 2,
    ACTIONS(35), 1,
      sym_non_lt_char,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym_title_token,
  [114] = 3,
    ACTIONS(3), 1,
      sym_title_token,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [125] = 4,
    ACTIONS(39), 1,
      sym_non_lt_char,
    STATE(12), 1,
      sym_paragraph_first_word,
    STATE(14), 1,
      sym_paragraph,
    STATE(15), 1,
      sym_headline,
  [138] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_title_token,
    STATE(11), 2,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [149] = 2,
    STATE(4), 1,
      sym_wordbreak,
    ACTIONS(25), 2,
      sym_single_newline,
      sym_whitespace,
  [157] = 1,
    ACTIONS(46), 2,
      sym_single_newline,
      sym_whitespace,
  [162] = 1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [167] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [172] = 1,
    ACTIONS(52), 1,
      sym_empty_line,
  [176] = 1,
    ACTIONS(54), 1,
      sym_non_lt_char,
  [180] = 1,
    ACTIONS(56), 1,
      sym_following_word_chars,
  [184] = 1,
    ACTIONS(58), 1,
      sym_following_word_chars,
  [188] = 1,
    ACTIONS(60), 1,
      sym_following_word_chars,
  [192] = 1,
    ACTIONS(62), 1,
      sym_following_word_chars,
  [196] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 114,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 162,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 184,
  [SMALL_STATE(20)] = 188,
  [SMALL_STATE(21)] = 192,
  [SMALL_STATE(22)] = 196,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(17),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wordbreak, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

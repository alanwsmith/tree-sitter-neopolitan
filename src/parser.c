#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 1
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_dashes = 1,
  anon_sym_LT = 2,
  sym_following_word_chars = 3,
  sym_non_lt_char = 4,
  sym_p_section_token = 5,
  sym_newline = 6,
  sym_title_section_token = 7,
  sym_whitespace = 8,
  sym_source_file = 9,
  sym_headline = 10,
  sym_initial_word_chars = 11,
  sym_lt_with_non_lt_char = 12,
  sym_p_section = 13,
  sym_paragraph = 14,
  sym_paragraph_first_word = 15,
  sym_title_section = 16,
  sym_word = 17,
  sym_wordbreak = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_paragraph_repeat1 = 20,
  anon_alias_sym_headline = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_dashes] = "dashes",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_non_lt_char] = "non_lt_char",
  [sym_p_section_token] = "p_section_token",
  [sym_newline] = "newline",
  [sym_title_section_token] = "title_section_token",
  [sym_whitespace] = "whitespace",
  [sym_source_file] = "source_file",
  [sym_headline] = "headline",
  [sym_initial_word_chars] = "initial_word_chars",
  [sym_lt_with_non_lt_char] = "lt_with_non_lt_char",
  [sym_p_section] = "p_section",
  [sym_paragraph] = "paragraph",
  [sym_paragraph_first_word] = "paragraph_first_word",
  [sym_title_section] = "title_section",
  [sym_word] = "word",
  [sym_wordbreak] = "wordbreak",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [anon_alias_sym_headline] = "headline",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_dashes] = sym_dashes,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_p_section_token] = sym_p_section_token,
  [sym_newline] = sym_newline,
  [sym_title_section_token] = sym_title_section_token,
  [sym_whitespace] = sym_whitespace,
  [sym_source_file] = sym_source_file,
  [sym_headline] = sym_headline,
  [sym_initial_word_chars] = sym_initial_word_chars,
  [sym_lt_with_non_lt_char] = sym_lt_with_non_lt_char,
  [sym_p_section] = sym_p_section,
  [sym_paragraph] = sym_paragraph,
  [sym_paragraph_first_word] = sym_paragraph_first_word,
  [sym_title_section] = sym_title_section,
  [sym_word] = sym_word,
  [sym_wordbreak] = sym_wordbreak,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [anon_alias_sym_headline] = anon_alias_sym_headline,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_dashes] = {
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
  [sym_p_section_token] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_title_section_token] = {
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
  [sym_p_section] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
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
  [anon_alias_sym_headline] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_headline,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_paragraph, 2,
    sym_paragraph,
    anon_alias_sym_headline,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(22);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dashes] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym_p_section] = STATE(5),
    [sym_title_section] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_dashes] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(9), 1,
      sym_newline,
    STATE(4), 1,
      aux_sym_paragraph_repeat1,
    STATE(15), 1,
      sym_word,
    STATE(24), 1,
      sym_initial_word_chars,
    STATE(25), 1,
      sym_lt_with_non_lt_char,
  [22] = 7,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(14), 1,
      sym_non_lt_char,
    ACTIONS(17), 1,
      sym_newline,
    STATE(3), 1,
      aux_sym_paragraph_repeat1,
    STATE(15), 1,
      sym_word,
    STATE(24), 1,
      sym_initial_word_chars,
    STATE(25), 1,
      sym_lt_with_non_lt_char,
  [44] = 7,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      sym_non_lt_char,
    ACTIONS(19), 1,
      sym_newline,
    STATE(3), 1,
      aux_sym_paragraph_repeat1,
    STATE(15), 1,
      sym_word,
    STATE(24), 1,
      sym_initial_word_chars,
    STATE(25), 1,
      sym_lt_with_non_lt_char,
  [66] = 3,
    ACTIONS(3), 1,
      sym_dashes,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(7), 3,
      sym_p_section,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [78] = 4,
    ACTIONS(25), 1,
      sym_non_lt_char,
    STATE(11), 1,
      sym_paragraph_first_word,
    STATE(21), 1,
      sym_paragraph,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [92] = 3,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_dashes,
    STATE(7), 3,
      sym_p_section,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [104] = 4,
    ACTIONS(32), 1,
      sym_non_lt_char,
    STATE(6), 1,
      sym_headline,
    STATE(11), 1,
      sym_paragraph_first_word,
    STATE(13), 1,
      sym_paragraph,
  [117] = 2,
    ACTIONS(36), 1,
      sym_non_lt_char,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [125] = 3,
    ACTIONS(32), 1,
      sym_non_lt_char,
    STATE(11), 1,
      sym_paragraph_first_word,
    STATE(19), 1,
      sym_paragraph,
  [135] = 3,
    ACTIONS(38), 1,
      sym_newline,
    ACTIONS(40), 1,
      sym_whitespace,
    STATE(2), 1,
      sym_wordbreak,
  [145] = 1,
    ACTIONS(17), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [151] = 2,
    ACTIONS(44), 1,
      sym_non_lt_char,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [159] = 1,
    ACTIONS(46), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [165] = 3,
    ACTIONS(38), 1,
      sym_newline,
    ACTIONS(40), 1,
      sym_whitespace,
    STATE(12), 1,
      sym_wordbreak,
  [175] = 2,
    ACTIONS(50), 1,
      sym_non_lt_char,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [183] = 2,
    ACTIONS(52), 1,
      sym_p_section_token,
    ACTIONS(54), 1,
      sym_title_section_token,
  [190] = 2,
    ACTIONS(56), 1,
      sym_newline,
    ACTIONS(58), 1,
      sym_whitespace,
  [197] = 1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [202] = 2,
    ACTIONS(62), 1,
      sym_newline,
    ACTIONS(64), 1,
      sym_whitespace,
  [209] = 1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [214] = 1,
    ACTIONS(68), 1,
      sym_newline,
  [218] = 1,
    ACTIONS(70), 1,
      sym_non_lt_char,
  [222] = 1,
    ACTIONS(72), 1,
      sym_following_word_chars,
  [226] = 1,
    ACTIONS(74), 1,
      sym_following_word_chars,
  [230] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [234] = 1,
    ACTIONS(78), 1,
      sym_following_word_chars,
  [238] = 1,
    ACTIONS(80), 1,
      sym_following_word_chars,
  [242] = 1,
    ACTIONS(82), 1,
      sym_newline,
  [246] = 1,
    ACTIONS(84), 1,
      sym_newline,
  [250] = 1,
    ACTIONS(86), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 135,
  [SMALL_STATE(12)] = 145,
  [SMALL_STATE(13)] = 151,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 183,
  [SMALL_STATE(18)] = 190,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 218,
  [SMALL_STATE(24)] = 222,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 230,
  [SMALL_STATE(27)] = 234,
  [SMALL_STATE(28)] = 238,
  [SMALL_STATE(29)] = 242,
  [SMALL_STATE(30)] = 246,
  [SMALL_STATE(31)] = 250,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(23),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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

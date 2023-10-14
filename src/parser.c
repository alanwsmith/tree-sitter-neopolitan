#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 1
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_dashes = 1,
  anon_sym_LT = 2,
  sym_following_word_chars = 3,
  sym_non_lt_char = 4,
  sym_p_section_token = 5,
  sym_newline = 6,
  sym_title_token = 7,
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
  [sym_title_token] = "title_token",
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
  [sym_title_token] = sym_title_token,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(14);
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
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_title_token);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(24);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dashes] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_title_token] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_p_section] = STATE(5),
    [sym_title_section] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_dashes] = ACTIONS(3),
    [sym_title_token] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(10), 1,
      sym_non_lt_char,
    ACTIONS(13), 1,
      sym_newline,
    STATE(2), 1,
      aux_sym_paragraph_repeat1,
    STATE(17), 1,
      sym_word,
    STATE(24), 1,
      sym_lt_with_non_lt_char,
    STATE(26), 1,
      sym_initial_word_chars,
  [22] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_non_lt_char,
    ACTIONS(19), 1,
      sym_newline,
    STATE(2), 1,
      aux_sym_paragraph_repeat1,
    STATE(17), 1,
      sym_word,
    STATE(24), 1,
      sym_lt_with_non_lt_char,
    STATE(26), 1,
      sym_initial_word_chars,
  [44] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_non_lt_char,
    ACTIONS(21), 1,
      sym_newline,
    STATE(3), 1,
      aux_sym_paragraph_repeat1,
    STATE(17), 1,
      sym_word,
    STATE(24), 1,
      sym_lt_with_non_lt_char,
    STATE(26), 1,
      sym_initial_word_chars,
  [66] = 4,
    ACTIONS(3), 1,
      sym_dashes,
    ACTIONS(5), 1,
      sym_title_token,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym_p_section,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [81] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_dashes,
    ACTIONS(30), 1,
      sym_title_token,
    STATE(6), 3,
      sym_p_section,
      sym_title_section,
      aux_sym_source_file_repeat1,
  [96] = 5,
    ACTIONS(35), 1,
      sym_dashes,
    ACTIONS(37), 1,
      sym_non_lt_char,
    STATE(13), 1,
      sym_paragraph_first_word,
    STATE(14), 1,
      sym_paragraph,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [113] = 2,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_title_token,
    ACTIONS(41), 2,
      sym_dashes,
      sym_non_lt_char,
  [122] = 2,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_title_token,
    ACTIONS(45), 2,
      sym_dashes,
      sym_non_lt_char,
  [131] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_title_token,
    ACTIONS(49), 2,
      sym_dashes,
      sym_non_lt_char,
  [140] = 4,
    ACTIONS(51), 1,
      sym_non_lt_char,
    STATE(7), 1,
      sym_headline,
    STATE(8), 1,
      sym_paragraph,
    STATE(13), 1,
      sym_paragraph_first_word,
  [153] = 3,
    ACTIONS(51), 1,
      sym_non_lt_char,
    STATE(13), 1,
      sym_paragraph_first_word,
    STATE(16), 1,
      sym_paragraph,
  [163] = 3,
    ACTIONS(53), 1,
      sym_newline,
    ACTIONS(55), 1,
      sym_whitespace,
    STATE(4), 1,
      sym_wordbreak,
  [173] = 2,
    ACTIONS(59), 1,
      sym_dashes,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [181] = 1,
    ACTIONS(61), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [187] = 2,
    ACTIONS(65), 1,
      sym_dashes,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_title_token,
  [195] = 3,
    ACTIONS(53), 1,
      sym_newline,
    ACTIONS(55), 1,
      sym_whitespace,
    STATE(18), 1,
      sym_wordbreak,
  [205] = 1,
    ACTIONS(13), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [211] = 2,
    ACTIONS(67), 1,
      sym_newline,
    ACTIONS(69), 1,
      sym_whitespace,
  [218] = 2,
    ACTIONS(71), 1,
      sym_newline,
    ACTIONS(73), 1,
      sym_whitespace,
  [225] = 1,
    ACTIONS(75), 1,
      sym_following_word_chars,
  [229] = 1,
    ACTIONS(77), 1,
      sym_p_section_token,
  [233] = 1,
    ACTIONS(79), 1,
      sym_non_lt_char,
  [237] = 1,
    ACTIONS(81), 1,
      sym_following_word_chars,
  [241] = 1,
    ACTIONS(83), 1,
      sym_newline,
  [245] = 1,
    ACTIONS(85), 1,
      sym_following_word_chars,
  [249] = 1,
    ACTIONS(87), 1,
      sym_newline,
  [253] = 1,
    ACTIONS(89), 1,
      sym_following_word_chars,
  [257] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
  [261] = 1,
    ACTIONS(93), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 113,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 153,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 173,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 187,
  [SMALL_STATE(17)] = 195,
  [SMALL_STATE(18)] = 205,
  [SMALL_STATE(19)] = 211,
  [SMALL_STATE(20)] = 218,
  [SMALL_STATE(21)] = 225,
  [SMALL_STATE(22)] = 229,
  [SMALL_STATE(23)] = 233,
  [SMALL_STATE(24)] = 237,
  [SMALL_STATE(25)] = 241,
  [SMALL_STATE(26)] = 245,
  [SMALL_STATE(27)] = 249,
  [SMALL_STATE(28)] = 253,
  [SMALL_STATE(29)] = 257,
  [SMALL_STATE(30)] = 261,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(23),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_section, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_section, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p_section, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [91] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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

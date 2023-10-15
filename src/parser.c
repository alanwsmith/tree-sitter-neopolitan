#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 1
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_dashes = 1,
  sym_list_dash = 2,
  sym_list_section_token = 3,
  anon_sym_LT = 4,
  sym_following_word_chars = 5,
  sym_non_lt_char = 6,
  sym_optional_nb_whitespace = 7,
  sym_p_section_token = 8,
  sym_newline = 9,
  sym_title_section_token = 10,
  sym_todo_left_bracket = 11,
  sym_todo_right_bracket = 12,
  sym_completed_todo_bracket = 13,
  sym_todo_section_token = 14,
  sym_whitespace = 15,
  sym_source_file = 16,
  sym_headline = 17,
  sym_initial_word_chars = 18,
  sym_list_item = 19,
  sym_list_section = 20,
  sym_lt_with_non_lt_char = 21,
  sym_p_section = 22,
  sym_paragraph = 23,
  sym_paragraph_body = 24,
  sym_paragraph_first_word = 25,
  sym_title_section = 26,
  sym_empty_todo_bracket = 27,
  sym_todo_item = 28,
  sym_todo_section = 29,
  sym_word = 30,
  sym_wordbreak = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_list_item_repeat1 = 33,
  aux_sym_list_section_repeat1 = 34,
  aux_sym_paragraph_repeat1 = 35,
  aux_sym_todo_item_repeat1 = 36,
  aux_sym_todo_section_repeat1 = 37,
  anon_alias_sym_headline = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_dashes] = "dashes",
  [sym_list_dash] = "list_dash",
  [sym_list_section_token] = "list_section_token",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_non_lt_char] = "non_lt_char",
  [sym_optional_nb_whitespace] = "optional_nb_whitespace",
  [sym_p_section_token] = "p_section_token",
  [sym_newline] = "newline",
  [sym_title_section_token] = "title_section_token",
  [sym_todo_left_bracket] = "todo_left_bracket",
  [sym_todo_right_bracket] = "todo_right_bracket",
  [sym_completed_todo_bracket] = "completed_todo_bracket",
  [sym_todo_section_token] = "todo_section_token",
  [sym_whitespace] = "whitespace",
  [sym_source_file] = "source_file",
  [sym_headline] = "headline",
  [sym_initial_word_chars] = "initial_word_chars",
  [sym_list_item] = "list_item",
  [sym_list_section] = "list_section",
  [sym_lt_with_non_lt_char] = "lt_with_non_lt_char",
  [sym_p_section] = "p_section",
  [sym_paragraph] = "paragraph",
  [sym_paragraph_body] = "paragraph_body",
  [sym_paragraph_first_word] = "paragraph_first_word",
  [sym_title_section] = "title_section",
  [sym_empty_todo_bracket] = "empty_todo_bracket",
  [sym_todo_item] = "todo_item",
  [sym_todo_section] = "todo_section",
  [sym_word] = "word",
  [sym_wordbreak] = "wordbreak",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_item_repeat1] = "list_item_repeat1",
  [aux_sym_list_section_repeat1] = "list_section_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_todo_item_repeat1] = "todo_item_repeat1",
  [aux_sym_todo_section_repeat1] = "todo_section_repeat1",
  [anon_alias_sym_headline] = "headline",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_dashes] = sym_dashes,
  [sym_list_dash] = sym_list_dash,
  [sym_list_section_token] = sym_list_section_token,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_optional_nb_whitespace] = sym_optional_nb_whitespace,
  [sym_p_section_token] = sym_p_section_token,
  [sym_newline] = sym_newline,
  [sym_title_section_token] = sym_title_section_token,
  [sym_todo_left_bracket] = sym_todo_left_bracket,
  [sym_todo_right_bracket] = sym_todo_right_bracket,
  [sym_completed_todo_bracket] = sym_completed_todo_bracket,
  [sym_todo_section_token] = sym_todo_section_token,
  [sym_whitespace] = sym_whitespace,
  [sym_source_file] = sym_source_file,
  [sym_headline] = sym_headline,
  [sym_initial_word_chars] = sym_initial_word_chars,
  [sym_list_item] = sym_list_item,
  [sym_list_section] = sym_list_section,
  [sym_lt_with_non_lt_char] = sym_lt_with_non_lt_char,
  [sym_p_section] = sym_p_section,
  [sym_paragraph] = sym_paragraph,
  [sym_paragraph_body] = sym_paragraph_body,
  [sym_paragraph_first_word] = sym_paragraph_first_word,
  [sym_title_section] = sym_title_section,
  [sym_empty_todo_bracket] = sym_empty_todo_bracket,
  [sym_todo_item] = sym_todo_item,
  [sym_todo_section] = sym_todo_section,
  [sym_word] = sym_word,
  [sym_wordbreak] = sym_wordbreak,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_item_repeat1] = aux_sym_list_item_repeat1,
  [aux_sym_list_section_repeat1] = aux_sym_list_section_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_todo_item_repeat1] = aux_sym_todo_item_repeat1,
  [aux_sym_todo_section_repeat1] = aux_sym_todo_section_repeat1,
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
  [sym_list_dash] = {
    .visible = true,
    .named = true,
  },
  [sym_list_section_token] = {
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
  [sym_optional_nb_whitespace] = {
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
  [sym_todo_left_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_right_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_completed_todo_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_section_token] = {
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
  [sym_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_list_section] = {
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
  [sym_paragraph_body] = {
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
  [sym_empty_todo_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_item] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_section] = {
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
  [aux_sym_list_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_todo_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_todo_section_repeat1] = {
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
  [13] = 6,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 11,
  [18] = 18,
  [19] = 9,
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
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 28,
  [37] = 37,
  [38] = 32,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_optional_nb_whitespace);
      if (eof) ADVANCE(19);
      if (lookahead == '\t') ADVANCE(28);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == ']') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(25);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_optional_nb_whitespace);
      if (lookahead == '\t') ADVANCE(28);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_optional_nb_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_todo_left_bracket);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(4);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_todo_right_bracket);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_completed_todo_bracket);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_todo_section_token);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dashes] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [sym_list_section_token] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_optional_nb_whitespace] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_title_section_token] = ACTIONS(1),
    [sym_todo_left_bracket] = ACTIONS(1),
    [sym_completed_todo_bracket] = ACTIONS(1),
    [sym_todo_section_token] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym_list_section] = STATE(15),
    [sym_p_section] = STATE(15),
    [sym_title_section] = STATE(15),
    [sym_todo_section] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym_dashes] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(10), 1,
      sym_non_lt_char,
    ACTIONS(13), 1,
      sym_todo_left_bracket,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(35), 1,
      sym_word,
    STATE(46), 1,
      sym_paragraph_body,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    STATE(50), 1,
      sym_initial_word_chars,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      sym_dashes,
      sym_completed_todo_bracket,
  [33] = 10,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(21), 1,
      sym_todo_left_bracket,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(35), 1,
      sym_word,
    STATE(46), 1,
      sym_paragraph_body,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    STATE(50), 1,
      sym_initial_word_chars,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      sym_dashes,
      sym_completed_todo_bracket,
  [66] = 8,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(35), 1,
      sym_word,
    STATE(46), 1,
      sym_paragraph_body,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    STATE(50), 1,
      sym_initial_word_chars,
  [91] = 5,
    ACTIONS(27), 1,
      sym_todo_left_bracket,
    ACTIONS(30), 1,
      sym_completed_todo_bracket,
    STATE(51), 1,
      sym_empty_todo_bracket,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(5), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
  [109] = 7,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(33), 1,
      sym_newline,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    STATE(35), 1,
      sym_word,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    STATE(50), 1,
      sym_initial_word_chars,
  [131] = 5,
    ACTIONS(37), 1,
      sym_list_dash,
    ACTIONS(39), 1,
      sym_non_lt_char,
    STATE(32), 1,
      sym_paragraph_first_word,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(16), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [149] = 5,
    ACTIONS(43), 1,
      sym_todo_left_bracket,
    ACTIONS(45), 1,
      sym_completed_todo_bracket,
    STATE(51), 1,
      sym_empty_todo_bracket,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(5), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
  [167] = 5,
    ACTIONS(49), 1,
      sym_list_dash,
    ACTIONS(51), 1,
      sym_non_lt_char,
    STATE(32), 1,
      sym_paragraph_first_word,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(9), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [185] = 3,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      sym_dashes,
    STATE(10), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [199] = 7,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(59), 1,
      sym_newline,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(35), 1,
      sym_word,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    STATE(50), 1,
      sym_initial_word_chars,
  [221] = 7,
    ACTIONS(61), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      sym_non_lt_char,
    ACTIONS(67), 1,
      sym_newline,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    STATE(35), 1,
      sym_word,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    STATE(50), 1,
      sym_initial_word_chars,
  [243] = 7,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(69), 1,
      sym_newline,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    STATE(35), 1,
      sym_word,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    STATE(50), 1,
      sym_initial_word_chars,
  [265] = 7,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(71), 1,
      sym_newline,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    STATE(35), 1,
      sym_word,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    STATE(50), 1,
      sym_initial_word_chars,
  [287] = 3,
    ACTIONS(3), 1,
      sym_dashes,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(10), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [301] = 5,
    ACTIONS(39), 1,
      sym_non_lt_char,
    ACTIONS(77), 1,
      sym_list_dash,
    STATE(32), 1,
      sym_paragraph_first_word,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(9), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [319] = 7,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym_non_lt_char,
    ACTIONS(79), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(35), 1,
      sym_word,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    STATE(50), 1,
      sym_initial_word_chars,
  [341] = 4,
    ACTIONS(39), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(19), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [356] = 4,
    ACTIONS(51), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(19), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [371] = 2,
    ACTIONS(13), 2,
      sym_non_lt_char,
      sym_todo_left_bracket,
    ACTIONS(5), 4,
      ts_builtin_sym_end,
      sym_dashes,
      anon_sym_LT,
      sym_completed_todo_bracket,
  [382] = 4,
    ACTIONS(43), 1,
      sym_todo_left_bracket,
    ACTIONS(45), 1,
      sym_completed_todo_bracket,
    STATE(51), 1,
      sym_empty_todo_bracket,
    STATE(8), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
  [396] = 3,
    ACTIONS(85), 1,
      sym_list_dash,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(24), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [408] = 4,
    ACTIONS(39), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    STATE(39), 1,
      sym_paragraph,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [422] = 3,
    ACTIONS(91), 1,
      sym_list_dash,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(24), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [434] = 4,
    ACTIONS(94), 1,
      sym_non_lt_char,
    STATE(23), 1,
      sym_headline,
    STATE(37), 1,
      sym_paragraph,
    STATE(38), 1,
      sym_paragraph_first_word,
  [447] = 3,
    ACTIONS(94), 1,
      sym_non_lt_char,
    STATE(38), 1,
      sym_paragraph_first_word,
    STATE(18), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [458] = 4,
    ACTIONS(96), 1,
      sym_list_section_token,
    ACTIONS(98), 1,
      sym_p_section_token,
    ACTIONS(100), 1,
      sym_title_section_token,
    ACTIONS(102), 1,
      sym_todo_section_token,
  [471] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(106), 2,
      sym_list_dash,
      sym_non_lt_char,
  [480] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(110), 2,
      sym_list_dash,
      sym_non_lt_char,
  [489] = 1,
    ACTIONS(112), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [495] = 2,
    ACTIONS(110), 1,
      sym_non_lt_char,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [503] = 3,
    ACTIONS(114), 1,
      sym_newline,
    ACTIONS(116), 1,
      sym_whitespace,
    STATE(17), 1,
      sym_wordbreak,
  [513] = 1,
    ACTIONS(67), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [519] = 2,
    ACTIONS(118), 1,
      sym_list_dash,
    STATE(22), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [527] = 3,
    ACTIONS(114), 1,
      sym_newline,
    ACTIONS(116), 1,
      sym_whitespace,
    STATE(33), 1,
      sym_wordbreak,
  [537] = 2,
    ACTIONS(106), 1,
      sym_non_lt_char,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [545] = 2,
    ACTIONS(122), 1,
      sym_non_lt_char,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [553] = 3,
    ACTIONS(114), 1,
      sym_newline,
    ACTIONS(116), 1,
      sym_whitespace,
    STATE(11), 1,
      sym_wordbreak,
  [563] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [568] = 2,
    ACTIONS(126), 1,
      sym_newline,
    ACTIONS(128), 1,
      sym_whitespace,
  [575] = 2,
    ACTIONS(130), 1,
      sym_newline,
    ACTIONS(132), 1,
      sym_whitespace,
  [582] = 1,
    ACTIONS(134), 1,
      sym_following_word_chars,
  [586] = 1,
    ACTIONS(136), 1,
      sym_todo_right_bracket,
  [590] = 1,
    ACTIONS(138), 1,
      sym_following_word_chars,
  [594] = 1,
    ACTIONS(140), 1,
      sym_whitespace,
  [598] = 1,
    ACTIONS(142), 1,
      sym_newline,
  [602] = 1,
    ACTIONS(144), 1,
      sym_whitespace,
  [606] = 1,
    ACTIONS(146), 1,
      sym_following_word_chars,
  [610] = 1,
    ACTIONS(148), 1,
      sym_non_lt_char,
  [614] = 1,
    ACTIONS(150), 1,
      sym_following_word_chars,
  [618] = 1,
    ACTIONS(152), 1,
      sym_whitespace,
  [622] = 1,
    ACTIONS(154), 1,
      sym_optional_nb_whitespace,
  [626] = 1,
    ACTIONS(156), 1,
      sym_newline,
  [630] = 1,
    ACTIONS(158), 1,
      sym_newline,
  [634] = 1,
    ACTIONS(160), 1,
      sym_newline,
  [638] = 1,
    ACTIONS(162), 1,
      sym_newline,
  [642] = 1,
    ACTIONS(164), 1,
      sym_newline,
  [646] = 1,
    ACTIONS(166), 1,
      sym_newline,
  [650] = 1,
    ACTIONS(168), 1,
      sym_newline,
  [654] = 1,
    ACTIONS(170), 1,
      sym_newline,
  [658] = 1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 185,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 243,
  [SMALL_STATE(14)] = 265,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 301,
  [SMALL_STATE(17)] = 319,
  [SMALL_STATE(18)] = 341,
  [SMALL_STATE(19)] = 356,
  [SMALL_STATE(20)] = 371,
  [SMALL_STATE(21)] = 382,
  [SMALL_STATE(22)] = 396,
  [SMALL_STATE(23)] = 408,
  [SMALL_STATE(24)] = 422,
  [SMALL_STATE(25)] = 434,
  [SMALL_STATE(26)] = 447,
  [SMALL_STATE(27)] = 458,
  [SMALL_STATE(28)] = 471,
  [SMALL_STATE(29)] = 480,
  [SMALL_STATE(30)] = 489,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 503,
  [SMALL_STATE(33)] = 513,
  [SMALL_STATE(34)] = 519,
  [SMALL_STATE(35)] = 527,
  [SMALL_STATE(36)] = 537,
  [SMALL_STATE(37)] = 545,
  [SMALL_STATE(38)] = 553,
  [SMALL_STATE(39)] = 563,
  [SMALL_STATE(40)] = 568,
  [SMALL_STATE(41)] = 575,
  [SMALL_STATE(42)] = 582,
  [SMALL_STATE(43)] = 586,
  [SMALL_STATE(44)] = 590,
  [SMALL_STATE(45)] = 594,
  [SMALL_STATE(46)] = 598,
  [SMALL_STATE(47)] = 602,
  [SMALL_STATE(48)] = 606,
  [SMALL_STATE(49)] = 610,
  [SMALL_STATE(50)] = 614,
  [SMALL_STATE(51)] = 618,
  [SMALL_STATE(52)] = 622,
  [SMALL_STATE(53)] = 626,
  [SMALL_STATE(54)] = 630,
  [SMALL_STATE(55)] = 634,
  [SMALL_STATE(56)] = 638,
  [SMALL_STATE(57)] = 642,
  [SMALL_STATE(58)] = 646,
  [SMALL_STATE(59)] = 650,
  [SMALL_STATE(60)] = 654,
  [SMALL_STATE(61)] = 658,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(49),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(48),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_item, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_todo_item, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(52),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(44),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(49),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(48),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(47),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_todo_bracket, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [172] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

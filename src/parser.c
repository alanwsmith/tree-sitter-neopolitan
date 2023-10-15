#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 1
#define TOKEN_COUNT 15
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
  sym_newline = 6,
  sym_non_lt_char = 7,
  sym_p_section_token = 8,
  sym_title_section_token = 9,
  sym_todo_left_bracket = 10,
  sym_todo_right_bracket = 11,
  sym_todo_checkmark = 12,
  sym_todo_section_token = 13,
  sym_whitespace = 14,
  sym_source_file = 15,
  sym_headline = 16,
  sym_initial_word_chars = 17,
  sym_list_item = 18,
  sym_list_section = 19,
  sym_lt_with_non_lt_char = 20,
  sym_p_section = 21,
  sym_paragraph = 22,
  sym_paragraph_body = 23,
  sym_paragraph_first_word = 24,
  sym_title_section = 25,
  sym_empty_todo_bracket = 26,
  sym_completed_todo_bracket = 27,
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
  [sym_newline] = "newline",
  [sym_non_lt_char] = "non_lt_char",
  [sym_p_section_token] = "p_section_token",
  [sym_title_section_token] = "title_section_token",
  [sym_todo_left_bracket] = "todo_left_bracket",
  [sym_todo_right_bracket] = "todo_right_bracket",
  [sym_todo_checkmark] = "todo_checkmark",
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
  [sym_completed_todo_bracket] = "completed_todo_bracket",
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
  [sym_newline] = sym_newline,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_p_section_token] = sym_p_section_token,
  [sym_title_section_token] = sym_title_section_token,
  [sym_todo_left_bracket] = sym_todo_left_bracket,
  [sym_todo_right_bracket] = sym_todo_right_bracket,
  [sym_todo_checkmark] = sym_todo_checkmark,
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
  [sym_completed_todo_bracket] = sym_completed_todo_bracket,
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
  [sym_newline] = {
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
  [sym_todo_checkmark] = {
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
  [sym_completed_todo_bracket] = {
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
  [17] = 7,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 9,
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
  [32] = 30,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 29,
  [38] = 38,
  [39] = 33,
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
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(25);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(23);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(25);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_todo_left_bracket);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_todo_right_bracket);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_todo_checkmark);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_todo_section_token);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t') ADVANCE(35);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 14},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dashes] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_todo_left_bracket] = ACTIONS(1),
    [sym_todo_right_bracket] = ACTIONS(1),
    [sym_todo_checkmark] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym_list_section] = STATE(15),
    [sym_p_section] = STATE(15),
    [sym_title_section] = STATE(15),
    [sym_todo_section] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym_dashes] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(10), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(36), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_paragraph_body,
    STATE(62), 1,
      sym_lt_with_non_lt_char,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      sym_dashes,
      sym_todo_left_bracket,
  [30] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(36), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_paragraph_body,
    STATE(62), 1,
      sym_lt_with_non_lt_char,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_dashes,
      sym_todo_left_bracket,
  [60] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(36), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_paragraph_body,
    STATE(62), 1,
      sym_lt_with_non_lt_char,
  [85] = 4,
    ACTIONS(23), 1,
      sym_todo_left_bracket,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(5), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(52), 2,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
  [101] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(26), 1,
      sym_newline,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    STATE(36), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(62), 1,
      sym_lt_with_non_lt_char,
  [123] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(28), 1,
      sym_newline,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(36), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(62), 1,
      sym_lt_with_non_lt_char,
  [145] = 5,
    ACTIONS(32), 1,
      sym_list_dash,
    ACTIONS(34), 1,
      sym_non_lt_char,
    STATE(33), 1,
      sym_paragraph_first_word,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(16), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [163] = 5,
    ACTIONS(38), 1,
      sym_list_dash,
    ACTIONS(40), 1,
      sym_non_lt_char,
    STATE(33), 1,
      sym_paragraph_first_word,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(9), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [181] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_dashes,
    STATE(10), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [195] = 4,
    ACTIONS(50), 1,
      sym_todo_left_bracket,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(5), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(52), 2,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
  [211] = 7,
    ACTIONS(52), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      sym_newline,
    ACTIONS(57), 1,
      sym_non_lt_char,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    STATE(36), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(62), 1,
      sym_lt_with_non_lt_char,
  [233] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(60), 1,
      sym_newline,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    STATE(36), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(62), 1,
      sym_lt_with_non_lt_char,
  [255] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(62), 1,
      sym_newline,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    STATE(36), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(62), 1,
      sym_lt_with_non_lt_char,
  [277] = 3,
    ACTIONS(3), 1,
      sym_dashes,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(10), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [291] = 5,
    ACTIONS(34), 1,
      sym_non_lt_char,
    ACTIONS(68), 1,
      sym_list_dash,
    STATE(33), 1,
      sym_paragraph_first_word,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(9), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [309] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(70), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(36), 1,
      sym_word,
    STATE(44), 1,
      sym_initial_word_chars,
    STATE(62), 1,
      sym_lt_with_non_lt_char,
  [331] = 4,
    ACTIONS(34), 1,
      sym_non_lt_char,
    STATE(39), 1,
      sym_paragraph_first_word,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(21), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [346] = 4,
    ACTIONS(34), 1,
      sym_non_lt_char,
    STATE(39), 1,
      sym_paragraph_first_word,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(20), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [361] = 4,
    ACTIONS(34), 1,
      sym_non_lt_char,
    STATE(39), 1,
      sym_paragraph_first_word,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(21), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [376] = 4,
    ACTIONS(40), 1,
      sym_non_lt_char,
    STATE(39), 1,
      sym_paragraph_first_word,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(21), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [391] = 3,
    ACTIONS(50), 1,
      sym_todo_left_bracket,
    STATE(11), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(52), 2,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
  [403] = 3,
    ACTIONS(80), 1,
      sym_list_dash,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(25), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [415] = 2,
    ACTIONS(82), 1,
      sym_non_lt_char,
    ACTIONS(5), 4,
      ts_builtin_sym_end,
      sym_dashes,
      anon_sym_LT,
      sym_todo_left_bracket,
  [425] = 3,
    ACTIONS(86), 1,
      sym_list_dash,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(25), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [437] = 4,
    ACTIONS(89), 1,
      sym_non_lt_char,
    STATE(19), 1,
      sym_headline,
    STATE(38), 1,
      sym_paragraph,
    STATE(39), 1,
      sym_paragraph_first_word,
  [450] = 3,
    ACTIONS(89), 1,
      sym_non_lt_char,
    STATE(39), 1,
      sym_paragraph_first_word,
    STATE(18), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [461] = 4,
    ACTIONS(91), 1,
      sym_list_section_token,
    ACTIONS(93), 1,
      sym_p_section_token,
    ACTIONS(95), 1,
      sym_title_section_token,
    ACTIONS(97), 1,
      sym_todo_section_token,
  [474] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(101), 2,
      sym_list_dash,
      sym_non_lt_char,
  [483] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(105), 2,
      sym_list_dash,
      sym_non_lt_char,
  [492] = 1,
    ACTIONS(107), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [498] = 2,
    ACTIONS(105), 1,
      sym_non_lt_char,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [506] = 3,
    ACTIONS(109), 1,
      sym_newline,
    ACTIONS(111), 1,
      sym_whitespace,
    STATE(17), 1,
      sym_wordbreak,
  [516] = 1,
    ACTIONS(55), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [522] = 2,
    ACTIONS(113), 1,
      sym_list_dash,
    STATE(23), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [530] = 3,
    ACTIONS(109), 1,
      sym_newline,
    ACTIONS(111), 1,
      sym_whitespace,
    STATE(34), 1,
      sym_wordbreak,
  [540] = 2,
    ACTIONS(101), 1,
      sym_non_lt_char,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [548] = 2,
    ACTIONS(117), 1,
      sym_non_lt_char,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [556] = 3,
    ACTIONS(109), 1,
      sym_newline,
    ACTIONS(111), 1,
      sym_whitespace,
    STATE(7), 1,
      sym_wordbreak,
  [566] = 2,
    ACTIONS(119), 1,
      sym_newline,
    ACTIONS(121), 1,
      sym_whitespace,
  [573] = 2,
    ACTIONS(123), 1,
      sym_todo_right_bracket,
    ACTIONS(125), 1,
      sym_todo_checkmark,
  [580] = 2,
    ACTIONS(127), 1,
      sym_newline,
    ACTIONS(129), 1,
      sym_whitespace,
  [587] = 1,
    ACTIONS(131), 1,
      sym_following_word_chars,
  [591] = 1,
    ACTIONS(133), 1,
      sym_following_word_chars,
  [595] = 1,
    ACTIONS(135), 1,
      sym_todo_right_bracket,
  [599] = 1,
    ACTIONS(137), 1,
      sym_following_word_chars,
  [603] = 1,
    ACTIONS(139), 1,
      sym_whitespace,
  [607] = 1,
    ACTIONS(141), 1,
      sym_newline,
  [611] = 1,
    ACTIONS(143), 1,
      sym_whitespace,
  [615] = 1,
    ACTIONS(145), 1,
      sym_whitespace,
  [619] = 1,
    ACTIONS(147), 1,
      sym_non_lt_char,
  [623] = 1,
    ACTIONS(149), 1,
      sym_whitespace,
  [627] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [631] = 1,
    ACTIONS(153), 1,
      sym_newline,
  [635] = 1,
    ACTIONS(155), 1,
      sym_newline,
  [639] = 1,
    ACTIONS(157), 1,
      sym_newline,
  [643] = 1,
    ACTIONS(159), 1,
      sym_newline,
  [647] = 1,
    ACTIONS(161), 1,
      sym_newline,
  [651] = 1,
    ACTIONS(163), 1,
      sym_newline,
  [655] = 1,
    ACTIONS(165), 1,
      sym_newline,
  [659] = 1,
    ACTIONS(167), 1,
      sym_newline,
  [663] = 1,
    ACTIONS(169), 1,
      sym_following_word_chars,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 163,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 277,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 309,
  [SMALL_STATE(18)] = 331,
  [SMALL_STATE(19)] = 346,
  [SMALL_STATE(20)] = 361,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 403,
  [SMALL_STATE(24)] = 415,
  [SMALL_STATE(25)] = 425,
  [SMALL_STATE(26)] = 437,
  [SMALL_STATE(27)] = 450,
  [SMALL_STATE(28)] = 461,
  [SMALL_STATE(29)] = 474,
  [SMALL_STATE(30)] = 483,
  [SMALL_STATE(31)] = 492,
  [SMALL_STATE(32)] = 498,
  [SMALL_STATE(33)] = 506,
  [SMALL_STATE(34)] = 516,
  [SMALL_STATE(35)] = 522,
  [SMALL_STATE(36)] = 530,
  [SMALL_STATE(37)] = 540,
  [SMALL_STATE(38)] = 548,
  [SMALL_STATE(39)] = 556,
  [SMALL_STATE(40)] = 566,
  [SMALL_STATE(41)] = 573,
  [SMALL_STATE(42)] = 580,
  [SMALL_STATE(43)] = 587,
  [SMALL_STATE(44)] = 591,
  [SMALL_STATE(45)] = 595,
  [SMALL_STATE(46)] = 599,
  [SMALL_STATE(47)] = 603,
  [SMALL_STATE(48)] = 607,
  [SMALL_STATE(49)] = 611,
  [SMALL_STATE(50)] = 615,
  [SMALL_STATE(51)] = 619,
  [SMALL_STATE(52)] = 623,
  [SMALL_STATE(53)] = 627,
  [SMALL_STATE(54)] = 631,
  [SMALL_STATE(55)] = 635,
  [SMALL_STATE(56)] = 639,
  [SMALL_STATE(57)] = 643,
  [SMALL_STATE(58)] = 647,
  [SMALL_STATE(59)] = 651,
  [SMALL_STATE(60)] = 655,
  [SMALL_STATE(61)] = 659,
  [SMALL_STATE(62)] = 663,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(51),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_item, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(41),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(46),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 5),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(51),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(62),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(49),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completed_todo_bracket, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_todo_bracket, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
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

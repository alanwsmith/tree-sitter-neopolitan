#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
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
  sym_p_section_token = 7,
  sym_newline = 8,
  sym_title_section_token = 9,
  sym_empty_todo_bracket = 10,
  sym_completed_todo_bracket = 11,
  sym_todo_section_token = 12,
  sym_whitespace = 13,
  sym_source_file = 14,
  sym_headline = 15,
  sym_initial_word_chars = 16,
  sym_list_item = 17,
  sym_list_section = 18,
  sym_lt_with_non_lt_char = 19,
  sym_p_section = 20,
  sym_paragraph = 21,
  sym_paragraph_body = 22,
  sym_paragraph_first_word = 23,
  sym_title_section = 24,
  sym_todo_item = 25,
  sym_todo_section = 26,
  sym_word = 27,
  sym_wordbreak = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_list_item_repeat1 = 30,
  aux_sym_list_section_repeat1 = 31,
  aux_sym_paragraph_repeat1 = 32,
  aux_sym_todo_item_repeat1 = 33,
  aux_sym_todo_section_repeat1 = 34,
  anon_alias_sym_headline = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_dashes] = "dashes",
  [sym_list_dash] = "list_dash",
  [sym_list_section_token] = "list_section_token",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_non_lt_char] = "non_lt_char",
  [sym_p_section_token] = "p_section_token",
  [sym_newline] = "newline",
  [sym_title_section_token] = "title_section_token",
  [sym_empty_todo_bracket] = "empty_todo_bracket",
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
  [sym_p_section_token] = sym_p_section_token,
  [sym_newline] = sym_newline,
  [sym_title_section_token] = sym_title_section_token,
  [sym_empty_todo_bracket] = sym_empty_todo_bracket,
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
  [sym_empty_todo_bracket] = {
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
  [13] = 13,
  [14] = 7,
  [15] = 9,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 10,
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
  [32] = 31,
  [33] = 25,
  [34] = 34,
  [35] = 35,
  [36] = 29,
  [37] = 37,
  [38] = 38,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\t') ADVANCE(37);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ']') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(25);
      END_STATE();
    case 17:
      if (eof) ADVANCE(20);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(26);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_dashes);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_empty_todo_bracket);
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
      if (lookahead == '\n') ADVANCE(31);
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
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 18},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dashes] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_empty_todo_bracket] = ACTIONS(1),
    [sym_completed_todo_bracket] = ACTIONS(1),
    [sym_whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_list_section] = STATE(12),
    [sym_p_section] = STATE(12),
    [sym_title_section] = STATE(12),
    [sym_todo_section] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_dashes] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(38), 1,
      sym_word,
    STATE(43), 1,
      sym_paragraph_body,
    STATE(47), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    ACTIONS(5), 4,
      ts_builtin_sym_end,
      sym_dashes,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
  [31] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(16), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(38), 1,
      sym_word,
    STATE(43), 1,
      sym_paragraph_body,
    STATE(47), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      sym_dashes,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
  [62] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(6), 1,
      aux_sym_paragraph_repeat1,
    STATE(38), 1,
      sym_word,
    STATE(43), 1,
      sym_paragraph_body,
    STATE(47), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
  [87] = 5,
    ACTIONS(23), 1,
      sym_list_dash,
    ACTIONS(25), 1,
      sym_non_lt_char,
    STATE(32), 1,
      sym_paragraph_first_word,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [105] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(27), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(38), 1,
      sym_word,
    STATE(47), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
  [127] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(29), 1,
      sym_newline,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    STATE(38), 1,
      sym_word,
    STATE(47), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
  [149] = 5,
    ACTIONS(25), 1,
      sym_non_lt_char,
    ACTIONS(33), 1,
      sym_list_dash,
    STATE(32), 1,
      sym_paragraph_first_word,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(5), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [167] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(35), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(38), 1,
      sym_word,
    STATE(47), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
  [189] = 5,
    ACTIONS(39), 1,
      sym_list_dash,
    ACTIONS(41), 1,
      sym_non_lt_char,
    STATE(32), 1,
      sym_paragraph_first_word,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(10), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [207] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_dashes,
    STATE(11), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [221] = 3,
    ACTIONS(3), 1,
      sym_dashes,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(11), 5,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [235] = 7,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(54), 1,
      sym_non_lt_char,
    ACTIONS(57), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(38), 1,
      sym_word,
    STATE(47), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
  [257] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(59), 1,
      sym_newline,
    STATE(15), 1,
      aux_sym_paragraph_repeat1,
    STATE(38), 1,
      sym_word,
    STATE(47), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
  [279] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_non_lt_char,
    ACTIONS(61), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(38), 1,
      sym_word,
    STATE(47), 1,
      sym_initial_word_chars,
    STATE(48), 1,
      sym_lt_with_non_lt_char,
  [301] = 2,
    ACTIONS(63), 1,
      sym_non_lt_char,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      sym_dashes,
      anon_sym_LT,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
  [312] = 4,
    ACTIONS(25), 1,
      sym_non_lt_char,
    STATE(31), 1,
      sym_paragraph_first_word,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(20), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [327] = 3,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(69), 2,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
    STATE(18), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
  [340] = 3,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(74), 2,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
    STATE(18), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
  [353] = 4,
    ACTIONS(41), 1,
      sym_non_lt_char,
    STATE(31), 1,
      sym_paragraph_first_word,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(20), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [368] = 3,
    ACTIONS(78), 1,
      sym_list_dash,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(23), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [380] = 4,
    ACTIONS(25), 1,
      sym_non_lt_char,
    STATE(31), 1,
      sym_paragraph_first_word,
    STATE(39), 1,
      sym_paragraph,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [394] = 3,
    ACTIONS(84), 1,
      sym_list_dash,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      sym_dashes,
    STATE(23), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [406] = 2,
    ACTIONS(74), 2,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
    STATE(19), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
  [415] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(89), 2,
      sym_list_dash,
      sym_non_lt_char,
  [424] = 4,
    ACTIONS(91), 1,
      sym_non_lt_char,
    STATE(22), 1,
      sym_headline,
    STATE(31), 1,
      sym_paragraph_first_word,
    STATE(34), 1,
      sym_paragraph,
  [437] = 3,
    ACTIONS(91), 1,
      sym_non_lt_char,
    STATE(31), 1,
      sym_paragraph_first_word,
    STATE(17), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [448] = 4,
    ACTIONS(93), 1,
      sym_list_section_token,
    ACTIONS(95), 1,
      sym_p_section_token,
    ACTIONS(97), 1,
      sym_title_section_token,
    ACTIONS(99), 1,
      sym_todo_section_token,
  [461] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_dashes,
    ACTIONS(103), 2,
      sym_list_dash,
      sym_non_lt_char,
  [470] = 2,
    ACTIONS(105), 1,
      sym_list_dash,
    STATE(21), 2,
      sym_list_item,
      aux_sym_list_section_repeat1,
  [478] = 3,
    ACTIONS(107), 1,
      sym_newline,
    ACTIONS(109), 1,
      sym_whitespace,
    STATE(14), 1,
      sym_wordbreak,
  [488] = 3,
    ACTIONS(107), 1,
      sym_newline,
    ACTIONS(109), 1,
      sym_whitespace,
    STATE(7), 1,
      sym_wordbreak,
  [498] = 2,
    ACTIONS(89), 1,
      sym_non_lt_char,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [506] = 2,
    ACTIONS(113), 1,
      sym_non_lt_char,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [514] = 1,
    ACTIONS(57), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [520] = 2,
    ACTIONS(103), 1,
      sym_non_lt_char,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [528] = 1,
    ACTIONS(115), 3,
      anon_sym_LT,
      sym_non_lt_char,
      sym_newline,
  [534] = 3,
    ACTIONS(107), 1,
      sym_newline,
    ACTIONS(109), 1,
      sym_whitespace,
    STATE(35), 1,
      sym_wordbreak,
  [544] = 1,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      sym_dashes,
  [549] = 2,
    ACTIONS(119), 1,
      sym_newline,
    ACTIONS(121), 1,
      sym_whitespace,
  [556] = 2,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(125), 1,
      sym_whitespace,
  [563] = 1,
    ACTIONS(127), 1,
      sym_whitespace,
  [567] = 1,
    ACTIONS(129), 1,
      sym_newline,
  [571] = 1,
    ACTIONS(131), 1,
      sym_following_word_chars,
  [575] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [579] = 1,
    ACTIONS(135), 1,
      sym_following_word_chars,
  [583] = 1,
    ACTIONS(137), 1,
      sym_following_word_chars,
  [587] = 1,
    ACTIONS(139), 1,
      sym_following_word_chars,
  [591] = 1,
    ACTIONS(141), 1,
      sym_non_lt_char,
  [595] = 1,
    ACTIONS(143), 1,
      sym_newline,
  [599] = 1,
    ACTIONS(145), 1,
      sym_newline,
  [603] = 1,
    ACTIONS(147), 1,
      sym_newline,
  [607] = 1,
    ACTIONS(149), 1,
      sym_newline,
  [611] = 1,
    ACTIONS(151), 1,
      sym_newline,
  [615] = 1,
    ACTIONS(153), 1,
      sym_newline,
  [619] = 1,
    ACTIONS(155), 1,
      sym_newline,
  [623] = 1,
    ACTIONS(157), 1,
      sym_newline,
  [627] = 1,
    ACTIONS(159), 1,
      sym_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 105,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 149,
  [SMALL_STATE(9)] = 167,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 235,
  [SMALL_STATE(14)] = 257,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 301,
  [SMALL_STATE(17)] = 312,
  [SMALL_STATE(18)] = 327,
  [SMALL_STATE(19)] = 340,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 368,
  [SMALL_STATE(22)] = 380,
  [SMALL_STATE(23)] = 394,
  [SMALL_STATE(24)] = 406,
  [SMALL_STATE(25)] = 415,
  [SMALL_STATE(26)] = 424,
  [SMALL_STATE(27)] = 437,
  [SMALL_STATE(28)] = 448,
  [SMALL_STATE(29)] = 461,
  [SMALL_STATE(30)] = 470,
  [SMALL_STATE(31)] = 478,
  [SMALL_STATE(32)] = 488,
  [SMALL_STATE(33)] = 498,
  [SMALL_STATE(34)] = 506,
  [SMALL_STATE(35)] = 514,
  [SMALL_STATE(36)] = 520,
  [SMALL_STATE(37)] = 528,
  [SMALL_STATE(38)] = 534,
  [SMALL_STATE(39)] = 544,
  [SMALL_STATE(40)] = 549,
  [SMALL_STATE(41)] = 556,
  [SMALL_STATE(42)] = 563,
  [SMALL_STATE(43)] = 567,
  [SMALL_STATE(44)] = 571,
  [SMALL_STATE(45)] = 575,
  [SMALL_STATE(46)] = 579,
  [SMALL_STATE(47)] = 583,
  [SMALL_STATE(48)] = 587,
  [SMALL_STATE(49)] = 591,
  [SMALL_STATE(50)] = 595,
  [SMALL_STATE(51)] = 599,
  [SMALL_STATE(52)] = 603,
  [SMALL_STATE(53)] = 607,
  [SMALL_STATE(54)] = 611,
  [SMALL_STATE(55)] = 615,
  [SMALL_STATE(56)] = 619,
  [SMALL_STATE(57)] = 623,
  [SMALL_STATE(58)] = 627,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_item, 3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(49),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(44),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(49),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(48),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(58),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(42),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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

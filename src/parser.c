#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 1
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_attr_bool_token1 = 1,
  sym_attr_dashes = 2,
  sym_attr_separator = 3,
  sym_attr_value = 4,
  sym_section_dashes = 5,
  sym_html_body = 6,
  sym_html_section_token = 7,
  sym_list_dash = 8,
  sym_list_section_token = 9,
  anon_sym_LT = 10,
  sym_following_word_chars = 11,
  sym_nb_whitespace = 12,
  sym_newline = 13,
  sym_non_lt_char = 14,
  sym_p_section_token = 15,
  sym_title_section_token = 16,
  sym_todo_left_bracket = 17,
  sym_todo_right_bracket = 18,
  sym_todo_checkmark = 19,
  sym_not_a_checkmark = 20,
  sym_todo_section_token = 21,
  sym_source_file = 22,
  sym_attr = 23,
  sym_attr_kv_pair = 24,
  sym_attr_bool = 25,
  sym_attr_key = 26,
  sym_headline = 27,
  sym_html_section = 28,
  sym_initial_word_chars = 29,
  sym_list_item = 30,
  sym_list_section = 31,
  sym_lt_with_non_lt_char = 32,
  sym_p_section = 33,
  sym_paragraph = 34,
  sym_paragraph_body = 35,
  sym_paragraph_first_word = 36,
  sym_title_section = 37,
  sym_empty_todo_bracket = 38,
  sym_completed_todo_bracket = 39,
  sym_in_progress_todo_bracket = 40,
  sym_todo_item = 41,
  sym_todo_section = 42,
  sym_word = 43,
  sym_wordbreak = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_list_item_repeat1 = 46,
  aux_sym_list_section_repeat1 = 47,
  aux_sym_list_section_repeat2 = 48,
  aux_sym_paragraph_repeat1 = 49,
  aux_sym_todo_item_repeat1 = 50,
  aux_sym_todo_section_repeat1 = 51,
  anon_alias_sym_headline = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_attr_bool_token1] = "attr_bool_token1",
  [sym_attr_dashes] = "attr_dashes",
  [sym_attr_separator] = "attr_separator",
  [sym_attr_value] = "attr_value",
  [sym_section_dashes] = "section_dashes",
  [sym_html_body] = "html_body",
  [sym_html_section_token] = "html_section_token",
  [sym_list_dash] = "list_dash",
  [sym_list_section_token] = "list_section_token",
  [anon_sym_LT] = "<",
  [sym_following_word_chars] = "following_word_chars",
  [sym_nb_whitespace] = "nb_whitespace",
  [sym_newline] = "newline",
  [sym_non_lt_char] = "non_lt_char",
  [sym_p_section_token] = "p_section_token",
  [sym_title_section_token] = "title_section_token",
  [sym_todo_left_bracket] = "todo_left_bracket",
  [sym_todo_right_bracket] = "todo_right_bracket",
  [sym_todo_checkmark] = "todo_checkmark",
  [sym_not_a_checkmark] = "not_a_checkmark",
  [sym_todo_section_token] = "todo_section_token",
  [sym_source_file] = "source_file",
  [sym_attr] = "attr",
  [sym_attr_kv_pair] = "attr_kv_pair",
  [sym_attr_bool] = "attr_bool",
  [sym_attr_key] = "attr_key",
  [sym_headline] = "headline",
  [sym_html_section] = "html_section",
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
  [sym_in_progress_todo_bracket] = "in_progress_todo_bracket",
  [sym_todo_item] = "todo_item",
  [sym_todo_section] = "todo_section",
  [sym_word] = "word",
  [sym_wordbreak] = "wordbreak",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_list_item_repeat1] = "list_item_repeat1",
  [aux_sym_list_section_repeat1] = "list_section_repeat1",
  [aux_sym_list_section_repeat2] = "list_section_repeat2",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_todo_item_repeat1] = "todo_item_repeat1",
  [aux_sym_todo_section_repeat1] = "todo_section_repeat1",
  [anon_alias_sym_headline] = "headline",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_attr_bool_token1] = aux_sym_attr_bool_token1,
  [sym_attr_dashes] = sym_attr_dashes,
  [sym_attr_separator] = sym_attr_separator,
  [sym_attr_value] = sym_attr_value,
  [sym_section_dashes] = sym_section_dashes,
  [sym_html_body] = sym_html_body,
  [sym_html_section_token] = sym_html_section_token,
  [sym_list_dash] = sym_list_dash,
  [sym_list_section_token] = sym_list_section_token,
  [anon_sym_LT] = anon_sym_LT,
  [sym_following_word_chars] = sym_following_word_chars,
  [sym_nb_whitespace] = sym_nb_whitespace,
  [sym_newline] = sym_newline,
  [sym_non_lt_char] = sym_non_lt_char,
  [sym_p_section_token] = sym_p_section_token,
  [sym_title_section_token] = sym_title_section_token,
  [sym_todo_left_bracket] = sym_todo_left_bracket,
  [sym_todo_right_bracket] = sym_todo_right_bracket,
  [sym_todo_checkmark] = sym_todo_checkmark,
  [sym_not_a_checkmark] = sym_not_a_checkmark,
  [sym_todo_section_token] = sym_todo_section_token,
  [sym_source_file] = sym_source_file,
  [sym_attr] = sym_attr,
  [sym_attr_kv_pair] = sym_attr_kv_pair,
  [sym_attr_bool] = sym_attr_bool,
  [sym_attr_key] = sym_attr_key,
  [sym_headline] = sym_headline,
  [sym_html_section] = sym_html_section,
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
  [sym_in_progress_todo_bracket] = sym_in_progress_todo_bracket,
  [sym_todo_item] = sym_todo_item,
  [sym_todo_section] = sym_todo_section,
  [sym_word] = sym_word,
  [sym_wordbreak] = sym_wordbreak,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_list_item_repeat1] = aux_sym_list_item_repeat1,
  [aux_sym_list_section_repeat1] = aux_sym_list_section_repeat1,
  [aux_sym_list_section_repeat2] = aux_sym_list_section_repeat2,
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
  [aux_sym_attr_bool_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_attr_dashes] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym_section_dashes] = {
    .visible = true,
    .named = true,
  },
  [sym_html_body] = {
    .visible = true,
    .named = true,
  },
  [sym_html_section_token] = {
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
  [sym_nb_whitespace] = {
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
  [sym_not_a_checkmark] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_section_token] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_kv_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_key] = {
    .visible = true,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_html_section] = {
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
  [sym_in_progress_todo_bracket] = {
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
  [aux_sym_list_section_repeat2] = {
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
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 12,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
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
  [53] = 36,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 37,
  [58] = 58,
  [59] = 52,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '\t') ADVANCE(42);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(44);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(24);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(44);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_attr_bool_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_attr_dashes);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_attr_separator);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_attr_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_section_dashes);
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_html_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_html_section_token);
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_nb_whitespace);
      if (lookahead == '\t') ADVANCE(42);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_nb_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_todo_left_bracket);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_todo_right_bracket);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_todo_checkmark);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_not_a_checkmark);
      if (lookahead != 0 &&
          lookahead != 'X' &&
          lookahead != ']' &&
          lookahead != 'x') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_todo_section_token);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 28},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 19},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_attr_separator] = ACTIONS(1),
    [sym_section_dashes] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_nb_whitespace] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_todo_left_bracket] = ACTIONS(1),
    [sym_todo_right_bracket] = ACTIONS(1),
    [sym_todo_checkmark] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_html_section] = STATE(6),
    [sym_list_section] = STATE(6),
    [sym_p_section] = STATE(6),
    [sym_title_section] = STATE(6),
    [sym_todo_section] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_section_dashes] = ACTIONS(3),
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
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(58), 1,
      sym_word,
    STATE(68), 1,
      sym_lt_with_non_lt_char,
    STATE(69), 1,
      sym_initial_word_chars,
    STATE(75), 1,
      sym_paragraph_body,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      sym_section_dashes,
      sym_todo_left_bracket,
  [30] = 9,
    ACTIONS(13), 1,
      anon_sym_LT,
    ACTIONS(16), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(58), 1,
      sym_word,
    STATE(68), 1,
      sym_lt_with_non_lt_char,
    STATE(69), 1,
      sym_initial_word_chars,
    STATE(75), 1,
      sym_paragraph_body,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      sym_section_dashes,
      sym_todo_left_bracket,
  [60] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_section_dashes,
    STATE(4), 6,
      sym_html_section,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [75] = 4,
    ACTIONS(26), 1,
      sym_todo_left_bracket,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(8), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(80), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [92] = 3,
    ACTIONS(3), 1,
      sym_section_dashes,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(4), 6,
      sym_html_section,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [107] = 4,
    ACTIONS(26), 1,
      sym_todo_left_bracket,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(8), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(80), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [124] = 4,
    ACTIONS(34), 1,
      sym_todo_left_bracket,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(8), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(80), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [141] = 8,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(10), 1,
      aux_sym_paragraph_repeat1,
    STATE(58), 1,
      sym_word,
    STATE(68), 1,
      sym_lt_with_non_lt_char,
    STATE(69), 1,
      sym_initial_word_chars,
    STATE(75), 1,
      sym_paragraph_body,
  [166] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_non_lt_char,
    ACTIONS(39), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(58), 1,
      sym_word,
    STATE(68), 1,
      sym_lt_with_non_lt_char,
    STATE(69), 1,
      sym_initial_word_chars,
  [188] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_non_lt_char,
    ACTIONS(41), 1,
      sym_newline,
    STATE(17), 1,
      aux_sym_paragraph_repeat1,
    STATE(58), 1,
      sym_word,
    STATE(68), 1,
      sym_lt_with_non_lt_char,
    STATE(69), 1,
      sym_initial_word_chars,
  [210] = 5,
    ACTIONS(45), 1,
      sym_list_dash,
    ACTIONS(47), 1,
      sym_non_lt_char,
    STATE(59), 1,
      sym_paragraph_first_word,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(12), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [228] = 7,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      sym_newline,
    ACTIONS(55), 1,
      sym_non_lt_char,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(58), 1,
      sym_word,
    STATE(68), 1,
      sym_lt_with_non_lt_char,
    STATE(69), 1,
      sym_initial_word_chars,
  [250] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_non_lt_char,
    ACTIONS(58), 1,
      sym_newline,
    STATE(16), 1,
      aux_sym_paragraph_repeat1,
    STATE(58), 1,
      sym_word,
    STATE(68), 1,
      sym_lt_with_non_lt_char,
    STATE(69), 1,
      sym_initial_word_chars,
  [272] = 5,
    ACTIONS(62), 1,
      sym_list_dash,
    ACTIONS(64), 1,
      sym_non_lt_char,
    STATE(59), 1,
      sym_paragraph_first_word,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(18), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [290] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_non_lt_char,
    ACTIONS(66), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(58), 1,
      sym_word,
    STATE(68), 1,
      sym_lt_with_non_lt_char,
    STATE(69), 1,
      sym_initial_word_chars,
  [312] = 7,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      sym_non_lt_char,
    ACTIONS(68), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_paragraph_repeat1,
    STATE(58), 1,
      sym_word,
    STATE(68), 1,
      sym_lt_with_non_lt_char,
    STATE(69), 1,
      sym_initial_word_chars,
  [334] = 5,
    ACTIONS(64), 1,
      sym_non_lt_char,
    ACTIONS(72), 1,
      sym_list_dash,
    STATE(59), 1,
      sym_paragraph_first_word,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(12), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [352] = 4,
    ACTIONS(64), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(23), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [367] = 4,
    ACTIONS(64), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(22), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [382] = 4,
    ACTIONS(64), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(22), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [397] = 4,
    ACTIONS(47), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(22), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [412] = 4,
    ACTIONS(64), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(22), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [427] = 4,
    ACTIONS(64), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(22), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [442] = 3,
    ACTIONS(26), 1,
      sym_todo_left_bracket,
    STATE(7), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(80), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [455] = 3,
    ACTIONS(26), 1,
      sym_todo_left_bracket,
    STATE(5), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(80), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [468] = 4,
    ACTIONS(64), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(20), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [483] = 3,
    ACTIONS(86), 1,
      sym_list_dash,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(28), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [495] = 5,
    ACTIONS(89), 1,
      sym_html_section_token,
    ACTIONS(91), 1,
      sym_list_section_token,
    ACTIONS(93), 1,
      sym_p_section_token,
    ACTIONS(95), 1,
      sym_title_section_token,
    ACTIONS(97), 1,
      sym_todo_section_token,
  [511] = 2,
    ACTIONS(99), 1,
      sym_non_lt_char,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      sym_section_dashes,
      anon_sym_LT,
      sym_todo_left_bracket,
  [521] = 3,
    ACTIONS(103), 1,
      sym_list_dash,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(28), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [533] = 3,
    ACTIONS(103), 1,
      sym_list_dash,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(28), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [545] = 3,
    ACTIONS(107), 1,
      sym_attr_dashes,
    ACTIONS(109), 1,
      sym_newline,
    STATE(44), 2,
      sym_attr,
      aux_sym_list_section_repeat1,
  [556] = 3,
    ACTIONS(107), 1,
      sym_attr_dashes,
    ACTIONS(111), 1,
      sym_newline,
    STATE(42), 2,
      sym_attr,
      aux_sym_list_section_repeat1,
  [567] = 3,
    ACTIONS(113), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    STATE(21), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [578] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    ACTIONS(117), 2,
      sym_list_dash,
      sym_non_lt_char,
  [587] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    ACTIONS(121), 2,
      sym_list_dash,
      sym_non_lt_char,
  [596] = 4,
    ACTIONS(113), 1,
      sym_non_lt_char,
    STATE(19), 1,
      sym_headline,
    STATE(52), 1,
      sym_paragraph_first_word,
    STATE(55), 1,
      sym_paragraph,
  [609] = 3,
    ACTIONS(107), 1,
      sym_attr_dashes,
    ACTIONS(123), 1,
      sym_newline,
    STATE(47), 2,
      sym_attr,
      aux_sym_list_section_repeat1,
  [620] = 3,
    ACTIONS(125), 1,
      aux_sym_attr_bool_token1,
    STATE(77), 1,
      sym_attr_key,
    STATE(65), 2,
      sym_attr_kv_pair,
      sym_attr_bool,
  [631] = 3,
    ACTIONS(107), 1,
      sym_attr_dashes,
    ACTIONS(127), 1,
      sym_newline,
    STATE(33), 2,
      sym_attr,
      aux_sym_list_section_repeat1,
  [642] = 3,
    ACTIONS(107), 1,
      sym_attr_dashes,
    ACTIONS(129), 1,
      sym_newline,
    STATE(44), 2,
      sym_attr,
      aux_sym_list_section_repeat1,
  [653] = 3,
    ACTIONS(107), 1,
      sym_attr_dashes,
    ACTIONS(131), 1,
      sym_newline,
    STATE(45), 2,
      sym_attr,
      aux_sym_list_section_repeat1,
  [664] = 3,
    ACTIONS(133), 1,
      sym_attr_dashes,
    ACTIONS(136), 1,
      sym_newline,
    STATE(44), 2,
      sym_attr,
      aux_sym_list_section_repeat1,
  [675] = 3,
    ACTIONS(107), 1,
      sym_attr_dashes,
    ACTIONS(138), 1,
      sym_newline,
    STATE(44), 2,
      sym_attr,
      aux_sym_list_section_repeat1,
  [686] = 4,
    ACTIONS(113), 1,
      sym_non_lt_char,
    STATE(27), 1,
      sym_headline,
    STATE(52), 1,
      sym_paragraph_first_word,
    STATE(55), 1,
      sym_paragraph,
  [699] = 3,
    ACTIONS(107), 1,
      sym_attr_dashes,
    ACTIONS(140), 1,
      sym_newline,
    STATE(44), 2,
      sym_attr,
      aux_sym_list_section_repeat1,
  [710] = 3,
    ACTIONS(113), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    STATE(24), 2,
      sym_paragraph,
      aux_sym_list_item_repeat1,
  [721] = 1,
    ACTIONS(142), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [727] = 2,
    ACTIONS(144), 1,
      sym_list_dash,
    STATE(31), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [735] = 2,
    ACTIONS(144), 1,
      sym_list_dash,
    STATE(32), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [743] = 3,
    ACTIONS(146), 1,
      sym_nb_whitespace,
    ACTIONS(148), 1,
      sym_newline,
    STATE(14), 1,
      sym_wordbreak,
  [753] = 2,
    ACTIONS(117), 1,
      sym_non_lt_char,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [761] = 3,
    ACTIONS(150), 1,
      sym_todo_right_bracket,
    ACTIONS(152), 1,
      sym_todo_checkmark,
    ACTIONS(154), 1,
      sym_not_a_checkmark,
  [771] = 2,
    ACTIONS(158), 1,
      sym_non_lt_char,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [779] = 1,
    ACTIONS(53), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [785] = 2,
    ACTIONS(121), 1,
      sym_non_lt_char,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [793] = 3,
    ACTIONS(146), 1,
      sym_nb_whitespace,
    ACTIONS(148), 1,
      sym_newline,
    STATE(56), 1,
      sym_wordbreak,
  [803] = 3,
    ACTIONS(146), 1,
      sym_nb_whitespace,
    ACTIONS(148), 1,
      sym_newline,
    STATE(11), 1,
      sym_wordbreak,
  [813] = 2,
    ACTIONS(160), 1,
      sym_nb_whitespace,
    ACTIONS(162), 1,
      sym_newline,
  [820] = 2,
    ACTIONS(164), 1,
      sym_nb_whitespace,
    ACTIONS(166), 1,
      sym_newline,
  [827] = 2,
    ACTIONS(168), 1,
      sym_attr_separator,
    ACTIONS(170), 1,
      sym_newline,
  [834] = 1,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [839] = 1,
    ACTIONS(174), 2,
      sym_attr_dashes,
      sym_newline,
  [844] = 1,
    ACTIONS(176), 1,
      sym_newline,
  [848] = 1,
    ACTIONS(178), 1,
      sym_non_lt_char,
  [852] = 1,
    ACTIONS(180), 1,
      sym_todo_right_bracket,
  [856] = 1,
    ACTIONS(182), 1,
      sym_following_word_chars,
  [860] = 1,
    ACTIONS(184), 1,
      sym_following_word_chars,
  [864] = 1,
    ACTIONS(186), 1,
      sym_nb_whitespace,
  [868] = 1,
    ACTIONS(188), 1,
      sym_nb_whitespace,
  [872] = 1,
    ACTIONS(190), 1,
      sym_todo_right_bracket,
  [876] = 1,
    ACTIONS(192), 1,
      sym_nb_whitespace,
  [880] = 1,
    ACTIONS(194), 1,
      sym_nb_whitespace,
  [884] = 1,
    ACTIONS(196), 1,
      sym_newline,
  [888] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [892] = 1,
    ACTIONS(200), 1,
      sym_attr_separator,
  [896] = 1,
    ACTIONS(202), 1,
      sym_attr_value,
  [900] = 1,
    ACTIONS(204), 1,
      sym_following_word_chars,
  [904] = 1,
    ACTIONS(206), 1,
      sym_nb_whitespace,
  [908] = 1,
    ACTIONS(208), 1,
      sym_following_word_chars,
  [912] = 1,
    ACTIONS(210), 1,
      sym_nb_whitespace,
  [916] = 1,
    ACTIONS(212), 1,
      sym_newline,
  [920] = 1,
    ACTIONS(214), 1,
      sym_nb_whitespace,
  [924] = 1,
    ACTIONS(216), 1,
      sym_html_body,
  [928] = 1,
    ACTIONS(218), 1,
      sym_newline,
  [932] = 1,
    ACTIONS(220), 1,
      sym_newline,
  [936] = 1,
    ACTIONS(222), 1,
      sym_newline,
  [940] = 1,
    ACTIONS(224), 1,
      sym_newline,
  [944] = 1,
    ACTIONS(226), 1,
      sym_newline,
  [948] = 1,
    ACTIONS(228), 1,
      sym_newline,
  [952] = 1,
    ACTIONS(230), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 272,
  [SMALL_STATE(16)] = 290,
  [SMALL_STATE(17)] = 312,
  [SMALL_STATE(18)] = 334,
  [SMALL_STATE(19)] = 352,
  [SMALL_STATE(20)] = 367,
  [SMALL_STATE(21)] = 382,
  [SMALL_STATE(22)] = 397,
  [SMALL_STATE(23)] = 412,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 442,
  [SMALL_STATE(26)] = 455,
  [SMALL_STATE(27)] = 468,
  [SMALL_STATE(28)] = 483,
  [SMALL_STATE(29)] = 495,
  [SMALL_STATE(30)] = 511,
  [SMALL_STATE(31)] = 521,
  [SMALL_STATE(32)] = 533,
  [SMALL_STATE(33)] = 545,
  [SMALL_STATE(34)] = 556,
  [SMALL_STATE(35)] = 567,
  [SMALL_STATE(36)] = 578,
  [SMALL_STATE(37)] = 587,
  [SMALL_STATE(38)] = 596,
  [SMALL_STATE(39)] = 609,
  [SMALL_STATE(40)] = 620,
  [SMALL_STATE(41)] = 631,
  [SMALL_STATE(42)] = 642,
  [SMALL_STATE(43)] = 653,
  [SMALL_STATE(44)] = 664,
  [SMALL_STATE(45)] = 675,
  [SMALL_STATE(46)] = 686,
  [SMALL_STATE(47)] = 699,
  [SMALL_STATE(48)] = 710,
  [SMALL_STATE(49)] = 721,
  [SMALL_STATE(50)] = 727,
  [SMALL_STATE(51)] = 735,
  [SMALL_STATE(52)] = 743,
  [SMALL_STATE(53)] = 753,
  [SMALL_STATE(54)] = 761,
  [SMALL_STATE(55)] = 771,
  [SMALL_STATE(56)] = 779,
  [SMALL_STATE(57)] = 785,
  [SMALL_STATE(58)] = 793,
  [SMALL_STATE(59)] = 803,
  [SMALL_STATE(60)] = 813,
  [SMALL_STATE(61)] = 820,
  [SMALL_STATE(62)] = 827,
  [SMALL_STATE(63)] = 834,
  [SMALL_STATE(64)] = 839,
  [SMALL_STATE(65)] = 844,
  [SMALL_STATE(66)] = 848,
  [SMALL_STATE(67)] = 852,
  [SMALL_STATE(68)] = 856,
  [SMALL_STATE(69)] = 860,
  [SMALL_STATE(70)] = 864,
  [SMALL_STATE(71)] = 868,
  [SMALL_STATE(72)] = 872,
  [SMALL_STATE(73)] = 876,
  [SMALL_STATE(74)] = 880,
  [SMALL_STATE(75)] = 884,
  [SMALL_STATE(76)] = 888,
  [SMALL_STATE(77)] = 892,
  [SMALL_STATE(78)] = 896,
  [SMALL_STATE(79)] = 900,
  [SMALL_STATE(80)] = 904,
  [SMALL_STATE(81)] = 908,
  [SMALL_STATE(82)] = 912,
  [SMALL_STATE(83)] = 916,
  [SMALL_STATE(84)] = 920,
  [SMALL_STATE(85)] = 924,
  [SMALL_STATE(86)] = 928,
  [SMALL_STATE(87)] = 932,
  [SMALL_STATE(88)] = 936,
  [SMALL_STATE(89)] = 940,
  [SMALL_STATE(90)] = 944,
  [SMALL_STATE(91)] = 948,
  [SMALL_STATE(92)] = 952,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_item, 3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(66),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 5),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 6),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(54),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_item_repeat1, 2), SHIFT_REPEAT(81),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(66),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(68),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 7),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat2, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat2, 2), SHIFT_REPEAT(82),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 6),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(84),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wordbreak, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_key, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_bool, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_section, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_todo_bracket, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completed_todo_bracket, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_progress_todo_bracket, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_kv_pair, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_neopolitan(void) {
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

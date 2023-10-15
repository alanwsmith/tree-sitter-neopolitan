#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  aux_sym_attr_bool_token1 = 1,
  sym_attr_dashes = 2,
  sym_attr_separator = 3,
  sym_attr_value = 4,
  sym_code_section_token = 5,
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
  sym_section_dashes = 16,
  sym_section_start_end_token = 17,
  sym_title_section_token = 18,
  sym_todo_left_bracket = 19,
  sym_todo_right_bracket = 20,
  sym_todo_checkmark = 21,
  sym_not_a_checkmark = 22,
  sym_todo_section_token = 23,
  sym_code_body = 24,
  sym_source_file = 25,
  sym__attr = 26,
  sym_attr_kv_pair = 27,
  sym_attr_bool = 28,
  sym_attr_key = 29,
  sym_code_end_section = 30,
  sym_code_start_section = 31,
  sym_headline = 32,
  sym_html_section = 33,
  sym_initial_word_chars = 34,
  sym_list_item = 35,
  sym_list_section = 36,
  sym_lt_with_non_lt_char = 37,
  sym_p_section = 38,
  sym_paragraph = 39,
  sym_paragraph_body = 40,
  sym_paragraph_first_word = 41,
  sym_title_section = 42,
  sym_empty_todo_bracket = 43,
  sym_completed_todo_bracket = 44,
  sym_in_progress_todo_bracket = 45,
  sym_todo_item = 46,
  sym_todo_section = 47,
  sym_word = 48,
  sym__wordbreak = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_code_end_section_repeat1 = 51,
  aux_sym_list_section_repeat1 = 52,
  aux_sym_list_section_repeat2 = 53,
  aux_sym_paragraph_repeat1 = 54,
  aux_sym_todo_item_repeat1 = 55,
  aux_sym_todo_section_repeat1 = 56,
  anon_alias_sym_headline = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_attr_bool_token1] = "attr_bool_token1",
  [sym_attr_dashes] = "attr_dashes",
  [sym_attr_separator] = "attr_separator",
  [sym_attr_value] = "attr_value",
  [sym_code_section_token] = "code_section_token",
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
  [sym_section_dashes] = "section_dashes",
  [sym_section_start_end_token] = "section_start_end_token",
  [sym_title_section_token] = "title_section_token",
  [sym_todo_left_bracket] = "todo_left_bracket",
  [sym_todo_right_bracket] = "todo_right_bracket",
  [sym_todo_checkmark] = "todo_checkmark",
  [sym_not_a_checkmark] = "not_a_checkmark",
  [sym_todo_section_token] = "todo_section_token",
  [sym_code_body] = "code_body",
  [sym_source_file] = "source_file",
  [sym__attr] = "_attr",
  [sym_attr_kv_pair] = "attr_kv_pair",
  [sym_attr_bool] = "attr_bool",
  [sym_attr_key] = "attr_key",
  [sym_code_end_section] = "code_end_section",
  [sym_code_start_section] = "code_start_section",
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
  [sym__wordbreak] = "_wordbreak",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_code_end_section_repeat1] = "code_end_section_repeat1",
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
  [sym_code_section_token] = sym_code_section_token,
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
  [sym_section_dashes] = sym_section_dashes,
  [sym_section_start_end_token] = sym_section_start_end_token,
  [sym_title_section_token] = sym_title_section_token,
  [sym_todo_left_bracket] = sym_todo_left_bracket,
  [sym_todo_right_bracket] = sym_todo_right_bracket,
  [sym_todo_checkmark] = sym_todo_checkmark,
  [sym_not_a_checkmark] = sym_not_a_checkmark,
  [sym_todo_section_token] = sym_todo_section_token,
  [sym_code_body] = sym_code_body,
  [sym_source_file] = sym_source_file,
  [sym__attr] = sym__attr,
  [sym_attr_kv_pair] = sym_attr_kv_pair,
  [sym_attr_bool] = sym_attr_bool,
  [sym_attr_key] = sym_attr_key,
  [sym_code_end_section] = sym_code_end_section,
  [sym_code_start_section] = sym_code_start_section,
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
  [sym__wordbreak] = sym__wordbreak,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_code_end_section_repeat1] = aux_sym_code_end_section_repeat1,
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
  [sym_code_section_token] = {
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
  [sym_section_dashes] = {
    .visible = true,
    .named = true,
  },
  [sym_section_start_end_token] = {
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
  [sym_code_body] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__attr] = {
    .visible = false,
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
  [sym_code_end_section] = {
    .visible = true,
    .named = true,
  },
  [sym_code_start_section] = {
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
  [sym__wordbreak] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_end_section_repeat1] = {
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
  [14] = 14,
  [15] = 15,
  [16] = 11,
  [17] = 17,
  [18] = 12,
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
  [30] = 13,
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
  [52] = 50,
  [53] = 53,
  [54] = 49,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 47,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(47);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(27);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(47);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(47);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_attr_bool_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_attr_dashes);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_attr_separator);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_attr_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_code_section_token);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_html_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_html_section_token);
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_list_dash);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_list_section_token);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_following_word_chars);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_nb_whitespace);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_nb_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_non_lt_char);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_non_lt_char);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_p_section_token);
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_section_dashes);
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_section_start_end_token);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_title_section_token);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_todo_left_bracket);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_todo_right_bracket);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_todo_checkmark);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_not_a_checkmark);
      if (lookahead != 0 &&
          lookahead != 'X' &&
          lookahead != ']' &&
          lookahead != 'x') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_todo_section_token);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 31},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 31},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 31},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 31},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 31},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 31},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 30},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 30},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 30},
  [82] = {.lex_state = 30},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 22},
  [88] = {.lex_state = 30},
  [89] = {.lex_state = 30},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_attr_separator] = ACTIONS(1),
    [sym_list_dash] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_nb_whitespace] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_non_lt_char] = ACTIONS(1),
    [sym_p_section_token] = ACTIONS(1),
    [sym_section_dashes] = ACTIONS(1),
    [sym_section_start_end_token] = ACTIONS(1),
    [sym_todo_left_bracket] = ACTIONS(1),
    [sym_todo_right_bracket] = ACTIONS(1),
    [sym_todo_checkmark] = ACTIONS(1),
    [sym_code_body] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(95),
    [sym_code_end_section] = STATE(4),
    [sym_code_start_section] = STATE(4),
    [sym_html_section] = STATE(4),
    [sym_list_section] = STATE(4),
    [sym_p_section] = STATE(4),
    [sym_title_section] = STATE(4),
    [sym_todo_section] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_section_dashes] = ACTIONS(3),
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
    STATE(15), 1,
      aux_sym_paragraph_repeat1,
    STATE(57), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
    STATE(83), 1,
      sym_paragraph_body,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      sym_section_dashes,
      sym_todo_left_bracket,
  [30] = 9,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      sym_non_lt_char,
    STATE(2), 1,
      aux_sym_todo_item_repeat1,
    STATE(15), 1,
      aux_sym_paragraph_repeat1,
    STATE(57), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
    STATE(83), 1,
      sym_paragraph_body,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_section_dashes,
      sym_todo_left_bracket,
  [60] = 3,
    ACTIONS(3), 1,
      sym_section_dashes,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(5), 8,
      sym_code_end_section,
      sym_code_start_section,
      sym_html_section,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [77] = 3,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_section_dashes,
    STATE(5), 8,
      sym_code_end_section,
      sym_code_start_section,
      sym_html_section,
      sym_list_section,
      sym_p_section,
      sym_title_section,
      sym_todo_section,
      aux_sym_source_file_repeat1,
  [94] = 4,
    ACTIONS(28), 1,
      sym_todo_left_bracket,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(7), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(78), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [111] = 4,
    ACTIONS(32), 1,
      sym_todo_left_bracket,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(7), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(78), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [128] = 8,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      sym_non_lt_char,
    STATE(3), 1,
      aux_sym_todo_item_repeat1,
    STATE(15), 1,
      aux_sym_paragraph_repeat1,
    STATE(57), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
    STATE(83), 1,
      sym_paragraph_body,
  [153] = 4,
    ACTIONS(28), 1,
      sym_todo_left_bracket,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(7), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(78), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [170] = 7,
    ACTIONS(39), 1,
      sym_code_section_token,
    ACTIONS(41), 1,
      sym_html_section_token,
    ACTIONS(43), 1,
      sym_list_section_token,
    ACTIONS(45), 1,
      sym_p_section_token,
    ACTIONS(47), 1,
      sym_section_start_end_token,
    ACTIONS(49), 1,
      sym_title_section_token,
    ACTIONS(51), 1,
      sym_todo_section_token,
  [192] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      sym_non_lt_char,
    ACTIONS(53), 1,
      sym_newline,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(57), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
  [214] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      sym_non_lt_char,
    ACTIONS(55), 1,
      sym_newline,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
    STATE(57), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
  [236] = 5,
    ACTIONS(59), 1,
      sym_list_dash,
    ACTIONS(61), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(13), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [254] = 7,
    ACTIONS(64), 1,
      anon_sym_LT,
    ACTIONS(67), 1,
      sym_newline,
    ACTIONS(69), 1,
      sym_non_lt_char,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(57), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
  [276] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      sym_non_lt_char,
    ACTIONS(72), 1,
      sym_newline,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(57), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
  [298] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      sym_non_lt_char,
    ACTIONS(74), 1,
      sym_newline,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(57), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
  [320] = 5,
    ACTIONS(78), 1,
      sym_list_dash,
    ACTIONS(80), 1,
      sym_non_lt_char,
    STATE(52), 1,
      sym_paragraph_first_word,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(13), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [338] = 7,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      sym_non_lt_char,
    ACTIONS(82), 1,
      sym_newline,
    STATE(16), 1,
      aux_sym_paragraph_repeat1,
    STATE(57), 1,
      sym_word,
    STATE(76), 1,
      sym_lt_with_non_lt_char,
    STATE(77), 1,
      sym_initial_word_chars,
  [360] = 5,
    ACTIONS(80), 1,
      sym_non_lt_char,
    ACTIONS(86), 1,
      sym_list_dash,
    STATE(52), 1,
      sym_paragraph_first_word,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(17), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [378] = 3,
    ACTIONS(28), 1,
      sym_todo_left_bracket,
    STATE(6), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(78), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [391] = 4,
    ACTIONS(80), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(25), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [406] = 3,
    ACTIONS(90), 1,
      sym_attr_dashes,
    ACTIONS(92), 1,
      sym_newline,
    STATE(31), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [419] = 4,
    ACTIONS(80), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(36), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [434] = 4,
    ACTIONS(80), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(30), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [449] = 4,
    ACTIONS(80), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(30), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [464] = 3,
    ACTIONS(90), 1,
      sym_attr_dashes,
    ACTIONS(100), 1,
      sym_newline,
    STATE(35), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [477] = 3,
    ACTIONS(90), 1,
      sym_attr_dashes,
    ACTIONS(102), 1,
      sym_newline,
    STATE(33), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [490] = 3,
    ACTIONS(90), 1,
      sym_attr_dashes,
    ACTIONS(104), 1,
      sym_newline,
    STATE(35), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [503] = 3,
    ACTIONS(90), 1,
      sym_attr_dashes,
    ACTIONS(106), 1,
      sym_newline,
    STATE(26), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [516] = 4,
    ACTIONS(61), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(30), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [531] = 3,
    ACTIONS(90), 1,
      sym_attr_dashes,
    ACTIONS(108), 1,
      sym_newline,
    STATE(35), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [544] = 3,
    ACTIONS(28), 1,
      sym_todo_left_bracket,
    STATE(9), 2,
      sym_todo_item,
      aux_sym_todo_section_repeat1,
    STATE(78), 3,
      sym_empty_todo_bracket,
      sym_completed_todo_bracket,
      sym_in_progress_todo_bracket,
  [557] = 3,
    ACTIONS(90), 1,
      sym_attr_dashes,
    ACTIONS(110), 1,
      sym_newline,
    STATE(35), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [570] = 3,
    ACTIONS(90), 1,
      sym_attr_dashes,
    ACTIONS(112), 1,
      sym_newline,
    STATE(28), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [583] = 3,
    ACTIONS(114), 1,
      sym_attr_dashes,
    ACTIONS(117), 1,
      sym_newline,
    STATE(35), 4,
      sym__attr,
      sym_attr_kv_pair,
      sym_attr_bool,
      aux_sym_list_section_repeat1,
  [596] = 4,
    ACTIONS(80), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(30), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [611] = 4,
    ACTIONS(80), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(30), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [626] = 4,
    ACTIONS(80), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(30), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [641] = 3,
    ACTIONS(125), 1,
      sym_list_dash,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(40), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [653] = 3,
    ACTIONS(129), 1,
      sym_list_dash,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(40), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [665] = 2,
    ACTIONS(132), 1,
      sym_non_lt_char,
    ACTIONS(5), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      sym_section_dashes,
      sym_todo_left_bracket,
  [675] = 3,
    ACTIONS(125), 1,
      sym_list_dash,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    STATE(40), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [687] = 4,
    ACTIONS(136), 1,
      sym_non_lt_char,
    STATE(23), 1,
      sym_headline,
    STATE(50), 1,
      sym_paragraph_first_word,
    STATE(58), 1,
      sym_paragraph,
  [700] = 3,
    ACTIONS(136), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    STATE(24), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [711] = 3,
    ACTIONS(136), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    STATE(38), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [722] = 3,
    ACTIONS(136), 1,
      sym_non_lt_char,
    STATE(50), 1,
      sym_paragraph_first_word,
    STATE(37), 2,
      sym_paragraph,
      aux_sym_code_end_section_repeat1,
  [733] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    ACTIONS(140), 2,
      sym_list_dash,
      sym_non_lt_char,
  [742] = 4,
    ACTIONS(136), 1,
      sym_non_lt_char,
    STATE(21), 1,
      sym_headline,
    STATE(50), 1,
      sym_paragraph_first_word,
    STATE(58), 1,
      sym_paragraph,
  [755] = 2,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
    ACTIONS(144), 2,
      sym_list_dash,
      sym_non_lt_char,
  [764] = 3,
    ACTIONS(146), 1,
      sym_nb_whitespace,
    ACTIONS(148), 1,
      sym_newline,
    STATE(18), 1,
      sym__wordbreak,
  [774] = 3,
    ACTIONS(150), 1,
      sym_todo_right_bracket,
    ACTIONS(152), 1,
      sym_todo_checkmark,
    ACTIONS(154), 1,
      sym_not_a_checkmark,
  [784] = 3,
    ACTIONS(156), 1,
      sym_nb_whitespace,
    ACTIONS(158), 1,
      sym_newline,
    STATE(12), 1,
      sym__wordbreak,
  [794] = 2,
    ACTIONS(160), 1,
      sym_list_dash,
    STATE(39), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [802] = 2,
    ACTIONS(144), 1,
      sym_non_lt_char,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [810] = 1,
    ACTIONS(67), 3,
      anon_sym_LT,
      sym_newline,
      sym_non_lt_char,
  [816] = 2,
    ACTIONS(160), 1,
      sym_list_dash,
    STATE(42), 2,
      sym_list_item,
      aux_sym_list_section_repeat2,
  [824] = 3,
    ACTIONS(162), 1,
      sym_nb_whitespace,
    ACTIONS(164), 1,
      sym_newline,
    STATE(55), 1,
      sym__wordbreak,
  [834] = 2,
    ACTIONS(168), 1,
      sym_non_lt_char,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [842] = 2,
    ACTIONS(140), 1,
      sym_non_lt_char,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [850] = 1,
    ACTIONS(170), 2,
      sym_attr_dashes,
      sym_newline,
  [855] = 1,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [860] = 1,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_section_dashes,
  [865] = 2,
    ACTIONS(176), 1,
      sym_attr_separator,
    ACTIONS(178), 1,
      sym_newline,
  [872] = 1,
    ACTIONS(180), 2,
      sym_attr_dashes,
      sym_newline,
  [877] = 2,
    ACTIONS(182), 1,
      sym_nb_whitespace,
    ACTIONS(184), 1,
      sym_newline,
  [884] = 2,
    ACTIONS(186), 1,
      sym_nb_whitespace,
    ACTIONS(188), 1,
      sym_newline,
  [891] = 2,
    ACTIONS(190), 1,
      aux_sym_attr_bool_token1,
    STATE(101), 1,
      sym_attr_key,
  [898] = 1,
    ACTIONS(192), 1,
      sym_non_lt_char,
  [902] = 1,
    ACTIONS(194), 1,
      sym_newline,
  [906] = 1,
    ACTIONS(196), 1,
      sym_todo_right_bracket,
  [910] = 1,
    ACTIONS(198), 1,
      sym_newline,
  [914] = 1,
    ACTIONS(200), 1,
      sym_newline,
  [918] = 1,
    ACTIONS(202), 1,
      sym_code_body,
  [922] = 1,
    ACTIONS(204), 1,
      sym_nb_whitespace,
  [926] = 1,
    ACTIONS(206), 1,
      sym_newline,
  [930] = 1,
    ACTIONS(208), 1,
      sym_following_word_chars,
  [934] = 1,
    ACTIONS(210), 1,
      sym_following_word_chars,
  [938] = 1,
    ACTIONS(212), 1,
      sym_nb_whitespace,
  [942] = 1,
    ACTIONS(214), 1,
      sym_newline,
  [946] = 1,
    ACTIONS(216), 1,
      sym_newline,
  [950] = 1,
    ACTIONS(218), 1,
      sym_nb_whitespace,
  [954] = 1,
    ACTIONS(220), 1,
      sym_nb_whitespace,
  [958] = 1,
    ACTIONS(222), 1,
      sym_newline,
  [962] = 1,
    ACTIONS(224), 1,
      sym_newline,
  [966] = 1,
    ACTIONS(226), 1,
      sym_todo_right_bracket,
  [970] = 1,
    ACTIONS(228), 1,
      sym_attr_value,
  [974] = 1,
    ACTIONS(230), 1,
      sym_following_word_chars,
  [978] = 1,
    ACTIONS(232), 1,
      sym_nb_whitespace,
  [982] = 1,
    ACTIONS(234), 1,
      sym_nb_whitespace,
  [986] = 1,
    ACTIONS(236), 1,
      sym_following_word_chars,
  [990] = 1,
    ACTIONS(238), 1,
      sym_code_section_token,
  [994] = 1,
    ACTIONS(240), 1,
      sym_newline,
  [998] = 1,
    ACTIONS(242), 1,
      sym_newline,
  [1002] = 1,
    ACTIONS(244), 1,
      sym_newline,
  [1006] = 1,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
  [1010] = 1,
    ACTIONS(248), 1,
      sym_newline,
  [1014] = 1,
    ACTIONS(250), 1,
      sym_nb_whitespace,
  [1018] = 1,
    ACTIONS(252), 1,
      sym_html_body,
  [1022] = 1,
    ACTIONS(254), 1,
      sym_newline,
  [1026] = 1,
    ACTIONS(256), 1,
      sym_section_start_end_token,
  [1030] = 1,
    ACTIONS(258), 1,
      sym_attr_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 254,
  [SMALL_STATE(15)] = 276,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 320,
  [SMALL_STATE(18)] = 338,
  [SMALL_STATE(19)] = 360,
  [SMALL_STATE(20)] = 378,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 406,
  [SMALL_STATE(23)] = 419,
  [SMALL_STATE(24)] = 434,
  [SMALL_STATE(25)] = 449,
  [SMALL_STATE(26)] = 464,
  [SMALL_STATE(27)] = 477,
  [SMALL_STATE(28)] = 490,
  [SMALL_STATE(29)] = 503,
  [SMALL_STATE(30)] = 516,
  [SMALL_STATE(31)] = 531,
  [SMALL_STATE(32)] = 544,
  [SMALL_STATE(33)] = 557,
  [SMALL_STATE(34)] = 570,
  [SMALL_STATE(35)] = 583,
  [SMALL_STATE(36)] = 596,
  [SMALL_STATE(37)] = 611,
  [SMALL_STATE(38)] = 626,
  [SMALL_STATE(39)] = 641,
  [SMALL_STATE(40)] = 653,
  [SMALL_STATE(41)] = 665,
  [SMALL_STATE(42)] = 675,
  [SMALL_STATE(43)] = 687,
  [SMALL_STATE(44)] = 700,
  [SMALL_STATE(45)] = 711,
  [SMALL_STATE(46)] = 722,
  [SMALL_STATE(47)] = 733,
  [SMALL_STATE(48)] = 742,
  [SMALL_STATE(49)] = 755,
  [SMALL_STATE(50)] = 764,
  [SMALL_STATE(51)] = 774,
  [SMALL_STATE(52)] = 784,
  [SMALL_STATE(53)] = 794,
  [SMALL_STATE(54)] = 802,
  [SMALL_STATE(55)] = 810,
  [SMALL_STATE(56)] = 816,
  [SMALL_STATE(57)] = 824,
  [SMALL_STATE(58)] = 834,
  [SMALL_STATE(59)] = 842,
  [SMALL_STATE(60)] = 850,
  [SMALL_STATE(61)] = 855,
  [SMALL_STATE(62)] = 860,
  [SMALL_STATE(63)] = 865,
  [SMALL_STATE(64)] = 872,
  [SMALL_STATE(65)] = 877,
  [SMALL_STATE(66)] = 884,
  [SMALL_STATE(67)] = 891,
  [SMALL_STATE(68)] = 898,
  [SMALL_STATE(69)] = 902,
  [SMALL_STATE(70)] = 906,
  [SMALL_STATE(71)] = 910,
  [SMALL_STATE(72)] = 914,
  [SMALL_STATE(73)] = 918,
  [SMALL_STATE(74)] = 922,
  [SMALL_STATE(75)] = 926,
  [SMALL_STATE(76)] = 930,
  [SMALL_STATE(77)] = 934,
  [SMALL_STATE(78)] = 938,
  [SMALL_STATE(79)] = 942,
  [SMALL_STATE(80)] = 946,
  [SMALL_STATE(81)] = 950,
  [SMALL_STATE(82)] = 954,
  [SMALL_STATE(83)] = 958,
  [SMALL_STATE(84)] = 962,
  [SMALL_STATE(85)] = 966,
  [SMALL_STATE(86)] = 970,
  [SMALL_STATE(87)] = 974,
  [SMALL_STATE(88)] = 978,
  [SMALL_STATE(89)] = 982,
  [SMALL_STATE(90)] = 986,
  [SMALL_STATE(91)] = 990,
  [SMALL_STATE(92)] = 994,
  [SMALL_STATE(93)] = 998,
  [SMALL_STATE(94)] = 1002,
  [SMALL_STATE(95)] = 1006,
  [SMALL_STATE(96)] = 1010,
  [SMALL_STATE(97)] = 1014,
  [SMALL_STATE(98)] = 1018,
  [SMALL_STATE(99)] = 1022,
  [SMALL_STATE(100)] = 1026,
  [SMALL_STATE(101)] = 1030,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(68),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2), SHIFT_REPEAT(76),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_item, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 6),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todo_section_repeat1, 2), SHIFT_REPEAT(51),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todo_section, 5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_end_section_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_end_section_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_end_section_repeat1, 2), SHIFT_REPEAT(90),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(68),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(76),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_body, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_section, 7),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2), SHIFT_REPEAT(97),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_end_section, 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p_section, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_section_repeat2, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_section_repeat2, 2), SHIFT_REPEAT(89),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_todo_item_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_section, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 1, .production_id = 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 1, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_bool, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_start_section, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_section, 6),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_key, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_kv_pair, 7),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_first_word, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_first_word, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initial_word_chars, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completed_todo_bracket, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_progress_todo_bracket, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt_with_non_lt_char, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_todo_bracket, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [246] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_code_body = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_body] = sym_code_body,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_body] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_neopolitan_external_scanner_create(void);
void tree_sitter_neopolitan_external_scanner_destroy(void *);
bool tree_sitter_neopolitan_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_neopolitan_external_scanner_serialize(void *, char *);
void tree_sitter_neopolitan_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_neopolitan_external_scanner_create,
      tree_sitter_neopolitan_external_scanner_destroy,
      tree_sitter_neopolitan_external_scanner_scan,
      tree_sitter_neopolitan_external_scanner_serialize,
      tree_sitter_neopolitan_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

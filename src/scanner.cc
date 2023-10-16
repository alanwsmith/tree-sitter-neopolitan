#include <stdio.h>
#include <string.h>
#include <tree_sitter/parser.h>

enum TokenType {
  CODE_START_TERMINATOR,
  HTML_START_TERMINATOR,
  SECTION_DASHES,
  SINGLE_SPACE,
  TITLE_TOKEN,
  TODO_TOKEN,
  ERROR_SENTINEL,
};

struct Scanner {
  Scanner() {}
};

struct MatchDetails {
  bool found_match;
  int end_position;
};

extern "C" {

void *tree_sitter_neopolitan_external_scanner_create() {
  // TODO: Figure out what to put here for an empty pointer
  return new Scanner();
};

void tree_sitter_neopolitan_external_scanner_destroy(void *payload) {
  Scanner *const scanner = static_cast<Scanner *>(payload);
  delete scanner;
};

unsigned tree_sitter_neopolitan_external_scanner_serialize(void *payload,
                                                           char *buffer) {
  // I just threw 1 in here. It's working, but
  // TBD on what this actually does
  return 1;
};

void tree_sitter_neopolitan_external_scanner_deserialize(void *payload,
                                                         const char *buffer,
                                                         unsigned length) {
  ;
};

static bool is_single_space(TSLexer *lexer) {
  int dash = ' ';
  if (lexer->lookahead == dash) {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    return true;
  }
  return false;
};

static bool is_section_dashes(TSLexer *lexer) {
  int dash = '-';
  if (lexer->lookahead == dash) {
    lexer->advance(lexer, false);
    if (lexer->lookahead == dash) {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true;
    }
    return false;
  };
};

static bool token_matcher(TSLexer *lexer) {
  // prevent the lexer from moving until
  // a match is found
  lexer->mark_end(lexer);
  // define the patters and enums
  char patterns[2][20] = {"title", "todo"};
  TokenType token_enums[2] = {TITLE_TOKEN, TODO_TOKEN};
  // Load a set of characters so you can
  // replay it (since the lexer can't back up)
  int lexer_chars[20];
  int lexer_load_index;
  for (lexer_load_index = 0; lexer_load_index < 20; lexer_load_index++) {
    lexer_chars[lexer_load_index] = lexer->lookahead;
    lexer->advance(lexer, false);
  }
  int pattern_index;
  for (pattern_index = 0; pattern_index < 2; pattern_index++) {
    bool found_token = true;
    size_t len = strlen(patterns[pattern_index]);
    int tracker;
    for (tracker = 0; tracker < len; tracker++) {
      if (lexer_chars[tracker] != patterns[pattern_index][tracker]) {
        found_token = false;
      }
    }
    if (found_token) {
      // move the playhead forward
      int move_count;
      for (move_count = tracker; move_count > 0; move_count--) {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
      }
      lexer->result_symbol = token_enums[pattern_index];
      return true;
    };
  };
  return false;
}

static bool is_exact_match(TSLexer *lexer, char *pattern) {
  lexer->mark_end(lexer);
  // switch from letters to unicode codepoints
  size_t len = strlen(pattern);
  int char_ints[len];
  int char_count;
  for (char_count = 0; char_count < len; char_count++) {
    char_ints[char_count] = pattern[char_count];
  };
  // do the search
  int tracker;
  for (tracker = 0; tracker < len; tracker++) {
    int lexer_char = lexer->lookahead;
    int test_char = char_ints[tracker];
    printf("(%d %d) ", lexer_char, test_char);
    if (lexer_char != test_char) {
      return false;
    }
    lexer->advance(lexer, false);
  }
  lexer->mark_end(lexer);
  return true;
}

static bool terminator(TSLexer *lexer, char *pattern) {
  // switch from letters to unicode codepoints
  lexer->mark_end(lexer);
  size_t len = strlen(pattern);
  int char_ints[len];
  int char_count;
  for (char_count = 0; char_count <= len; char_count++) {
    char_ints[char_count] = pattern[char_count];
  };
  // do the search
  int tracker = 0;
  while (lexer->eof(lexer) == false) {
    if (lexer->lookahead == char_ints[tracker]) {
      tracker += 1;
      lexer->advance(lexer, false);
      if (tracker == len) {
        return true;
      };
    } else {
      tracker = 0;
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
    };
  }
  return false;
};

bool find_token(TSLexer *lexer) {
  lexer->mark_end(lexer);
  lexer->advance(lexer, false);
  lexer->advance(lexer, false);
  lexer->advance(lexer, false);
  lexer->advance(lexer, false);
  lexer->mark_end(lexer);
  lexer->result_symbol = TODO_TOKEN;
  return true;
};

bool tree_sitter_neopolitan_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (!valid_symbols[ERROR_SENTINEL]) {
    if (valid_symbols[CODE_START_TERMINATOR]) {
      lexer->result_symbol = CODE_START_TERMINATOR;
      char code_end[9] = "-- /code";
      return terminator(lexer, code_end);
    } else if (valid_symbols[HTML_START_TERMINATOR]) {
      lexer->result_symbol = HTML_START_TERMINATOR;
      char html_end[9] = "-- /html";
      return terminator(lexer, html_end);
    } else if (valid_symbols[SECTION_DASHES]) {
      lexer->result_symbol = SECTION_DASHES;
      return is_section_dashes(lexer);
    } else if (valid_symbols[SINGLE_SPACE]) {
      lexer->result_symbol = SINGLE_SPACE;
      return is_single_space(lexer);
    };

    if (valid_symbols[TITLE_TOKEN] || valid_symbols[TODO_TOKEN]) {
      bool response = find_token(lexer);
      return response;
    }

    /* // Because the sections are on a repeat loop */
    /* // with a choice any of the tokens can be */
    /* // called and the first on checked moves */
    /* // the playhead forward so the other ones */
    /* // don't have a chance to match */
    /* if (valid_symbols[TITLE_TOKEN]) { */
    /*   lexer->result_symbol = TITLE_TOKEN; */
    /*   char pattern[6] = "title"; */
    /*   return is_exact_match(lexer, pattern); */
    /* }; */
    /* if (valid_symbols[TODO_TOKEN]) { */
    /*   lexer->result_symbol = TODO_TOKEN; */
    /*   char pattern[5] = "todo"; */
    /*   return is_exact_match(lexer, pattern); */
    /* }; */
  };

  /* // The lexer can only move forward but the lexer */
  /* // can't back up and there doesn't seem to be a */
  /* // way to search for just one thing so this grabs */
  /* // the entire file so it can be used repeatedly */
  /* // */
  /* // ACTUALLY: I don't think this will work. I don't */
  /* // think there's a way to mark the proper */
  /* // end point with this approach either */
  /* // */
  /* // make a huge array to hopefully */
  /* // store everythig */
  /* int char_cache[100000]; */
  /* int load_index = 0; */
  /* while (lexer->eof(lexer) == false) { */
  /*   char_cache[load_index] = lexer->lookahead; */
  /*   lexer->advance(lexer, false); */
  /*   load_index++; */
  /* } */
  /* // Create the struct to figure out the status */
  /* MatchDetails match_details = MatchDetails(); */

  // hack handle todo

  /* if (valid_symbols[CODE_START_TERMINATOR]) { */
  /*   lexer->result_symbol = CODE_START_TERMINATOR; */
  /*   char code_end[9] = "-- /code"; */
  /*   return terminator(lexer, code_end); */
  /* } else if (valid_symbols[HTML_START_TERMINATOR]) { */
  /*   lexer->result_symbol = HTML_START_TERMINATOR; */
  /*   char html_end[9] = "-- /html"; */
  /*   return terminator(lexer, html_end); */
  /* } else if (valid_symbols[SECTION_DASHES]) { */
  /*   lexer->result_symbol = SECTION_DASHES; */
  /*   return is_section_dashes(lexer); */
  /* } else if (valid_symbols[SINGLE_SPACE]) { */
  /*   lexer->result_symbol = SINGLE_SPACE; */
  /*   return is_single_space(lexer); */
  /* } else if (valid_symbols[TITLE_TOKEN]) { */
  /*   lexer->result_symbol = TITLE_TOKEN; */
  /*   char pattern[6] = "title"; */
  /*   return is_exact_match(lexer, pattern); */
  /* } else if (valid_symbols[TODO_TOKEN]) { */
  /*   lexer->result_symbol = TODO_TOKEN; */
  /*   char pattern[5] = "todo"; */
  /*   return is_exact_match(lexer, pattern); */
  /* }; */

  return false;
};
};

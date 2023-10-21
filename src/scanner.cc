#include <stdio.h>
#include <string.h>
#include <tree_sitter/parser.h>

enum TokenType {
  ANY_WHITESPACE_OR_NEWLINES,
  ATTRIBUTE_DASHES,
  CATEGORIES_TOKEN,
  CODE_CONTAINER_BODY,
  CODE_SECTION_BODY,
  CODE_TOKEN,
  CONTAINER_TOKEN,
  CSS_SECTION_BODY,
  CSS_TOKEN,
  EMPTY_SPACE,
  H1_TOKEN,
  H2_TOKEN,
  H3_TOKEN,
  H4_TOKEN,
  H5_TOKEN,
  H6_TOKEN,
  HTML_CONTAINER_BODY,
  HTML_SECTION_BODY,
  HTML_TOKEN,
  LINE_ENDING,
  LIST_TOKEN,
  METADATA_TOKEN,
  NOTES_TOKEN,
  P_TOKEN,
  REF_TOKEN,
  RESULTS_CONTAINER_BODY,
  RESULTS_TOKEN,
  SCRIPT_SECTION_BODY,
  SCRIPT_TOKEN,
  SECTION_DASHES,
  SINGLE_SPACE,
  TITLE_TOKEN,
  TLDR_TOKEN,
  TODO_TOKEN,
  WORD_RAW,
  ERROR_SENTINEL,
};

const int SPACE = 32;
const int NEWLINE = 10;

// I'm not using this, it's not hurting
// anything though so I'm leaving it for now
struct Scanner {
  Scanner() {}
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

static bool is_any_whitespace_or_newlines(TSLexer *lexer) {
  int char_count = 0;
  while (lexer->eof(lexer) == false) {
    int test_char = lexer->lookahead;
    if (test_char == SPACE || test_char == NEWLINE) {
      char_count += 1;
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
    } else {
      if (char_count > 0) {
        return true;
      } else {
        return false;
      }
    }
  }
  return false;
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

static bool is_section_or_attr_dashes(TSLexer *lexer) {
  int dash = '-';
  int space = ' ';
  if (lexer->lookahead == dash) {
    lexer->advance(lexer, false);
    if (lexer->lookahead == dash) {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      if (lexer->lookahead == space) {
        return true;
      } else {
        return false;
      }
    }
    return false;
  };
};

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
    // printf("(%d %d) ", lexer_char, test_char);
    if (lexer_char != test_char) {
      return false;
    }
    lexer->advance(lexer, false);
  }
  lexer->mark_end(lexer);
  return true;
}

static bool terminator(TSLexer *lexer, char *pattern) {
  lexer->mark_end(lexer);
  // switch from letters to unicode codepoints
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
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
    };
  }
  return false;
};

static bool find_token(TSLexer *lexer) {
  lexer->mark_end(lexer);

  // Adding a new one:
  //
  // 1. Increment `items`
  // 2. Adjust `patterns[][#]` to longest string lenght
  // 3. Add the new string to `patterns[]` alphabetically
  // 4. Add the new enum to `tokens[]` alphabetically
  // 5. Add a new `true` to `matches[]`
  // 6. Add enum value at top alphabetically
  // 7. Update grammer.js
  // 8. Update highlights.js

  const int items = 20;

  char patterns[items][11] = {
      "categories", "code",    "css",    "h1",    "h2",       "h3",    "h4",
      "h5",         "h6",      "html",   "list",  "metadata", "notes", "p",
      "ref",        "results", "script", "title", "tldr",     "todo"};
  TokenType tokens[items] = {
      CATEGORIES_TOKEN, CODE_TOKEN,     CSS_TOKEN,   H1_TOKEN,   H2_TOKEN,
      H3_TOKEN,         H4_TOKEN,       H5_TOKEN,    H6_TOKEN,   HTML_TOKEN,
      LIST_TOKEN,       METADATA_TOKEN, NOTES_TOKEN, P_TOKEN,    REF_TOKEN,
      RESULTS_TOKEN,    SCRIPT_TOKEN,   TITLE_TOKEN, TLDR_TOKEN, TODO_TOKEN};
  bool matches[items] = {true, true, true, true, true, true, true,
                         true, true, true, true, true, true, true,
                         true, true, true, true, true, true};

  int char_index;
  for (char_index = 0; char_index < items; char_index++) {
    int target_char = lexer->lookahead;
    // printf("Target Char: %d\n", target_char);

    // hit the end so return (47 is for the dash
    // which is the container token
    if (target_char == 10 || target_char == 32 || target_char == 47) {
      int match_walker;
      for (match_walker = 0; match_walker < items; match_walker++) {
        // printf("  Checking in with %d\n", match_walker);
        if (matches[match_walker]) {
          // printf("  Send it\n");
          lexer->mark_end(lexer);
          lexer->result_symbol = tokens[match_walker];
          return true;
        };
      };
      return false;
    };

    int pattern_index;
    // TODO: Set this to automatically pull the length of the array
    for (pattern_index = 0; pattern_index < items; pattern_index++) {
      if (matches[pattern_index]) {
        // printf("THING: %d - %d - %d - %d\n", pattern_index, char_index,
        //      target_char, patterns[pattern_index][char_index]);
        // if (patterns[pattern_index][char_index] != 0) {
        int check_char = patterns[pattern_index][char_index];
        //  printf("  Checking pattern %d for match: %d\n", pattern_index,
        //      check_char);
        if (check_char == target_char) {
          // printf("    Match\n");
          lexer->mark_end(lexer);
        } else {
          matches[pattern_index] = false;
        }
        // }
      }
    }
    lexer->advance(lexer, false);
  };
  return false;
};

// TODO: Combine this with html and pre and anything
// else that needs it.
//
// TODO: Handle if this hits the end of a file
//
static bool is_code_section_body(TSLexer *lexer) {
  while (lexer->eof(lexer) == false) {
    int active_char = lexer->lookahead;
    // printf("%d\n", active_char);
    if (active_char == 10) {
      char end_pattern[4] = "-- ";
      if (terminator(lexer, end_pattern)) {
        return true;
      };
    };
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  };
  return false;
};

static bool is_any_code_section_body(TSLexer *lexer) {
  while (lexer->eof(lexer) == false) {
    int active_char = lexer->lookahead;
    if (active_char == 10) {
      char end_pattern[4] = "-- ";
      if (terminator(lexer, end_pattern)) {
        return true;
      };
    };
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  };
  return false;
};

static bool is_code_container_body(TSLexer *lexer) {
  // printf("HEREREWERER\n");
  while (lexer->eof(lexer) == false) {
    int active_char = lexer->lookahead;
    // printf(" - %d\n", active_char);
    if (active_char == 10) {
      // no need to add "\n" here because you're
      // already on the newline
      char end_pattern[9] = "-- /code";
      if (terminator(lexer, end_pattern)) {
        return true;
      };
    };
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  };
  return false;
};

static bool is_html_section_body(TSLexer *lexer) {
  // printf("HEREREWERER\n");
  while (lexer->eof(lexer) == false) {
    int active_char = lexer->lookahead;
    // printf(" - %d\n", active_char);
    if (active_char == 10) {
      // no need to add "\n" here because you're
      // already on the newline
      char end_pattern[4] = "-- ";
      if (terminator(lexer, end_pattern)) {
        return true;
      };
    };
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  };
  return false;
};

static bool is_line_ending(TSLexer *lexer) {
  int space = 32;
  int newline = 10;
  while (lexer->eof(lexer) == false) {
    int check_char = lexer->lookahead;
    if (check_char == newline) {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true;
    } else if (check_char != space) {
      return false;
    }
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  }
  return false;
};

static bool is_empty_space(TSLexer *lexer) {
  bool found_space = false;
  while (lexer->eof(lexer) == false) {
    int active_char = lexer->lookahead;
    if (active_char != 10 && active_char != 32) {
      return found_space;
    } else {
      found_space = true;
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
    }
  };
  return true;
};

static bool is_results_container_body(TSLexer *lexer) {
  while (lexer->eof(lexer) == false) {
    int active_char = lexer->lookahead;
    if (active_char == 10) {
      char end_pattern[12] = "-- /results";
      if (terminator(lexer, end_pattern)) {
        return true;
      };
    };
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  };
  return false;
};

static bool is_word_raw(TSLexer *lexer) {
  int char_count = 0;
  while (lexer->eof(lexer) == false) {
    int test_char = lexer->lookahead;
    if (test_char != SPACE && test_char != NEWLINE) {
      char_count += 1;
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
    } else {
      if (char_count > 0) {
        return true;
      } else {
        return false;
      }
    }
  }
  return false;
};

bool tree_sitter_neopolitan_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {

  // NOTE: these really should be set to only
  // update result_symbol if there's a match.

  if (!valid_symbols[ERROR_SENTINEL]) {

    if (valid_symbols[ANY_WHITESPACE_OR_NEWLINES]) {
      if (is_any_whitespace_or_newlines(lexer)) {
        lexer->result_symbol = ANY_WHITESPACE_OR_NEWLINES;
        return true;
      } else {
        return false;
      }
    };

    if (valid_symbols[ATTRIBUTE_DASHES]) {
      lexer->result_symbol = ATTRIBUTE_DASHES;
      return is_section_or_attr_dashes(lexer);
    };

    if (valid_symbols[CODE_CONTAINER_BODY]) {
      if (is_code_container_body(lexer)) {
        lexer->result_symbol = CODE_CONTAINER_BODY;
        return true;
      } else {
        return false;
      };
    };

    if (valid_symbols[CODE_SECTION_BODY]) {
      if (is_code_section_body(lexer)) {
        lexer->result_symbol = CODE_SECTION_BODY;
        return true;
      } else {
        return false;
      };
    };

    if (valid_symbols[CONTAINER_TOKEN]) {
      char pattern[] = "/";
      if (is_exact_match(lexer, pattern)) {
        lexer->result_symbol = CONTAINER_TOKEN;
        return true;
      } else {
        return false;
      };
    };

    if (valid_symbols[CSS_SECTION_BODY]) {
      if (is_any_code_section_body(lexer)) {
        lexer->result_symbol = CSS_SECTION_BODY;
        return true;
      } else {
        return false;
      };
    };

    if (valid_symbols[EMPTY_SPACE]) {
      if (is_empty_space(lexer)) {
        lexer->result_symbol = EMPTY_SPACE;
        return true;
      } else {
        return false;
      };
    };

    if (valid_symbols[HTML_CONTAINER_BODY]) {
      lexer->result_symbol = HTML_CONTAINER_BODY;
      char html_end[9] = "-- /html";
      return terminator(lexer, html_end);
    };

    if (valid_symbols[HTML_SECTION_BODY]) {
      lexer->result_symbol = HTML_SECTION_BODY;
      return is_html_section_body(lexer);
      // TODO: deprecate HTML_BODY_TERMINATOR once
      // HTML_CONTAINER_BODY is in place
    };

    if (valid_symbols[LINE_ENDING]) {
      lexer->result_symbol = LINE_ENDING;
      if (is_line_ending(lexer)) {
        return true;
      } else {
        return false;
      };
    };

    if (valid_symbols[RESULTS_CONTAINER_BODY]) {
      if (is_results_container_body(lexer)) {
        lexer->result_symbol = RESULTS_CONTAINER_BODY;
        return true;
      } else {
        return false;
      };
    };

    if (valid_symbols[SCRIPT_SECTION_BODY]) {
      if (is_any_code_section_body(lexer)) {
        lexer->result_symbol = SCRIPT_SECTION_BODY;
        return true;
      } else {
        return false;
      };
    };

    if (valid_symbols[SECTION_DASHES]) {
      lexer->result_symbol = SECTION_DASHES;
      return is_section_or_attr_dashes(lexer);
    };

    if (valid_symbols[SINGLE_SPACE]) {
      lexer->result_symbol = SINGLE_SPACE;
      return is_single_space(lexer);
    };

    if (valid_symbols[WORD_RAW]) {
      if (is_word_raw(lexer)) {
        lexer->result_symbol = WORD_RAW;
        return true;
      } else {
        return false;
      }
    };

    if (valid_symbols[CATEGORIES_TOKEN] || valid_symbols[CODE_TOKEN] ||
        valid_symbols[CSS_TOKEN] || valid_symbols[HTML_TOKEN] ||
        valid_symbols[H1_TOKEN] || valid_symbols[H2_TOKEN] ||
        valid_symbols[H3_TOKEN] || valid_symbols[H4_TOKEN] ||
        valid_symbols[H5_TOKEN] || valid_symbols[H6_TOKEN] ||
        valid_symbols[LIST_TOKEN] || valid_symbols[METADATA_TOKEN] ||
        valid_symbols[NOTES_TOKEN] || valid_symbols[P_TOKEN] ||
        valid_symbols[REF_TOKEN] || valid_symbols[RESULTS_TOKEN] ||
        valid_symbols[SCRIPT_TOKEN] || valid_symbols[TITLE_TOKEN] ||
        valid_symbols[TLDR_TOKEN] || valid_symbols[TODO_TOKEN]) {
      bool response = find_token(lexer);
      return response;
    }
  };

  return false;
};
};

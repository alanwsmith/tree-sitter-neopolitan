#include <stdio.h>
#include <string.h>
#include <tree_sitter/parser.h>

enum TokenType {
  CODE_START_TERMINATOR,
};

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
                                                         unsigned length){};

static bool terminator(TSLexer *lexer, char *pattern) {
  printf("HERE-");
  lexer->mark_end(lexer);
  int char_ints[9];

  size_t len = strlen(pattern);

  printf("THERE-");
  // printf("%lu", len);

  int char_count;

  for (char_count = 0; char_count <= len; char_count++) {
    char_ints[char_count] = pattern[char_count];
    // printf("%d", pattern[char_count]);
  };

  printf("%d", char_ints[3]);

  while (lexer->eof(lexer) == false) {
    // this is for code_start_end blocks
    if (lexer->lookahead == 45) {
      lexer->advance(lexer, false);
      if (lexer->lookahead == 45) {
        lexer->advance(lexer, false);
        if (lexer->lookahead == 32) {
          lexer->advance(lexer, false);
          if (lexer->lookahead == 47) {
            lexer->advance(lexer, false);
            if (lexer->lookahead == 99) {
              lexer->advance(lexer, false);
              if (lexer->lookahead == 111) {
                lexer->advance(lexer, false);
                if (lexer->lookahead == 100) {
                  lexer->advance(lexer, false);
                  if (lexer->lookahead == 101) {
                    lexer->advance(lexer, false);
                    return true;
                  } else {
                    lexer->mark_end(lexer);
                  }
                } else {
                  lexer->mark_end(lexer);
                }
              } else {
                lexer->mark_end(lexer);
              }
            } else {
              lexer->mark_end(lexer);
            }
          } else {
            lexer->mark_end(lexer);
          }
        } else {
          lexer->mark_end(lexer);
        }
      } else {
        lexer->mark_end(lexer);
      }
    } else {
      lexer->mark_end(lexer);
    };
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  };
  return false;
}

bool tree_sitter_neopolitan_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {

  char code_end[9] = "-- /code";
  return terminator(lexer, code_end);
};
}

#!/usr/bin/env python3

import sys
import unittest
from io import StringIO


class Lexer():
    def __init__(self):
        self.str = ""
        self.cursor = -1
        self.end_position = -1

    def advance(self):
        self.cursor += 1

    def eof(self):
        # Not sure this is right but it
        # fits with the -1 starting cursor
        if self.cursor == (len(self.str) - 1):
            return True
        else:
            return False

    def lookahead(self):
        return ord(self.str[self.cursor + 1])

    def mark_end(self):
        self.end_position = self.cursor


def terminator(lexer, pattern):
    lexer.mark_end()
    chars = [ord(char) for char in pattern]
    tracker = 0
    while not lexer.eof():
        if lexer.lookahead() == chars[tracker]:
            tracker += 1
            lexer.advance()
            if tracker == len(chars):
                return True
        else:
            tracker = 0
            lexer.advance()
            lexer.mark_end()
    return False


class ClassTest(unittest.TestCase):

    ##########################
    # Functionality Tests

    def test_basic(self):
        pattern = "l"
        l.str = "alfa"
        response = terminator(l, pattern)
        self.assertEqual(response, True)
        self.assertEqual(l.end_position, 0)
        self.assertEqual(l.cursor, 1)

    def test_target(self):
        pattern = "bravo"
        l.str = "alfa -- bravo charlie"
        response = terminator(l, pattern)
        self.assertEqual(response, True)
        self.assertEqual(l.end_position, 7)
        self.assertEqual(l.cursor, 12)

    def test_dashes_and_end(self):
        pattern = " -- bravo"
        l.str = "alfa -- bravo"
        response = terminator(l, pattern)
        self.assertEqual(response, True)
        self.assertEqual(l.end_position, 3)
        self.assertEqual(l.cursor, 12)

    def test_no_match(self):
        pattern = "no match"
        l.str = "alfa -- bravo"
        response = terminator(l, pattern)
        self.assertEqual(response, False)
        self.assertEqual(l.end_position, 12)
        self.assertEqual(l.cursor, 12)

    ##########################
    # Lexer Setup Tests

    def setUp(self):
        global l
        l = Lexer()

    def test_advance(self):
        l.str = "alfa"
        l.advance()
        self.assertEqual(l.cursor, 0)

    def test_eof(self):
        l.str = "alfa"
        l.advance()
        l.advance()
        l.advance()
        l.advance()
        self.assertEqual(l.eof(), True)

    def test_inital_position(self):
        l.str = "alfa"
        self.assertEqual(l.cursor, -1)

    def test_lookahead(self):
        l.str = "alfa"
        self.assertEqual(l.lookahead(), 97)

    def test_mark_end(self):
        l.str = "alfa"
        l.advance()
        l.mark_end()
        self.assertEqual(l.end_position, 0)


if __name__ == '__main__':

    def run_tests():
        capture_stream = StringIO()
        suite = unittest.TestLoader().loadTestsFromModule(
            sys.modules[__name__])
        results = unittest.TextTestRunner(
            stream=capture_stream, failfast=True).run(suite)
        if len(results.failures) or len(results.errors):
            print("\033[31m")
            print("ERROR: Failed Test Run - Execution halted.")
            print(capture_stream.getvalue())
            print("\033[m")
            sys.exit()
        else:
            print("\033[32m")
            print(capture_stream.getvalue())
            print("\033[m")

    run_tests()

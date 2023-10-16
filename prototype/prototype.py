#!/usr/bin/env python3

import sys
import unittest
from io import StringIO


class Lexer():
    def __init__(self, str):
        self.str = str
        self._cursor = 0

    def cursor(self):
        return self._cursor


class ClassTest(unittest.TestCase):
    def setUp(self):
        global lexer
        lexer = Lexer("alfa -- bravo charlie")

    def test_inital_position(self):
        self.assertEqual(lexer.cursor(), 0)


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

    # def run_main():
    #     print("Yeah, it worked!")

    run_tests()
    # run_main()

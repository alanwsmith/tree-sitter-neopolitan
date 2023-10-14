module.exports = grammar({
  name: 'Neopolitan',
  rules: {
    source_file: $ => repeat1(
      choice(
        $.title_section
      )
    ),

    empty_line: _ => / *\n/,

    headline: $ => alias($.paragraph, 'headline'),

    initial_word_chars: $ => choice($.non_lt_char, $.lt_with_non_lt_char),

    lt_with_non_lt_char: $ => seq("<", $.non_lt_char),

    following_word_chars: _ => /[^ \n\t]+/,

    non_lt_char: _ => token(/[^< \n\t]/),

    paragraph: $ => seq(
      $.paragraph_first_word,
      $.wordbreak,
      repeat(
        seq(
          $.word,
          optional($.wordbreak)
        ),
      )
    ),

    // TODO: Switch to specific first
    // paragraph character
    paragraph_first_word: $ => seq(
      $.non_lt_char,
      $.following_word_chars,
    ),

    single_newline: _ => /\n/,

    title_section: $ => seq(
      $.title_token,
      $.empty_line,
      $.headline,
    ),

    title_token: _ => "-- title\n",

    whitespace: _ => /[ \t]+/,

    word: $ => seq(
      $.initial_word_chars,
      $.following_word_chars
    ),

    wordbreak: $ => choice(
      $.whitespace,
      $.single_newline,
    ),

  },

  extras: _ => []

});


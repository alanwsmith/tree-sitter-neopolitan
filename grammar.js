module.exports = grammar({
  name: 'Neopolitan',
  rules: {
    source_file: $ => repeat1(
      choice(
        $.title_section,
        $.p_section,
      )
    ),

    empty_line: _ => / *\n/,

    headline: $ => alias($.paragraph, 'headline'),

    initial_word_chars: $ => choice($.non_lt_char, $.lt_with_non_lt_char),

    lt_with_non_lt_char: $ => seq("<", $.non_lt_char),

    following_word_chars: _ => /[^ \n\t]+/,

    non_lt_char: _ => /[^< \n\t]/,

    p_section: $ => seq(
      $.p_section_header,
      $.single_newline,
      $.empty_line,
       repeat($.paragraph),
    ),

    p_section_header: $ => /-- p/,

    paragraph: $ => prec.left(
      seq(
        $.paragraph_first_word,
        optional($.wordbreak),
        repeat(
          seq(
            $.word,
            prec.left(2, optional($.wordbreak)),
          ),
        ),
        prec.right(1, $.single_newline),
      ),
    ),

    // TODO: Switch to specific first
    // paragraph character
    paragraph_first_word: $ => seq(
      $.non_lt_char,
      $.following_word_chars,
    ),

    single_newline: _ => prec.right(/\n/),

    title_section: $ => prec.left(
      5,
      seq(
        $.title_token,
        $.empty_line,
        $.headline,
        optional(
          seq(
            $.empty_line,
            optional($.paragraph),
          )
        )
      )
    ),

    title_token: _ => "-- title\n",

    whitespace: _ => /[ \t]+/,

    word: $ => seq(
      $.initial_word_chars,
      $.following_word_chars
    ),

    wordbreak: $ => prec.left(2, choice(
      $.whitespace,
      $.single_newline,
    )),
  },

  extras: _ => []

});


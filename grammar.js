module.exports = grammar({
  name: 'Neopolitan',
  rules: {
    source_file: $ => repeat1(
      choice(
        $.p_section,
        $.title_section,
      )
    ),

    dashes: _ => /-- +/,

    // TODO: Remove this
    // empty_line: _ => / *\n/,

    headline: $ => alias($.paragraph, 'headline'),

    initial_word_chars: $ => choice($.non_lt_char, $.lt_with_non_lt_char),

    lt_with_non_lt_char: $ => seq("<", $.non_lt_char),

    following_word_chars: _ => /[^ \n\t]+/,

    non_lt_char: _ => /[^< \n\t]/,

    p_section: $ => seq(
      $.dashes,
      $.p_section_token,
      $.newline,
      $.newline,
      $.paragraph,
    ),

    p_section_token: _ => /p */,

    paragraph: $ => 
      seq(
        $.paragraph_first_word,
        $.wordbreak,
        repeat(
          seq(
           $.word,
           $.wordbreak,
          ),
        ),
        $.newline,
    ),

    // TODO: Switch to specific first
    // paragraph character
    paragraph_first_word: $ => seq(
      $.non_lt_char,
      $.following_word_chars,
    ),

    // TODO: Remove this
    // single_newline: _ => prec.right(/\n/),

    newline: _ => / *\n/,

    title_section: $ => prec.left(
      5,
      seq(
        $.dashes,
        $.title_section_token,
        $.newline,
        $.newline,
        $.headline,
        optional($.paragraph),
      )
    ),

    title_section_token: _ => "title",

    whitespace: _ => /[ \t]+/,

    word: $ => seq(
      $.initial_word_chars,
      $.following_word_chars
    ),

    wordbreak: $ => choice(
      $.whitespace,
      $.newline,
    ),
  },

  extras: _ => []

});


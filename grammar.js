module.exports = grammar({
  name: 'Neopolitan',
  rules: {
    source_file: $ => repeat1(
      choice(
        $.list_section,
        $.p_section,
        $.title_section,
      )
    ),

    dashes: _ => /-- +/,

    // TODO: Remove this
    // empty_line: _ => / *\n/,

    headline: $ => alias($.paragraph, 'headline'),

    initial_word_chars: $ => choice($.non_lt_char, $.lt_with_non_lt_char),

    list_dash: $ => "-",

    list_item: $ => seq(
      $.list_dash, 
      $.whitespace,
      $.paragraph_body,
      $.newline
    ),

    list_section: $ => seq(
      $.dashes,
      $.list_section_token,
      $.newline,
      $.newline,
      $.list_item,
    ),

    list_section_token: $ => /list */,

    lt_with_non_lt_char: $ => seq("<", $.non_lt_char),

    following_word_chars: _ => /[^ \n\t]+/,

    non_lt_char: _ => /[^< \n\t]/,

    p_section: $ => seq(
      $.dashes,
      $.p_section_token,
      $.newline,
      $.newline,
      repeat1($.paragraph),
    ),

    p_section_token: _ => /p */,

    // TODO: split out to paragraph body 
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

    // this is everything after
    // the first word
    paragraph_body: $ => repeat1(
      seq($.word, $.wordbreak)
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


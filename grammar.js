module.exports = grammar({
  name: 'Neopolitan',
  rules: {
    source_file: $ => repeat1(
      choice(
        $.list_section,
        $.p_section,
        $.title_section,
        $.todo_section,
      )
    ),

    dashes: _ => /-- +/,

    headline: $ => alias($.paragraph, 'headline'),

    initial_word_chars: $ => choice($.non_lt_char, $.lt_with_non_lt_char),

    list_dash: _ => "-",

    list_item: $ => seq(
      $.list_dash,
      $.whitespace,
      repeat($.paragraph),
    ),

    list_section: $ => seq(
      $.dashes,
      $.list_section_token,
      $.newline,
      $.newline,
      repeat1($.list_item),
    ),

    list_section_token: _ => /list */,

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
    paragraph_body: $ => prec.left(repeat1(
      seq($.word, $.wordbreak)
    )),


    // TODO: Switch to specific first
    // paragraph character
    paragraph_first_word: $ => seq(
      $.non_lt_char,
      $.following_word_chars,
    ),

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

    empty_todo_bracket: _ => /\[ *\]/,

    completed_todo_bracket: _ => /\[[xX]\]/,

    todo_item: $ => seq(
      choice(
        $.empty_todo_bracket,
        $.completed_todo_bracket,
      ),
      $.whitespace,
      repeat1(
        seq($.paragraph_body, $.newline))
    ),

    todo_section: $ => seq(
      $.dashes,
      $.todo_section_token,
      $.newline,
      $.newline,
      repeat1($.todo_item),
    ),

    todo_section_token: _ => "todo",

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


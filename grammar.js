module.exports = grammar({
  name: 'Neopolitan',

  rules: {
    source_file: $ => repeat($._section),
    // source_file: $ => 'title',
    // source_file: $ => '-- title',
    _section: $ => $.section_header,
    section_header: $ => '-- title',

  }
});

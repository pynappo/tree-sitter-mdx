module.exports = grammar({
  name: "mdx",
  rules: {
    document: ($) => repeat($.section),
    section: ($) => choice($.standalone_jsx, $.markdown, choice()),
    standalone_jsx: ($) => prec(2, choice($.import_statement)),
    import_statement: ($) =>
      seq(
        $.import_start,
        optional(repeat(choice($.identifier, "{", "}"))),
        $.string,
        optional($.semicolon),
      ),
    import_start: ($) => /import/,
    export_start: ($) => /export/,
    statement_body: ($) => /[^;]+/,
    semicolon: ($) => /;/,
    markdown: ($) => /[a-z\s]+/,
    word: ($) => $.identifier,
    identifier: ($) => /[a-z_]+[a-z_0-9]*/,
    string: ($) =>
      choice(
        $.double_quoted_string,
        $.single_quoted_string,
        $.backtick_quoted_string,
      ),
    double_quoted_string: ($) => /".*"/,
    single_quoted_string: ($) => /'.*'/,
    backtick_quoted_string: ($) => /`.*`/,

    // taken from markdown
    _newline_token: ($) => /\n|\r\n?/,
  },
});

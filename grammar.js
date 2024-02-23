module.exports = grammar({
  name: "mdx",
  precedence: ($) => [[$.markdown_section, $.jsx_section]],
  rules: {
    document: ($) =>
      seq(
        optional($.jsx_section),
        optional($.markdown_section),
        repeat(
          seq(
            $.newline_token,
            choice(seq($.newline_token, $.newline_token, $.jsx_section)),
            $.markdown_section,
          ),
        ),
      ),
    jsx_section: ($) => seq(choice($.import_statement), $.newline_token),
    markdown_section: ($) => repeat1(seq(choice(/[^\r\n]+/))),
    import_statement: ($) =>
      seq(
        $.import_start,
        repeat(
          choice($.identifier, "{", "}", seq(",", optional($.newline_token))),
        ),
        $.string,
        optional($.semicolon),
      ),
    import_start: ($) => token.immediate(/import/),
    export_start: ($) => /export/,
    statement_body: ($) => /[^;]+/,
    semicolon: ($) => /;/,
    word: ($) => $.identifier,
    identifier: ($) => /[a-zA-z_]+[A-Za-z_0-9]*/,
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
    newline_token: ($) => /\n|\r\n?/,
    _horizontal_whitespace: ($) => /[^\S\r\n]+/,
  },
});

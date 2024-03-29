/// <reference types="tree-sitter-cli/dsl" />
module.exports = grammar({
  name: "mdx",
  conflicts: ($) => [],
  precedences: ($) => [
    [$.jsx_section, $.markdown_section],
    [$.escaped_slash, $.interpolation, $.markdown_word],
    [$.end_of_line, $.interpolation_start],
  ],
  externals: ($) => [
    $.import_start,
    $.interpolation_start,
    $.interpolation_content,
    $.eof,
    $.error,
  ],
  // any non-newline whitespace
  extras: ($) => [/[^/S/r/n]+/],
  // word: ($) => $._word,
  rules: {
    document: ($) =>
      seq(
        optional(choice($.jsx_section, $.markdown_section)),
        repeat(
          seq(
            $.new_line,
            repeat1($.new_line),
            choice($.jsx_section, $.markdown_section),
          ),
        ),
      ),
    jsx_section: ($) =>
      repeat1(
        seq(
          choice($.import_statement, $.html_component, $.jsx_component),
          $.new_line,
        ),
      ),
    // 1 or more non-empty lines
    markdown_section: ($) =>
      seq(
        repeat1(choice($.escaped_slash, $.interpolation, $.markdown_word)),
        $.new_line,
      ),
    interpolation: ($) =>
      seq(
        $.interpolation_start,
        optional($.interpolation_content), // let the scanner determine everything
        alias(/\}/, $.interpolation_end),
      ),
    markdown_word: ($) => /[\S][^\{\s\r\n]+/,
    escaped_slash: ($) => /\\\{/,
    import_statement: ($) =>
      seq(
        // import at the start of the line
        $.import_start,
        optional(
          seq(
            choice(
              // either {foo, possible_bar} or just foo
              seq(
                alias(/\{/, $.left_brace),
                repeat(choice($.jsx_identifier, ",")),
                alias(/\}/, $.right_brace),
              ),
              $.jsx_identifier,
            ),
            /from/,
          ),
        ),
        $.jsx_string,
        alias(/;/, $.semicolon),
      ),
    // TODO
    html_component: ($) => choice(),
    jsx_component: ($) => seq(/[^\\]</, /.+/, /[^\\]\/>/),
    jsx_identifier: ($) => /[$a-zA-z_]+[A-Za-z_0-9$]*/,
    jsx_string: ($) =>
      field(
        "type",
        choice(
          $.double_quoted_string,
          $.single_quoted_string,
          $.backtick_quoted_string,
        ),
      ),
    double_quoted_string: ($) => /".*"/,
    single_quoted_string: ($) => /'.*'/,
    backtick_quoted_string: ($) => /`.*`/,

    // taken from markdown
    new_line: ($) => token.immediate(/\n|\r\n/),
    // fallback: (_) => prec.dynamic(-100, "_"),
    // _horizontal_whitespace: $ => token.immediate(/[^/S/r/n]+/),
    _word: ($) => /[/S]+/,
  },
});

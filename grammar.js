/// <reference types="tree-sitter-cli/dsl" />
module.exports = grammar({
  name: "mdx",
  conflicts: ($) => [],
  precedences: ($) => [
    [$.jsx_section, $.markdown_section],
    [$.escaped_char, $.interpolation, $.markdown_word],
    [$.new_line, $.interpolation_start],
  ],
  externals: ($) => [
    $.import_start,
    $.interpolation_start,
    $.interpolation_content,
    $.eof,
    $.jsx_string,
    $.error,
  ],
  // any non-newline whitespace
  extras: ($) => [/[^/S/r/n]+/],
  rules: {
    document: ($) =>
      repeat(seq(choice($.jsx_section, $.markdown_section), $.new_line)),
    jsx_section: ($) =>
      repeat1(
        seq(
          choice($.import_statement, $.html_component, $.jsx_component),
          $.new_line,
        ),
      ),
    // 1 or more non-empty lines
    markdown_section: ($) =>
      repeat1(
        seq(
          repeat1(choice($.escaped_char, $.interpolation, $.markdown_word)),
          $.new_line,
        ),
      ),
    interpolation: ($) =>
      seq(
        $.interpolation_start,
        optional($.interpolation_content), // let the scanner determine everything
        alias(/\}/, $.interpolation_end),
      ),
    markdown_word: ($) => /[^\\\{\s\r\n]+/,
    escaped_char: ($) => seq($.escape, token.immediate(/[^\s]/)),
    escape: ($) => token.immediate(/\\/),
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
        optional(alias(/;/, $.semicolon)),
      ),
    // TODO
    html_component: ($) => choice(),
    jsx_component: ($) => seq(/[^\\]</, /.+/, /[^\\]\/>/),
    jsx_identifier: ($) => /[$a-zA-z_][A-Za-z_0-9$]*/,

    // taken from markdown
    new_line: ($) => choice(token.immediate(/\n|\r\n/), $.eof),
    // fallback: (_) => prec.dynamic(-100, "_"),
    _whitespace: ($) => token.immediate(/[^/S/r/n]+/),
  },
});

const PREC = {
  COMMENT: 0,
  EXPRESSION: 1,
  CALL: 2,
};

module.exports = grammar({
  name: "gosu",

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /\s/,
  ],

  rules: {
    source_file: $ => seq(
      repeat1(seq($.header, '\n')),
      repeat(choice($.statement, $.line_comment, $.block_comment, /\s/))
    ),

    header: $ => seq(
      $.package_declaration,
      $.import_statement 
    ),

    package_declaration: $ => seq(
      'package',
      $.qualified_identifier,
      ';'
    ),

    import_statement: $ => seq(
      'import',
      choice($.qualified_identifier, $.wildcard_import),
      ';'
    ),

    wildcard_import: $ => seq($.qualified_identifier, '.' , '*'),

    qualified_identifier: $ => prec.right(seq($.identifier, repeat(seq('.', $.identifier)))),

    statement: $ => choice(
      $.function_declaration,
      $.class_declaration,
      $.expression_statement,
      $.variable_declaration
    ),

    function_declaration: $ => seq(
      'function',
      $.identifier,
      $.parameter_list,
      $.block
    ),

    class_declaration: $ => seq(
      'class',
      $.identifier,
      $.block
    ),

    parameter_list: $ => seq('(', optional(commaSep($.identifier)), ')'),

    block: $ => seq('{', repeat($.statement), '}'),

    expression_statement: $ => seq($.expression, ';'),

    expression: $ => choice(
      $.function_call,
      $.binary_expression,
      $.identifier,
      $.string
    ),

    binary_expression: $ => prec.left(PREC.EXPRESSION, seq( 
      $.expression,
      choice('+', '-', '*', '/', '%'),
      $.expression
    )),

    variable_declaration: $ => seq(
      'var ',
      $.identifier,
      '=',
      $.expression,
      ';'
    ),    

    function_call: $ => seq($.identifier, $.argument_list),

    argument_list: $ => seq('(', optional(commaSep($.expression)), ')'),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: $ => /"([^"\\]|\\.)*"/,

    line_comment: _ => token(prec(PREC.COMMENT, seq('//', /[^\n]*/))),

    block_comment: _ => token(prec(PREC.COMMENT,
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      ),
    )),
  },
});

/**
 * Creates a rule to match one or more of the rules separated by `separator`
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

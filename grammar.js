const DIGITS = token(choice('0', seq(/[1-9]/, optional(seq(optional('_'), sep1(/[0-9]+/, /_+/))))));
const DECIMAL_DIGITS = token(sep1(/[0-9]+/, '_'));
const HEX_DIGITS = token(sep1(/[A-Fa-f0-9]+/, '_'));

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
      repeat($.header),
      repeat($.statement)
    ),

    header: $ => seq(
      $.package_declaration,
      repeat($.uses_statement)
    ),

    package_declaration: $ => seq(
      'package',
      $.qualified_identifier,
      ';'
    ),

    uses_statement: $ => seq(
      'uses',
      $.qualified_identifier,
      ';'
    ),

    // Literals

    _literal: $ => choice(
      $.decimal_integer_literal,
      $.hex_integer_literal,
      $.octal_integer_literal,
      $.binary_integer_literal,
      $.decimal_floating_point_literal,
      $.hex_floating_point_literal,
      $.true,
      $.false,
      $.character_literal,
      $.string_literal,
      $.null_literal,
    ),

    decimal_integer_literal: _ => token(seq(
      DIGITS,
      optional(choice('l', 'L')),
    )),

    hex_integer_literal: _ => token(seq(
      choice('0x', '0X'),
      HEX_DIGITS,
      optional(choice('l', 'L')),
    )),

    octal_integer_literal: _ => token(seq(
      choice('0o', '0O', '0'),
      sep1(/[0-7]+/, '_'),
      optional(choice('l', 'L')),
    )),

    binary_integer_literal: _ => token(seq(
      choice('0b', '0B'),
      sep1(/[01]+/, '_'),
      optional(choice('l', 'L')),
    )),

    decimal_floating_point_literal: _ => token(choice(
      seq(DECIMAL_DIGITS, '.', optional(DECIMAL_DIGITS), optional(seq((/[eE]/), optional(choice('-', '+')), DECIMAL_DIGITS)), optional(/[fFdD]/)),
      seq('.', DECIMAL_DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DECIMAL_DIGITS)), optional(/[fFdD]/)),
      seq(DIGITS, /[eE]/, optional(choice('-', '+')), DECIMAL_DIGITS, optional(/[fFdD]/)),
      seq(DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DECIMAL_DIGITS)), (/[fFdD]/)),
    )),

    hex_floating_point_literal: _ => token(seq(
      choice('0x', '0X'),
      choice(
        seq(HEX_DIGITS, optional('.')),
        seq(optional(HEX_DIGITS), '.', HEX_DIGITS),
      ),
      optional(seq(
        /[pP]/,
        optional(choice('-', '+')),
        DIGITS,
        optional(/[fFdD]/),
      )),
    )),

    true: _ => 'true',

    false: _ => 'false',

    character_literal: _ => token(seq(
      '\'',
      repeat1(choice(
        /[^\\'\n]/,
        /\\./,
        /\\\n/,
      )),
      '\'',
    )),

    string_literal: $ => choice($._string_literal, $._multiline_string_literal),
    _string_literal: $ => seq(
      '"',
      repeat(choice(
        $.string_fragment,
        $.escape_sequence,
        $.string_interpolation,
      )),
      '"',
    ),
    _multiline_string_literal: $ => seq(
      '"""',
      repeat(choice(
        alias($._multiline_string_fragment, $.multiline_string_fragment),
        $._escape_sequence,
        $.string_interpolation,
      )),
      '"""',
    ),

    string_fragment: _ => token.immediate(prec(1, /[^"\\]+/)),
    _multiline_string_fragment: _ => choice(
      /[^"\\]+/,
      /"([^"\\]|\\")*/,
    ),

    string_interpolation: $ => seq(
      '\\{',
      $.expression,
      '}',
    ),

    _escape_sequence: $ => choice(
      prec(2, token.immediate(seq('\\', /[^bfnrts'\"\\]/))),
      prec(1, $.escape_sequence),
    ),
    escape_sequence: _ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u\{[0-9a-fA-F]+\}/,
      ))),

    null_literal: _ => 'null',

    qualified_identifier: $ => prec.right(seq($.identifier, repeat(seq('.', $.identifier)))),

    statement: $ => choice(
      $.function_declaration,
      $.variable_declaration,
      $.expression_statement
    ),

    function_declaration: $ => seq(
      'function',
      $.identifier,
      $.parameter_list,
      $.block
    ),

    parameter_list: $ => seq(
      '(',
      optional(commaSep($.identifier)),
      ')'
    ),

    block: $ => seq('{', repeat($.statement), '}'),

    variable_declaration: $ => seq(
      'var',
      $.variable_declarator_list
    ),

    variable_declarator_list: $ => commaSep1($.variable_declarator),

    variable_declarator: $ => seq(
      $.identifier,
      optional(seq('=', $.variable_initializer))
    ),

    variable_initializer: $ => choice(
      $.expression,
      $.array_initializer
    ),

    array_initializer: $ => seq(
      '{',
      optional(commaSep($.expression)),
      '}'
    ),

    expression_statement: $ => seq(
      $.expression,
      optional(';')
    ),

    expression: $ => choice(
      $.number_literal,
      $.function_call,
      $.binary_expression,
      $.identifier,
      $.string
    ),

    number_literal: $ => choice(
      DIGITS,
      seq('0x', HEX_DIGITS),
    ),

    binary_expression: $ => prec.left(PREC.EXPRESSION, seq(
      $.expression,
      choice(
        '+', '-', '*', '/', '%',  // Arithmetic operators
        '==',                     // Object comparison
        '===',                    // Strict object equality
      ),
      $.expression
    )),
    

    function_call: $ => seq(
      $.identifier,
      $.argument_list
    ),

    argument_list: $ => seq(
      '(',
      optional(commaSep($.expression)),
      ')'
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: $ => /"([^"\\]|\\.)*"/,

    line_comment: _ => token(prec(PREC.COMMENT, seq('//', /[^\n]*/))),

    block_comment: _ => token(prec(PREC.COMMENT, seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')))
  }
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

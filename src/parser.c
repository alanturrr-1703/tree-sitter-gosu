#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  aux_sym_source_file_token1 = 2,
  anon_sym_package = 3,
  anon_sym_SEMI = 4,
  anon_sym_import = 5,
  anon_sym_DOT = 6,
  anon_sym_STAR = 7,
  anon_sym_function = 8,
  anon_sym_class = 9,
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  anon_sym_SLASH = 17,
  anon_sym_PERCENT = 18,
  anon_sym_var = 19,
  anon_sym_EQ = 20,
  sym_identifier = 21,
  sym_string = 22,
  sym_line_comment = 23,
  sym_block_comment = 24,
  sym_source_file = 25,
  sym_header = 26,
  sym_package_declaration = 27,
  sym_import_statement = 28,
  sym_wildcard_import = 29,
  sym_qualified_identifier = 30,
  sym_statement = 31,
  sym_function_declaration = 32,
  sym_class_declaration = 33,
  sym_parameter_list = 34,
  sym_block = 35,
  sym_expression_statement = 36,
  sym_expression = 37,
  sym_binary_expression = 38,
  sym_variable_declaration = 39,
  sym_function_call = 40,
  sym_argument_list = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_source_file_repeat2 = 43,
  aux_sym_qualified_identifier_repeat1 = 44,
  aux_sym_parameter_list_repeat1 = 45,
  aux_sym_block_repeat1 = 46,
  aux_sym_argument_list_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_import] = "import",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym_function] = "function",
  [anon_sym_class] = "class",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_var] = "var ",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_package_declaration] = "package_declaration",
  [sym_import_statement] = "import_statement",
  [sym_wildcard_import] = "wildcard_import",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_statement] = "statement",
  [sym_function_declaration] = "function_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym_expression_statement] = "expression_statement",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_package_declaration] = sym_package_declaration,
  [sym_import_statement] = sym_import_statement,
  [sym_wildcard_import] = sym_wildcard_import,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_statement] = sym_statement,
  [sym_function_declaration] = sym_function_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym_expression_statement] = sym_expression_statement,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_import] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 5,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 24,
  [34] = 27,
  [35] = 22,
  [36] = 28,
  [37] = 29,
  [38] = 31,
  [39] = 25,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 53,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 60,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 81,
  [84] = 65,
  [85] = 74,
  [86] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '\n', 36,
        '"', 3,
        '%', 56,
        '(', 48,
        ')', 50,
        '*', 43,
        '+', 53,
        ',', 49,
        '-', 54,
        '.', 42,
        '/', 55,
        ';', 40,
        '=', 58,
        'c', 17,
        'f', 30,
        'i', 18,
        'p', 7,
        'v', 8,
        '{', 51,
        '}', 52,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 32:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'v') ADVANCE(61);
      if (lookahead == '}') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '%', 56,
        '(', 48,
        ')', 50,
        '*', 43,
        '+', 53,
        ',', 49,
        '-', 54,
        '.', 42,
        '/', 55,
        ';', 40,
        '=', 58,
        'i', 18,
        'p', 7,
        '{', 51,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 34},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 34},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 34},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 34},
  [67] = {.lex_state = 34},
  [68] = {.lex_state = 34},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 34},
  [71] = {.lex_state = 34},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 34},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 34},
  [86] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(70),
    [sym_header] = STATE(73),
    [sym_package_declaration] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_string,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      sym_expression,
    STATE(55), 1,
      sym_package_declaration,
    STATE(73), 1,
      sym_header,
    STATE(4), 2,
      sym_statement,
      aux_sym_source_file_repeat2,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(11), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    STATE(30), 4,
      sym_function_declaration,
      sym_class_declaration,
      sym_expression_statement,
      sym_variable_declaration,
  [53] = 11,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_class,
    ACTIONS(36), 1,
      anon_sym_var,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      sym_string,
    STATE(31), 1,
      sym_expression,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat2,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(27), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    STATE(30), 4,
      sym_function_declaration,
      sym_class_declaration,
      sym_expression_statement,
      sym_variable_declaration,
  [94] = 11,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_expression,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat2,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(47), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    STATE(30), 4,
      sym_function_declaration,
      sym_class_declaration,
      sym_expression_statement,
      sym_variable_declaration,
  [135] = 11,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(49), 1,
      anon_sym_function,
    ACTIONS(51), 1,
      anon_sym_class,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_var,
    STATE(38), 1,
      sym_expression,
    STATE(7), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 4,
      sym_function_declaration,
      sym_class_declaration,
      sym_expression_statement,
      sym_variable_declaration,
  [176] = 11,
    ACTIONS(57), 1,
      anon_sym_function,
    ACTIONS(60), 1,
      anon_sym_class,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_var,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(71), 1,
      sym_string,
    STATE(38), 1,
      sym_expression,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 4,
      sym_function_declaration,
      sym_class_declaration,
      sym_expression_statement,
      sym_variable_declaration,
  [217] = 11,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(49), 1,
      anon_sym_function,
    ACTIONS(51), 1,
      anon_sym_class,
    ACTIONS(55), 1,
      anon_sym_var,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_expression,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 4,
      sym_function_declaration,
      sym_class_declaration,
      sym_expression_statement,
      sym_variable_declaration,
  [258] = 11,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(49), 1,
      anon_sym_function,
    ACTIONS(51), 1,
      anon_sym_class,
    ACTIONS(55), 1,
      anon_sym_var,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_expression,
    STATE(9), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 4,
      sym_function_declaration,
      sym_class_declaration,
      sym_expression_statement,
      sym_variable_declaration,
  [299] = 11,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(49), 1,
      anon_sym_function,
    ACTIONS(51), 1,
      anon_sym_class,
    ACTIONS(55), 1,
      anon_sym_var,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_expression,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 4,
      sym_function_declaration,
      sym_class_declaration,
      sym_expression_statement,
      sym_variable_declaration,
  [340] = 5,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_argument_list,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(80), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [364] = 6,
    ACTIONS(88), 1,
      anon_sym_package,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(55), 1,
      sym_package_declaration,
    STATE(73), 1,
      sym_header,
    ACTIONS(91), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_var,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [390] = 3,
    ACTIONS(84), 1,
      anon_sym_SLASH,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(80), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [408] = 3,
    ACTIONS(95), 1,
      anon_sym_SLASH,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(93), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [426] = 3,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [444] = 6,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [468] = 3,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [486] = 3,
    ACTIONS(115), 1,
      anon_sym_SLASH,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(113), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [504] = 3,
    ACTIONS(119), 1,
      anon_sym_SLASH,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [522] = 2,
    ACTIONS(91), 4,
      anon_sym_package,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_var,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [537] = 4,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [556] = 3,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(125), 3,
      anon_sym_RBRACE,
      anon_sym_var,
      sym_string,
  [572] = 2,
    ACTIONS(129), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_var,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [586] = 6,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(15), 1,
      sym_expression,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [608] = 2,
    ACTIONS(137), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_var,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [622] = 4,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [640] = 2,
    ACTIONS(123), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_var,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [654] = 2,
    ACTIONS(143), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_var,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [668] = 2,
    ACTIONS(147), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_var,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [682] = 2,
    ACTIONS(151), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_var,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [696] = 2,
    ACTIONS(155), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_var,
      sym_string,
      sym_line_comment,
      sym_block_comment,
  [710] = 4,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [728] = 3,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      anon_sym_var,
      sym_string,
    ACTIONS(155), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
  [744] = 3,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 3,
      anon_sym_RBRACE,
      anon_sym_var,
      sym_string,
    ACTIONS(137), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
  [760] = 3,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_RBRACE,
      anon_sym_var,
      sym_string,
    ACTIONS(143), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
  [776] = 3,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(127), 3,
      anon_sym_RBRACE,
      anon_sym_var,
      sym_string,
    ACTIONS(129), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
  [792] = 3,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_RBRACE,
      anon_sym_var,
      sym_string,
    ACTIONS(147), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
  [808] = 3,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      anon_sym_RBRACE,
      anon_sym_var,
      sym_string,
    ACTIONS(151), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
  [824] = 4,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [842] = 4,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
  [860] = 5,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [879] = 5,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(39), 1,
      sym_expression,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [898] = 5,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(16), 1,
      sym_expression,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [917] = 5,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(20), 1,
      sym_expression,
    STATE(12), 2,
      sym_binary_expression,
      sym_function_call,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [936] = 4,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [951] = 4,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [966] = 4,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [981] = 4,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [996] = 4,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    ACTIONS(177), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1011] = 4,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1026] = 4,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(54), 1,
      sym_qualified_identifier,
    STATE(72), 1,
      sym_wildcard_import,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1041] = 4,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1056] = 4,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      aux_sym_qualified_identifier_repeat1,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1071] = 3,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_parameter_list,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1083] = 3,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1095] = 3,
    ACTIONS(198), 1,
      anon_sym_import,
    STATE(75), 1,
      sym_import_statement,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1107] = 2,
    ACTIONS(175), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1117] = 3,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_parameter_list,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1129] = 2,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1139] = 3,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(77), 1,
      sym_qualified_identifier,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1151] = 3,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1163] = 3,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1175] = 3,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1187] = 3,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1199] = 3,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1211] = 2,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1220] = 2,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1229] = 2,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1238] = 2,
    ACTIONS(214), 1,
      anon_sym_STAR,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1247] = 2,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1256] = 2,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1265] = 2,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1274] = 2,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1283] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_comment,
      sym_block_comment,
  [1294] = 2,
    ACTIONS(224), 1,
      anon_sym_EQ,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1303] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_comment,
      sym_block_comment,
  [1314] = 3,
    ACTIONS(3), 1,
      aux_sym_source_file_token1,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_comment,
      sym_block_comment,
  [1325] = 2,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1334] = 2,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1343] = 2,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1352] = 2,
    ACTIONS(236), 1,
      anon_sym_import,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1361] = 2,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1370] = 2,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1379] = 2,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1388] = 2,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1397] = 2,
    ACTIONS(246), 1,
      anon_sym_EQ,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
  [1406] = 2,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(5), 3,
      aux_sym_source_file_token1,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 340,
  [SMALL_STATE(11)] = 364,
  [SMALL_STATE(12)] = 390,
  [SMALL_STATE(13)] = 408,
  [SMALL_STATE(14)] = 426,
  [SMALL_STATE(15)] = 444,
  [SMALL_STATE(16)] = 468,
  [SMALL_STATE(17)] = 486,
  [SMALL_STATE(18)] = 504,
  [SMALL_STATE(19)] = 522,
  [SMALL_STATE(20)] = 537,
  [SMALL_STATE(21)] = 556,
  [SMALL_STATE(22)] = 572,
  [SMALL_STATE(23)] = 586,
  [SMALL_STATE(24)] = 608,
  [SMALL_STATE(25)] = 622,
  [SMALL_STATE(26)] = 640,
  [SMALL_STATE(27)] = 654,
  [SMALL_STATE(28)] = 668,
  [SMALL_STATE(29)] = 682,
  [SMALL_STATE(30)] = 696,
  [SMALL_STATE(31)] = 710,
  [SMALL_STATE(32)] = 728,
  [SMALL_STATE(33)] = 744,
  [SMALL_STATE(34)] = 760,
  [SMALL_STATE(35)] = 776,
  [SMALL_STATE(36)] = 792,
  [SMALL_STATE(37)] = 808,
  [SMALL_STATE(38)] = 824,
  [SMALL_STATE(39)] = 842,
  [SMALL_STATE(40)] = 860,
  [SMALL_STATE(41)] = 879,
  [SMALL_STATE(42)] = 898,
  [SMALL_STATE(43)] = 917,
  [SMALL_STATE(44)] = 936,
  [SMALL_STATE(45)] = 951,
  [SMALL_STATE(46)] = 966,
  [SMALL_STATE(47)] = 981,
  [SMALL_STATE(48)] = 996,
  [SMALL_STATE(49)] = 1011,
  [SMALL_STATE(50)] = 1026,
  [SMALL_STATE(51)] = 1041,
  [SMALL_STATE(52)] = 1056,
  [SMALL_STATE(53)] = 1071,
  [SMALL_STATE(54)] = 1083,
  [SMALL_STATE(55)] = 1095,
  [SMALL_STATE(56)] = 1107,
  [SMALL_STATE(57)] = 1117,
  [SMALL_STATE(58)] = 1129,
  [SMALL_STATE(59)] = 1139,
  [SMALL_STATE(60)] = 1151,
  [SMALL_STATE(61)] = 1163,
  [SMALL_STATE(62)] = 1175,
  [SMALL_STATE(63)] = 1187,
  [SMALL_STATE(64)] = 1199,
  [SMALL_STATE(65)] = 1211,
  [SMALL_STATE(66)] = 1220,
  [SMALL_STATE(67)] = 1229,
  [SMALL_STATE(68)] = 1238,
  [SMALL_STATE(69)] = 1247,
  [SMALL_STATE(70)] = 1256,
  [SMALL_STATE(71)] = 1265,
  [SMALL_STATE(72)] = 1274,
  [SMALL_STATE(73)] = 1283,
  [SMALL_STATE(74)] = 1294,
  [SMALL_STATE(75)] = 1303,
  [SMALL_STATE(76)] = 1314,
  [SMALL_STATE(77)] = 1325,
  [SMALL_STATE(78)] = 1334,
  [SMALL_STATE(79)] = 1343,
  [SMALL_STATE(80)] = 1352,
  [SMALL_STATE(81)] = 1361,
  [SMALL_STATE(82)] = 1370,
  [SMALL_STATE(83)] = 1379,
  [SMALL_STATE(84)] = 1388,
  [SMALL_STATE(85)] = 1397,
  [SMALL_STATE(86)] = 1406,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(65),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(83),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(69),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_import, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [218] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gosu(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

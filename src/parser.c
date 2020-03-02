#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_LF = 1,
  anon_sym_PLUS = 2,
  anon_sym_DASH = 3,
  sym_identifier = 4,
  sym_number = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_source_file = 8,
  sym_statement = 9,
  sym_expression = 10,
  aux_sym__arguments = 11,
  sym_cmd = 12,
  sym_operator = 13,
  sym_argument = 14,
  sym_compoundExpression = 15,
  aux_sym_source_file_repeat1 = 16,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [aux_sym__arguments] = "_arguments",
  [sym_cmd] = "cmd",
  [sym_operator] = "operator",
  [sym_argument] = "argument",
  [sym_compoundExpression] = "compoundExpression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [aux_sym__arguments] = aux_sym__arguments,
  [sym_cmd] = sym_cmd,
  [sym_operator] = sym_operator,
  [sym_argument] = sym_argument,
  [sym_compoundExpression] = sym_compoundExpression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__arguments] = {
    .visible = false,
    .named = false,
  },
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_compoundExpression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(22),
    [sym_cmd] = STATE(4),
    [sym_operator] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_expression] = STATE(22),
    [sym_cmd] = STATE(4),
    [sym_operator] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [sym_identifier] = ACTIONS(14),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym_expression] = STATE(22),
    [sym_cmd] = STATE(4),
    [sym_operator] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_compoundExpression,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number,
    STATE(5), 2,
      aux_sym__arguments,
      sym_argument,
  [18] = 5,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_compoundExpression,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number,
    STATE(6), 2,
      aux_sym__arguments,
      sym_argument,
  [36] = 5,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_compoundExpression,
    ACTIONS(29), 2,
      sym_identifier,
      sym_number,
    STATE(6), 2,
      aux_sym__arguments,
      sym_argument,
  [54] = 5,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_compoundExpression,
    ACTIONS(35), 2,
      sym_identifier,
      sym_number,
    STATE(8), 2,
      aux_sym__arguments,
      sym_argument,
  [72] = 5,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_compoundExpression,
    ACTIONS(35), 2,
      sym_identifier,
      sym_number,
    STATE(9), 2,
      aux_sym__arguments,
      sym_argument,
  [90] = 5,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_compoundExpression,
    ACTIONS(39), 2,
      sym_identifier,
      sym_number,
    STATE(9), 2,
      aux_sym__arguments,
      sym_argument,
  [108] = 5,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(7), 1,
      sym_cmd,
    STATE(18), 1,
      sym_operator,
    STATE(23), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [125] = 5,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(7), 1,
      sym_cmd,
    STATE(18), 1,
      sym_operator,
    STATE(24), 1,
      sym_expression,
    ACTIONS(45), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [142] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 3,
      sym_identifier,
      sym_number,
      anon_sym_LPAREN,
  [151] = 1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_identifier,
  [158] = 2,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 3,
      sym_identifier,
      sym_number,
      anon_sym_LPAREN,
  [167] = 2,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(61), 3,
      sym_identifier,
      sym_number,
      anon_sym_LPAREN,
  [176] = 2,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 3,
      sym_identifier,
      sym_number,
      anon_sym_LPAREN,
  [185] = 1,
    ACTIONS(49), 4,
      sym_identifier,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [192] = 1,
    ACTIONS(59), 4,
      sym_identifier,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [199] = 1,
    ACTIONS(55), 4,
      sym_identifier,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [206] = 1,
    ACTIONS(63), 4,
      sym_identifier,
      sym_number,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [213] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [217] = 1,
    ACTIONS(69), 1,
      anon_sym_LF,
  [221] = 1,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
  [225] = 1,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 142,
  [SMALL_STATE(13)] = 151,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 176,
  [SMALL_STATE(17)] = 185,
  [SMALL_STATE(18)] = 192,
  [SMALL_STATE(19)] = 199,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 213,
  [SMALL_STATE(22)] = 217,
  [SMALL_STATE(23)] = 221,
  [SMALL_STATE(24)] = 225,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(12),
  [7] = {.count = 1, .reusable = true}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [14] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 1),
  [21] = {.count = 1, .reusable = false}, SHIFT(14),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 2),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arguments, 2),
  [29] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arguments, 2), SHIFT_REPEAT(14),
  [32] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arguments, 2), SHIFT_REPEAT(10),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(11),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arguments, 2), SHIFT_REPEAT(19),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arguments, 2), SHIFT_REPEAT(11),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = true}, SHIFT(18),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_operator, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_operator, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_argument, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_argument, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 1),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_cmd, 1),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_compoundExpression, 3),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_compoundExpression, 3),
  [67] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [69] = {.count = 1, .reusable = true}, SHIFT(13),
  [71] = {.count = 1, .reusable = true}, SHIFT(16),
  [73] = {.count = 1, .reusable = true}, SHIFT(20),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_flourish(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}

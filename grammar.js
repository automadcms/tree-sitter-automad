module.exports = grammar({
	name: 'automad',

	extras: ($) => [$.comment, /\s+/],

	rules: {
		automad: ($) =>
			repeat1(
				choice($.variable, $.comment, $.statement, $.block, $.text),
			),

		comment: () => seq('<#', prec.right(repeat(/.|\s/)), '#>'),

		_name: () => /[:?%+]?[a-zA-Z][\w\/_]*/,
		_value: ($) =>
			prec.right(choice($.string, $.variable, $.number, $.boolean)),
		_key_value: ($) => seq($.key, ':', repeat(/\s/), $._value),
		_pipe: ($) =>
			prec.right(
				seq(
					repeat(/\s/),
					$.pipe_separator,
					repeat(/\s/),
					choice(
						seq(
							$.pipe_function_name,
							repeat(/\s/),
							optional(
								seq(
									'(',
									repeat(/\s/),
									$._value,
									repeat(
										seq(
											repeat(/\s/),
											',',
											repeat(/\s/),
											$._value,
										),
									),
									repeat(/\s/),
									')',
								),
							),
						),
						$.pipe_math,
					),
				),
			),

		string: () => /"(?:[^"\\\\]|\\\\.)*"|'(?:[^'\\\\]|\\\\.)*'/,
		number: () => /\d+(\.\d+)?/,
		boolean: () => /(true|false)/,

		variable: ($) =>
			seq(
				$.variable_open,
				repeat(/\s/),
				$.variable_name,
				repeat($._pipe),
				repeat(/\s/),
				$.variable_close,
			),
		variable_open: () => '@{',
		variable_close: () => '}',
		variable_name: ($) => $._name,

		pipe_separator: () => '|',
		pipe_function_name: ($) => $._name,
		pipe_math: ($) =>
			seq(choice('+', '-', '*', '/'), repeat(/\s/), $.number),

		keyword: () =>
			choice('for', 'to', 'foreach', 'in', 'if', 'snippet', 'with'),

		keyword_else: () => 'else',
		keyword_end: () => 'end',

		negation: () => choice('!', 'not'),
		operator: () => /[=<>!]+/,

		expression: ($) =>
			prec.right(
				seq(
					choice(
						'pagelist',
						'filelist',
						'tags',
						'filters',
						seq(
							optional(seq($.negation, repeat(/\s/))),
							$._value,
							repeat(/\s/),
							optional(seq($.operator, repeat(/\s/), $._value)),
						),
					),
				),
			),

		key: () => /[?:%+]?[\w_]+/,

		options: ($) =>
			prec.right(
				seq(
					'{',
					repeat(/\s/),
					$._key_value,
					repeat(seq(repeat(/\s/), ',', repeat(/\s/), $._key_value)),
					repeat(/\s/),
					'}',
				),
			),

		include: () => /[\w\/\._-]*\.php/,

		tag_start: ($) =>
			seq(
				$.statement_open,
				optional('~'),
				repeat(/\s/),
				choice($.keyword),
				repeat(
					seq(
						repeat(/\s/),
						choice(
							alias($._name, $.snippet),
							$.expression,
							$.keyword,
							$.options,
						),
					),
				),
				repeat(/\s/),
				optional('~'),
				$.statement_close,
			),

		tag_else: ($) =>
			seq(
				$.statement_open,
				optional('~'),
				repeat(/\s/),
				$.keyword_else,
				repeat(/\s/),
				optional('~'),
				$.statement_close,
			),

		tag_end: ($) =>
			seq(
				$.statement_open,
				optional('~'),
				repeat(/\s/),
				$.keyword_end,
				repeat(/\s/),
				optional('~'),
				$.statement_close,
			),

		statement: ($) =>
			seq(
				$.statement_open,
				optional('~'),
				repeat(/\s/),
				choice(alias($._name, $.function), $.include),
				optional(seq(repeat(/\s/), $.options)),
				repeat(/\s/),
				optional('~'),
				$.statement_close,
			),

		block: ($) =>
			seq(
				$.tag_start,
				optional(
					seq(
						repeat1(
							choice(
								$.variable,
								$.comment,
								$.text,
								$.statement,
								$.block,
							),
						),
						$.tag_else,
					),
				),
				optional(
					repeat1(
						choice(
							$.variable,
							$.comment,
							$.text,
							$.statement,
							$.block,
						),
					),
				),
				$.tag_end,
			),

		statement_open: () => '<@',
		statement_close: () => '@>',

		text: () => token(repeat1(/([^@<]+|@[^\{]|<[^#=@\s>]+)/)),
	},
});

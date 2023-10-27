module.exports = grammar({
	name: 'automad',

	extras: ($) => [$.comment, /\s+/],

	rules: {
		automad: ($) =>
			repeat1(choice($.variable, $.comment, $.text, $.statement)),

		comment: () => token(/<#.*?#>/),

		_name: () => /:?\w[\w\/_]*/,
		_value: ($) =>
			prec.right(choice($.string, $.variable, $.number, $.boolean)),
		_keyValue: ($) => seq($.key, ':', repeat(/\s/), $._value),
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
											$._value
										)
									),
									repeat(/\s/),
									')'
								)
							)
						),
						$.pipe_math
					)
				)
			),

		string: () => /"(?:[^"\\\\]|\\\\.)+"|'(?:[^'\\\\]|\\\\.)+'/,
		number: () => /\d+(\.\d+)?/,
		boolean: () => /(true|false)/,

		variable: ($) =>
			seq(
				$.variable_open,
				repeat(/\s/),
				$.variable_name,
				repeat($._pipe),
				repeat(/\s/),
				$.variable_close
			),
		variable_open: () => '@{',
		variable_close: () => '}',
		variable_name: ($) => $._name,

		pipe_separator: () => '|',
		pipe_function_name: ($) => $._name,
		pipe_math: ($) =>
			seq(choice('+', '-', '*', '/'), repeat(/\s/), $.number),

		keyword: () =>
			choice(
				'for',
				'to',
				'foreach',
				'in',
				'if',
				'else',
				'with',
				'else',
				'end'
			),

		negation: () => choice('!', 'not'),
		operator: () => /[=<>!]+/,

		expression: ($) =>
			prec.right(
				seq(
					choice(
						'pagelist',
						'filelist',
						seq(
							optional(seq($.negation, repeat(/\s/))),
							$._value,
							repeat(/\s/),
							optional(seq($.operator, repeat(/\s/), $._value))
						)
					)
				)
			),

		key: () => /[\w_]+/,

		options: ($) =>
			prec.right(
				seq(
					'{',
					repeat(/\s/),
					$._keyValue,
					repeat(seq(repeat(/\s/), ',', repeat(/\s/), $._keyValue)),
					repeat(/\s/),
					'}'
				)
			),

		include: () => /[\w][\w\/\._]*\.php/,

		statement: ($) =>
			seq(
				$.statement_open,
				repeat(/\s/),
				choice($._name, $.keyword, $.include),
				repeat(
					seq(
						repeat(/\s/),
						choice($.expression, $.keyword, $.options)
					)
				),
				repeat(/\s/),
				$.statement_close
			),
		statement_open: () => '<@',
		statement_close: () => '@>',

		text: () => token(prec(-1, repeat1(/[^@<#]+|<[^<#@\s>]+/))),
	},
});

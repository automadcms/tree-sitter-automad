(
	[
		(statement) @label
		(block) @label
		(variable) @label
		(pipe_function_name) @constructor
		(keyword) @constructor
		(keyword_else) @constructor
		(keyword_end) @constructor
		(expression) @type.builtin
		(snippet) @type.builtin
		(include) @type.builtin
		(function) @type.builtin
		(variable_name) @variable.builtin
		(comment) @comment
		(number) @number
		(key) @field
		(boolean) @parameter
	]
	(#set! "priority" 110)
)

(
	(string) @string
	(#set! "priority" 120)
)

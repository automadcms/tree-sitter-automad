(
	[
		(variable) @label
		(pipe_function_name) @constructor
		(variable_name) @variable.builtin
		(comment) @comment
	]
	(#set! "priority" 120)
)

(
	[
		(statement) @label
		(block) @label
		(keyword) @constructor
		(keyword_else) @constructor
		(keyword_end) @constructor
		(expression) @type.builtin
		(snippet) @type.builtin
		(include) @type.builtin
		(function) @type.builtin
		(number) @number
		(key) @field
		(boolean) @parameter
	]
	(#set! "priority" 0)
)

(
	(string) @string
	(#set! "priority" 100)
)

(
	[
		(statement) @label
		(keyword) @constructor
		(expression) @type.builtin
		(include) @type.builtin
		(function) @type.builtin
		(comment) @comment
		(variable) @label
		(variable_name) @variable.builtin
		(pipe_function_name) @constructor
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

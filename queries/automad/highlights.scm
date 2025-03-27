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
		(key) @field
	]
	(#set! "priority" 0)
)

(
	(string) @string
	(#set! "priority" 100)
)

(

	[
		(variable) @label
		(pipe_function_name) @constructor
		(variable_name) @variable.builtin
		(number) @number
		(boolean) @boolean
		(comment) @comment
	]
	(#set! "priority" 120)
)

(variable
	(string) @string
	(#set! "priority" 130)
)

(
	[
		(comment) @comment
	]
	(#set! "priority" 140)
)


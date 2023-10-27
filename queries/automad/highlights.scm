(
	[
		(statement) @label
		(keyword) @keyword
		(expression) @type.builtin
		(comment) @comment
		(variable) @label
		(variable_name) @variable.builtin
		(pipe_function_name) @keyword
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

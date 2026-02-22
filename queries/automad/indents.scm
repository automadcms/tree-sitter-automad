(tag_start) @indent.begin
(tag_else)  @indent.branch
(tag_end)   @indent.end

(block) @indent.begin
(block) @indent.end

[
	(text)
	(variable)
	(statement)
	(block)
] @indent.auto

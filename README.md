# Tree-Sitter Automad

## Installation

1. Add this to your tree-sitter config in Neovim:

    ```lua
    local parser_config = require('nvim-treesitter.parsers').get_parser_configs()

    parser_config.automad = {
    	install_info = {
    		url = 'https://github.com/automadcms/tree-sitter-automad',
    		files = { 'src/parser.c' },
    	},
    }

    treesitter.setup({
    	ensure_installed = {
    		'html',
    		'php',
    		'automad',
    	},
    	auto_install = true,
    })
    ```

2. Copy the `queries/automad` and `queries/php` directories from this repository to the `queries` directory
   in your Neovim runtime path.

3. Restart Neovim.

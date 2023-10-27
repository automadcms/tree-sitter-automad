# Tree-Sitter Automad

Tree-Sitter grammar for [Automad](https://automad.org) templates.

## Installation

In order to enable syntax highlighting in Automad templates, the following two steps are required:

### Updating Tree-Sitter Config

First, the `automad` parser config has to be defined and then added to the `ensure_installed` table inside
the `nvim-treesitter` setup function.

```lua
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()

parser_config.automad = {
  install_info = {
    url = 'https://github.com/automadcms/tree-sitter-automad',
    files = { 'src/parser.c' },
  },
}

require('nvim-treesitter.configs').setup({
  ensure_installed = {
    'html',
    'php',
    'automad',
  },
  auto_install = true,
})
```

### Copying Queries

After updating the Tree-Sitter config, the `queries` directory in this repository has to be copied to the
Neovim config directory:

```bash
git clone https://github.com/automadcms/tree-sitter-automad.git
cp -r ./tree-sitter-automad/queries ~/.config/nvim
```

> Note that this assumes that you don't have already a `queries` directory in your Neovim config.

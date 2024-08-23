# Neovim Configuration

This repository contains my personal Neovim configuration, tailored to enhance my workflow and productivity. Below is a list of plugins and features integrated into my setup:
It's a very simple config to understand and modify to your own taste. to remove a plugin simply delete one of the file
in the plugins folder, to add a new plugins follow the instructions of the plugins readme and create a new file in the plugins folder
keybindings can be modified in the core folder.

The keybindings are really tailored to my liking as I come from the Helix editor, but you can easily change them if you want to.

## Plugins

### UI Enhancements
- **[alpha.lu](https://github.com/goolord/alpha-nvim)**: Provides a sleek splash screen for a visually appealing startup experience.
- **[bufferline](https://github.com/akinsho/nvim-bufferline.lua)**: Offers a cleaner interface for managing multiple buffers with tab-like functionality.
- **[dressing](https://github.com/ChristianChiarulli/dressed.nvim)**: Improves the overall UI aesthetics for a more pleasant editing experience.
- **[indent-blankline](https://github.com/lukas-reineke/indent-blankline.nvim)**: Enhances code readability by visually highlighting indent levels.

### Code Editing
- **[comment](https://github.com/numToStr/Comment.nvim)**: Simplifies the process of commenting and uncommenting lines and blocks of code.
- **[nvim-autopairs](https://github.com/windwp/nvim-autopairs)**: Automatically inserts pairs of brackets and other characters for improved ergonomics during coding sessions.
- **[mini-surround](https://github.com/sindrets/minimal-surround.vim)**: Provides motion-based text manipulation for surrounding characters.
- **[substitute](https://github.com/TaDaa/vimade)**: Enables replacing text with content from a register.
- **[telescope](https://github.com/nvim-telescope/telescope.nvim)**: Integrates fuzzy finder functionality and other search tools for efficient navigation.

### Theme and Styling
- **[rose-pine](https://github.com/rose-pine/neovim)**: Applies the Rose Pine color scheme for a visually pleasing interface.

### Development Tools
- **[lazygit](https://github.com/kdheepak/lazygit.nvim)**: Integrates the LazyGit terminal UI for Git operations within Neovim.
- **[header42](https://github.com/jeanSim/checker)**: Automatically inserts the header required by the 42 school guidelines.
- **[which-key](https://github.com/folke/which-key.nvim)**: Provides on-the-fly keybinding documentation to facilitate learning and usage.

### Language Server Protocol (LSP) Integration
- **[lspconfig](https://github.com/neovim/nvim-lspconfig)**: Configures language servers for code analysis and completion.
- **[cmp](https://github.com/hrsh7th/cmp-nvim-lsp)**: Implements completion management for Neovim's built-in LSP client.
- **[luasnip](https://github.com/L3MON4D3/LuaSnip)**: Provides snippet support for code completion.
- **[treesitter](https://github.com/nvim-treesitter/nvim-treesitter)**: Enhances syntax highlighting and motion with context awareness.
- **[dap and dap-ui](https://github.com/mfussenegger/nvim-dap)**: Offers debugging support with the Debug Adapter Protocol.

### Miscellaneous
- **[auto-session](https://github.com/rmagatti/session-lens)**: Automatically saves and restores your Neovim session.
- **[todo-comment](https://github.com/folke/todo-comments.nvim)**: Facilitates navigation through TODO comments within your codebase.
- **[trouble](https://github.com/folke/trouble.nvim)**: Improves the UI for displaying and navigating through diagnostics.
- **[undotree](https://github.com/mbbill/undotree)**: Provides a visual representation of your undo history for easy navigation and management.

## Installation

1. Make a backup of your previous configuration

```bash
   mv ~/.config/nvim/ ~/.config/nvim.back
   rm -rf ~/.local/share/nvim
```

2. Clone this repository to your local machine:

   ```bash
   git clone  https://github.com/pierrelgol/42-nvim.git ~/.config/nvim
   ```
3. You will need to install a few dependencies to take full advantage of this configuration
in order to do this I suggest you install linux version of Homebrew, to install dependencies
such as neovim, fzf, lazygit, clangd etc. 
** for clangd you can also use this link [clangd-binary](https://github.com/clangd/clangd/releases) **

4. Optionnal but really important, In order to get the full benefit of this neovim-config, you need to install a very important dependency called [bear](https://github.com/rizsotto/Bear).
Then you need to go in your directory of your C/Cpp project and run :
```bash
bear <your_compilation_command_on_a_clean_repo>
```
bear will generate a compilation_commands.json for you which clangd relies upon to provide the full LSP features, for example certain features of clangd might not work at all without it.

## Usage

Once installed, you can start using Neovim with the enhanced features and plugins described above. Explore the various keybindings and functionalities to streamline your development workflow.

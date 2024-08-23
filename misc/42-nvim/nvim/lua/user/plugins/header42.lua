-- -------------------------------------------------------------------------- --
--                                                                            --
--                                                         :::     ::::::::   --
--  header42.lua                                          :+:     :+:    :+:  --
--                                                      +:+ +:+        +:+    --
--  By: pollivie <pollivie@student.42.fr>             +#+  +:+      +#+       --
--                                                  +#+#+#+#+#+  +#+          --
--  Created: 08/04/2024 07:05:17 PM by pollivie          #+#   #+#            --
--  Updated: 08/04/2024 07:05:17 PM by pollivie         ###  ##########.fr    --
--                                                                            --
-- -------------------------------------------------------------------------- --
return {
	{
		"Diogo-ss/42-header.nvim",
		lazy = false,
		config = function()
			local header = require("42header")
			header.setup({
				default_map = true, -- default Mapping <F1> in normal mode
				auto_update = true, -- update header when saving
				user = "marvin", -- your user
				mail = "marvi@42.fr", -- your mail
			})
		end
	},
}

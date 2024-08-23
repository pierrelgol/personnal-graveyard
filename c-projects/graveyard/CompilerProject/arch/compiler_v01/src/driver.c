#include "../lib/driver.h"
#include "../lib/table.h"
#include "../lib/lexer.h"
#include <stdlib.h>
#include <stdio.h>


void	driver_prepare(File *file, Lexer *lex, char *path)
{
	file = file_init(path);
	if (!file)
		file_dispose(file);
	else
		lex = lexer_init(file->content, file->size);
	if (!lex)
		lexer_dispose(lex);
}

int	main(int argc, char **argv)
{

	File 		*file;
	Lexer 		*lex;

	if (argc == 2)
	{

		file = NULL;
		lex = NULL;
		driver_prepare(file, lex, argv[1]);
		if (file && lex)
		{
			Token *tok = lexer_consume(lex);
			while (tok->kind != TOKEN_END)
			{
				table_insert(tok);	
				tok = lexer_consume(lex);
			}
		}
		lexer_dispose(lex);
		file_dispose(file);
	}
	
	return (0);
}

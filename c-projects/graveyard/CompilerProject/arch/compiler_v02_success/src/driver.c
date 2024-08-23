#include "../lib/driver.h"
#include <stdio.h>

void *take_ownership(void **owner)
{
	void *new_owner;

	new_owner = (*owner);
	(*owner) = NULL;
	return (new_owner);
}

void	put_nbr(int n)
{
	if (n == 0)
		return ;
	put_nbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void	visualize_eating(Lexer *lex)
{
	int    ch;
	printf("%d ", lex->line);
	while ((ch = lexer_eat_character(lex)) != EOF)
	{
		write(1, &ch, 1);
		if (lexer_prev_character(lex) == '\n')
			put_nbr(lex->line);
		usleep(33000);
	}
}

int main(int argc, char **argv)
{
	File  *file;
	Lexer *lex;
	void  *unique_ptr;

	if (argc == 2)
	{
		file       = file_init(argv[1]);
		unique_ptr = take_ownership((void **) (&file->content));
		lex        = lexer_init(unique_ptr, file->size);
		visualize_eating(lex);
		lexer_dispose(lex);
		file_dispose(file);
	}

	return (0);
}

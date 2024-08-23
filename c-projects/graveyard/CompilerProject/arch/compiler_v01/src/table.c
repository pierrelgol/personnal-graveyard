#include "../lib/table.h"
#include <stdio.h>
#include <stdlib.h>

void	table_insert(Token *token)
{
	if (token->kind == TOKEN_END)
		printf("<end>%s",token->text);
	else if (token->kind == TOKEN_IDENTIFIER)
	 	printf("<identifier>%s",token->text);
	else if (token->kind == TOKEN_PONCTUATOR)
		printf("<ponctuator>%s",token->text);
	else if (token->kind == TOKEN_PREPROC)
	 	printf("<preproc>%s",token->text);
	else if (token->kind == TOKEN_KEYWORD)
	 	printf("<keyword>%s",token->text);
	else if (token->kind == TOKEN_LITERAL)
	 	printf("<literal>%s",token->text);
	else if (token->kind == TOKEN_SYMBOL)
	 	printf("<symbol>%s",token->text);
	else if (token->kind == TOKEN_NUMBER)
		printf("<number>%s",token->text);
	else if (token->kind == TOKEN_OPERATOR)
		printf("<operator>%s",token->text);
	else if (token->kind == TOKEN_NEWLINE)
		printf("<newline>%s",token->text);
	else if (token->kind == TOKEN_COMMENT)
		printf("<comment>%s",token->text);
	else
		printf("<unresolved>%s",token->text);
	free(token);

}


#include "../lib/lexer.h"
#include <stdio.h>
#include <stdlib.h>

Lexer *lexer_init(char *content, int size)
{
	Lexer *self;

	if (!content)
		return (NULL);
	self = (Lexer *) calloc(1, sizeof(Lexer));
	if (!self)
		return (NULL);
	self->stream = content;
	self->size = size;
	return (self);
}

Token *lexer_consume(Lexer *self)
{
	Token *token;

	if (!self)	
		return (NULL);
	token = token_find_next_token(self->stream, self->cursor, self->size);
	if (token)
		self->cursor += token->len;
	return (token);
}

int    lexer_eat_char(Lexer *self)
{
	if (!self)
		return (-1);
	if (self->cursor + 1 == self->size)
	{
		self->cursor += 1;
		return (EOF);
	}
	else
		self->cursor += 1;
	return (1);
}

Lexer *lexer_dispose(Lexer *self)
{
	if (self)
	{
		if (self->stream)
			free(self->stream);
		free(self);
	}
	return (NULL);
}

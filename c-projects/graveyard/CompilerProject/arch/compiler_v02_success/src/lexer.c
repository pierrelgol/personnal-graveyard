#include "../lib/lexer.h"

Lexer *lexer_init(char *stream, int stream_size)
{
	Lexer	*self;

	if (!stream || stream_size == 0)
		return (NULL);

	self = (Lexer *) calloc(1, sizeof(Lexer));
	if (!self)
		return (NULL);
	self->size = stream_size;
	self->content = stream;
	return (self);
}

int lexer_eat_character(Lexer *self)
{
	if (!self || !self->content)
		return (0);
	if (self->cursor + 1 > self->size)
		return (EOF);
	if (self->content[self->cursor] == '\n')
	{
		self->line += 1;
		self->begline = self->cursor + 1;
	}
	return (self->content[self->cursor++]);
}

int lexer_next_character(Lexer *self)
{
	if (!self || !self->content)	
		return (0);
	if (self->cursor + 1 > self->size)
		return (EOF);
	return (self->content[self->cursor + 1]);
}

int lexer_prev_character(Lexer *self)
{	
	if (!self || !self->content)	
		return (0);
	if (self->cursor - 1 < 0)
		return (0);
	return (self->content[self->cursor - 1]);
}

int lexer_peek_character(Lexer *self, int index)
{
	if (!self || !self->content)	
		return (0);
	if (self->cursor - index < 0 || self->cursor + index > self->size)
		return (0);
	return (self->content[self->cursor + index]);
}

Lexer *lexer_dispose(Lexer *self)
{
	if (self)
	{
		if (self->content)
			free(self->content);
		free(self);
	}
	return (NULL);
}

#include "../lib/lex_scanner.h"

Scanner *scanner_init(char *stream, int stream_size, FnMem *mem)
{
	assert(stream != NULL);
	assert(stream_size != 0);
	assert(mem != NULL);

	Scanner *self;

	self = (Scanner *) mem->alloc(1, sizeof(Scanner));
	assert(self != NULL);

	self->mem = mem;
	self->size = stream_size;
	self->content = stream;

	return (self);
}

int scanner_consume(Scanner *self)
{
	assert(self != NULL);
	assert(self->content != NULL);

	if (self->cursor + 1 > self->size)
		return (EOF);
	if (self->content[self->cursor] == '\n')
	{
		self->line += 1;
		self->begline = self->cursor + 1;
	}
	self->cursor += 1;
	return (true);
}

int scanner_trim(Scanner *self)
{
	assert(self != NULL);

	int ch = 0;

	ch = scanner_curr(self);
	while (ch != EOF && (ch == ' ' || ch == '\t'))
	{
		scanner_consume(self);
		ch = scanner_curr(self);
	}
	return (1);
}

int scanner_curr(Scanner *self)
{
	assert(self != NULL);

	if (self->cursor >= self->size)
		return (EOF);
	return (self->content[self->cursor]);
}

int scanner_next(Scanner *self)
{
	assert(self != NULL);

	if (self->cursor + 1 > self->size)
		return (EOF);
	return (self->content[self->cursor + 1]);
}

int scanner_prev(Scanner *self)
{
	assert(self != NULL);

	if (self->cursor - 1 < 0)
		return (0);
	return (self->content[self->cursor - 1]);
}

int scanner_peek(Scanner *self, int index)
{
	assert(self != NULL);

	if (self->cursor - index < 0 || self->cursor + index > self->size)
		return (0);
	return (self->content[self->cursor + index]);
}

void scanner_dispose(Scanner *self)
{
	assert(self != NULL);
	assert(self->mem != NULL);
	assert(self->content != NULL);

	if (self)
	{
		self->mem->dealloc(self->content);
		self->mem->dealloc(self);
	}
}

#include "../lib/lex_token.h"

Token *token_init(FnMem *mem)
{
	assert(mem != NULL);

	Token *self;

	self = (Token *) mem->alloc(1, sizeof(Token));
	assert(self != NULL);

	return (self);
}

void token_dispose(Token *self, FnMem *mem)
{
	mem->dealloc(self);
}

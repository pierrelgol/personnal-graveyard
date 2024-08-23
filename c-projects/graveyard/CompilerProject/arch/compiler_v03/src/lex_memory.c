#include "../lib/lex_memory.h"

FnMem *mem_init(void)
{
	FnMem *self;

	self = (FnMem *) malloc(sizeof(FnMem));
	assert(self != NULL);

	self->alloc = calloc;
	self->dealloc = free;
	self->borrow = mem_borrow;
	return (self);
}

void *mem_borrow(void **from)
{
	assert(from != NULL);
	assert((*from) != NULL);

	void *unique_ptr;

	unique_ptr = (*from);
	(*from) = NULL;

	return (unique_ptr);
}

void mem_dispose(FnMem *self)
{
	assert(self != NULL);

	if (self)
	{
		free(self);
	}
}

#include "vector.h"
#include "buffer.h"
#include <stdlib.h>
#include <assert.h>

t_vector	*vector_init(int size)
{
	t_vector *self;

	self = (t_vector*) malloc(sizeof(t_vector));
	if(self == NULL)
		return (NULL);
	self->pop = vector_pop;
	self->push = vector_push;
	self->buffer = buffer_constructor(size);

	assert(self->buffer != NULL);
	assert

	return (self);
}


void	vector_push(t_vector *self, t_data elem)
{
		
}


t_data	vector_pop(t_vector *self);




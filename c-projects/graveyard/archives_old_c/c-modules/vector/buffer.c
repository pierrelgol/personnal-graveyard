#include "buffer.h"


t_buffer 	*buffer_constructor(int capacity)
{
	t_buffer *self;

	if(capacity == 0) 
		return (NULL);
	self = (t_buffer*) malloc(sizeof(t_buffer));
	if(self == NULL)  
		return (NULL);

	self->capacity    = capacity;
	self->count       = 0;
	self->elements    = (t_data*) malloc(sizeof(t_data) * capacity);

	if(self->elements == NULL)
	{
		buffer_destructor(self);
		return (NULL);
	}
	return (self);
}

void 		buffer_destructor(t_buffer *self)
{
	if(self != NULL)
	{
		if(self->elements != NULL)
			free(self->elements);
		free(self);
	}
}


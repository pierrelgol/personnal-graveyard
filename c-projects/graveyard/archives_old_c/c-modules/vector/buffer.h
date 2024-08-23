#ifndef BUFFER_H
#define BUFFER_H
#include <stdlib.h>

typedef int 	t_data;

typedef struct  s_buffer
{
	int			count;
	int			capacity;
	t_data		*elements;
	
}			    t_buffer;

t_buffer 	   *buffer_constructor(int capacity);
void	 		buffer_destructor(t_buffer *self);


#endif

#ifndef VECTOR_H
#define VECTOR_H
#include "buffer.h"

typedef int t_data;

typedef struct s_vector
{
	void 	(* push) (struct s_vector *self, t_data elem);
	t_data 	(* pop ) (struct s_vector *self);

	t_buffer *buffer;

}			   t_vector;


t_vector	*vector_init(int size);
void		vector_push(t_vector *self, t_data elem);
t_data		vector_pop(t_vector *self);

#endif

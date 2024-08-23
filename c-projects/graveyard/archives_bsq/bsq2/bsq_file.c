#include "bsq.h"
#include "bsq_file.h"


t_file 	*file_constructor(i8 *path_to_file, t_buffer *buffer)
{
	assert(path_to_file != NULL);
	assert(buffer != NULL);
	assert(buffer->content != NULL);
	assert(buffer->capacity != 0);

	t_file 	*this;

	this = (t_file*) malloc(sizeof(t_file));
	if(this == NULL)
		return (file_destructor(&this));

	*this = (t_file){0, 0, 0, FALSE, TRUE, NULL};
    this->fd = open(path_to_file, O_RDONLY);
	if(this->fd < 0)
		return (file_destructor(&this));

	this->is_open = TRUE;
    buffer->size = read(this->fd, buffer->content, buffer->capacity);
	if(buffer->size > buffer->capacity)
		return (file_destructor(&this));

    this->content = (i8 *)malloc(sizeof(i8) * buffer->size);
	if(this->content == NULL)
		return (file_destructor(&this));

    buffer->capacity -= buffer->size;
  	while (this->size < buffer->size)
    	this->content[this->size++] = *buffer->content++;

	return (this);
}

t_file 	*file_destructor(t_file **self)
{
	if(*self != NULL)
	{
		if((*self)->is_open == TRUE)
			close((*self)->fd);
		assert(*self != NULL);
		if((*self)->content != NULL)
		{
			assert((*self)->content != NULL);
			free((*self)->content);
		}
		free((*self));
	}
	(*self) = NULL;
	return (*self);
}


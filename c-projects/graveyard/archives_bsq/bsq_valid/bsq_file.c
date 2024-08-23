#include "bsq.h"
#include "bsq_file.h"
#include "bsq_log.h"


t_file 	*file_init(const char *path_to_file, char *buffer)
{
	t_file 	*self;

	self  = (t_file*) malloc(sizeof(t_file));
	if(self == NULL)
		return (file_dispose(&self));
	*self = (t_file){0,0,false,NULL};
	
	self->fd = open(path_to_file, O_RDWR);
	if(self->fd < 0)
		return (file_dispose(&self));

	self->is_open = true;
	self->count = read(self->fd, buffer, BUFFCAP);
	if(self->count <= 0)
		return(file_dispose(&self));
	self->data = buffer;
	self->data[self->count + 1] = '\0';
    return (self);
}


void *file_dispose(t_file **self)
{

	if((*self) != NULL)
	{
		if((*self)->is_open == true)
			close((*self)->fd);
		free((*self));
	}

	*self = NULL;
	return (self);
}

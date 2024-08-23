#include "../lib/bsq_file.h"
#include "../lib/bsq_log.h"


bool file_open(t_file *self, const char *path_to_file, char *buffer)
{	
	self->fd = open(path_to_file, O_RDWR);
	if(self->fd < 0)
		return (false);

	self->is_open = true;
	self->count = read(self->fd, buffer, BUFFCAP);
	if(self->count <= 0)
		return (false);

	self->data = buffer;
	self->data[self->count + 1] = '\0';
	return (true);
}


bool file_close(t_file *self)
{
	if(self != NULL && self->is_open == true)
	{
		close(self->fd);
		self->is_open = false;

		return (true);
	}

	return (false);
}

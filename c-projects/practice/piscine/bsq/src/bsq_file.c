#include "../lib/bsq_file.h"
#include "../lib/bsq_log.h"
#include "../lib/bsq.h"


bool	file_open(t_file *file, const char *path)
{
	file->fd = open(path, O_RDONLY);
	if(file->fd < 0)
		return(!file_dispose(file));

	file->valid = true;
	file->size = read(file->fd, file->buffer, BUFFER_SIZE);
	if(file->size <= 0)
		return(!file_dispose(file));

	file->buffer[file->size] = '\0';
	return (true);
}


bool	file_read(t_file *file, short fd)
{
	file->fd = fd;
	file->size = read(file->fd, file->buffer, BUFFER_SIZE);
	if(file->size <= 0)
		return (false);

	return (true);
}


bool	file_write(t_file *file, short fd)
{
	if(!file)
		write(fd,MAP_ERROR, sizeof(MAP_ERROR));
	else
		write(fd,file->buffer,file->size);

	return (true);
}


bool	file_dispose(t_file *file)
{
	if(file != NULL && file->open == true)
	{
		close(file->fd);
		file->open = false;
		return (true);
	}

	return (false);
}

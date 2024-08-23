#include "file_utils.h"


int
t_buffer_load_file(t_buffer *buff, char *file_name)
{
	int file_descriptor;

	file_descriptor = open(file_name, O_RDONLY);

	if (file_descriptor < 0 || buff == NULL)
		return (SIG_ERROR);

	buff->size += read(file_descriptor, buff->content, buff->capacity);
	close(file_descriptor);

	return (SIG_SUCCESS);
}

int
t_buffer_write_to(int fd, t_buffer *buff)
{
	if (buff == NULL || fd < 0)
	{
		return (SIG_ERROR);
	}
	if (write(fd, buff->content, buff->size) == buff->size)
	{
		return (SIG_SUCCESS);
	}
	else
	{
		return(SIG_ERROR);
	}
}

int
t_buffer_write_from(int fd, t_buffer *buff, int offset)
{
	if (buff == NULL || fd < 0)
	{
		return (SIG_ERROR);
	}
	if (write(fd, &buff->content[(buff->size - offset)], offset) == offset)
	{
		return (SIG_SUCCESS);
	}
	else
	{
		return(SIG_ERROR);
	}
}

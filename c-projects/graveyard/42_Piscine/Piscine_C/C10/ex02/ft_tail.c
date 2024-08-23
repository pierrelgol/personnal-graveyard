#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_CAPACITY 30000

void
tail_handle_error(void)
{
	char *error_message;
	int errlen;

	errlen = 0;
	error_message = strerror(errno);

	while(error_message[errlen])
		++errlen;
	write(2, error_message, errlen);
	errno = 0;
}

int 
tail_compute_default_offset(char *buff, int size)
{
	int line_count;
	int byte_offset;

	line_count = 0;
	byte_offset = 0;

	while(byte_offset < size && line_count <= 10)
	{
		if (buff[size - byte_offset] == '\n')
			line_count++;
		if (buff[size - byte_offset] == '\r')
			line_count++;
		if (buff[size - byte_offset] == '\0')
			line_count++;
		++byte_offset;
	}
	return (byte_offset);
}

int	
ft_cache_file_at(char *fname, char *buff, int offset)
{
	int f_desc;
	int byte_read;

	f_desc = open(fname, O_RDONLY);

	if(f_desc < 0)
		tail_handle_error();

	byte_read = read(f_desc, &buff[offset], (BUFFER_CAPACITY - offset));
	close(f_desc);
	
	return (byte_read);
}

void 
tail_display_cache_tail(char *buff, int size, int byte)
{
	int head;

	head = 0;
	if(buff == NULL)
		tail_handle_error();
	if (byte > 0)
	{
		head = size - byte;
		while(head < size)
			write(1, &buff[head++], 1);			
	}
	else
	{
		head = tail_compute_default_offset(buff, size);
		write(1, &buff[size - head], head);
	}
	
}


int main(int argc, char **argv)
{
	char *buffer;
	int offset;
	int i;

	i = 1;
	offset = 0;
	buffer = (char [BUFFER_CAPACITY]){0};

	if (argc == 2)
	{
		offset += ft_cache_file_at(argv[1], buffer, offset);
		tail_display_cache_tail(buffer, offset, 0);
		
	}
	else if (argc > 2)
	{
		while (i < argc && offset < BUFFER_CAPACITY)
		{
			offset = 0;
			offset += ft_cache_file_at(argv[i++], buffer, offset);
			tail_display_cache_tail(buffer, offset, 0);
		}
	}
	else
		return (0);


	return (0);
}

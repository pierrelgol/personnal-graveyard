#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define STD_INPUT 0
#define STD_OUTPUT 1
#define STD_ERROR 2

#define SIG_ERROR -1
#define SIG_SUCCESS 0

#define T_BUFFER_MAX_CAP 30000
#define T_BUFFER_MIN_CAP 0

#define TAIL_DEFAULT_OFFSET 10

typedef struct s_buffer
{
	int capacity;
	int size;
	char *content;
	
}				t_buffer;

/* 
	try to dump content into fd

	return [0 : succes | -1 : failure] 
*/
int
t_buffer_write_to(int fd, t_buffer *buff);

/* 
	try to dump content into fd from (size - offset) to size 
	
    return [0 : succes | -1 : failure] 
*/
int
t_buffer_write_from(int fd, t_buffer *buff, int offset);


/*
	try to open *file_name, read it, cache it into buffer, than close it.
    return [0 : succes | -1 : failure] 
*/
int
t_buffer_load_file(t_buffer *buff, char *file_name);

#endif

#include "../lib/bsq_interface.h"


t_file *fut_init(char *file_name)
{
	char 	*buffer;
	t_file 	*self;
	i16 	index;

	buffer = (char [BUFFER_SIZE]) {0};
	self   = (t_file*) malloc(sizeof(t_file));
	if(self == NULL)
		return (fut_dispose(self));
	self->fd = open(file_name, O_RDONLY);
	if (self->fd < 0)
		return (fut_dispose(self));
	self->byte_read = read(self->fd, buffer, BUFFER_SIZE);
	self->offset    = 0;
	self->is_open   = TRUE;
	self->content   = (i8*) malloc(sizeof(i8) * self->byte_read);
	index = 0;
	while (index < self->byte_read)
	{
		self->content[index] = buffer[index];
		++index;
	}
	return (self);
}


void fut_print(t_file *self)
{
	assert(self != NULL);
	write(STD_OUTPUT, self->content, self->byte_read);
}


void fut_debug(t_file *self, char *name)
{

	assert(self != NULL);
	__builtin_printf("\n\n---------- %s ----------\n\n",name);
	__builtin_printf("&self             : %p\n",&self);
	__builtin_printf("self->fd          : %d\n",self->fd);
	__builtin_printf("self->size        : %d\n",self->byte_read);
	__builtin_printf("self->is_open     : %s\n",(self->is_open == 1 ? "True" :"False"));
	__builtin_printf("\n\n---------- %s ----------\n\n",name);
	__builtin_printf("self->content     :\n%s\n",self->content);
}


void *fut_dispose(t_file *self)
{
	if(self != NULL)
	{
		if(self->fd > 0)
		{
			printf("fut_dispose : self->fd       : close : (@value : %-16d)",self->fd);
			close(self->fd);
			printf(" : SUCCESS fd closed\n");
			
		}
		if(self->content != NULL)
		{
			printf("fut_dispose : self->content  : free  : (@addr  : %-16p)",&self->content);
			free(self->content);
			printf(" : SUCCESS %d byte(s) freed\n",(self->byte_read));
			
		}
		printf("fut_dispose : self           : free  : (@addr  : %-16p)",&self);
		free(self);
		printf(" : SUCCESS %lu byte(s) freed\n\n",(sizeof(t_map)));
	}
	return (NULL);
}

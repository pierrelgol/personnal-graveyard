#include "../lib/bsq_interface.h"
#include "../lib/bsq_log.h"
#include "../lib/bsq_file.h"


t_file *file_init(char *file_name)
{
	char 	*buffer;
	t_file 	*self;
	i16 	index;

	buffer = (char [BUFFER_SIZE]) {0};
	index  = 0;
	self   = (t_file*) malloc(sizeof(t_file));
	if(self == NULL)
		return (file_dispose(self));

	self->fd = open(file_name, O_RDONLY);
	if (self->fd < 0)
		return (file_dispose(self));

	self->uuid 		= log_serialize(self);
	self->byte_read = read(self->fd, buffer, BUFFER_SIZE);
	self->offset    = 0;
	self->is_open   = TRUE;
	self->content   = (i8*) malloc(sizeof(i8) * self->byte_read);

	while (index < self->byte_read)
	{
		self->content[index] = buffer[index];
		++index;
	}

	if(DEBUG == TRUE)
	{
		log_alloc(OPT_FILE, OPT_MEM_ACCQUIRE, sizeof(t_file));
		log_alloc(OPT_FILE, OPT_MEM_ACCQUIRE, self->byte_read);
		log_from(self, OPT_FILE, __func__, __FILE__, __LINE__);
	}

	return (self);
}


void *file_dispose(t_file *self)
{
	if(self != NULL)
	{
		assert(self != NULL);
		if(self->fd > 0)
			close(self->fd);
		if(self->content != NULL)
		{
			
			assert(self->content != NULL);
			free(self->content);
			if(DEBUG == TRUE)
				log_alloc(OPT_FILE, OPT_MEM_RELEASE, self->byte_read);
		}
		assert(self != NULL);
		free(self);
		if(DEBUG == TRUE)
			log_alloc(OPT_FILE, OPT_MEM_RELEASE, sizeof(t_file));
	}
	return (NULL);
}

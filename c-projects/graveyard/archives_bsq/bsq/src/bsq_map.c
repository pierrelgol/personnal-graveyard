#include "../lib/bsq_interface.h"
#include "../lib/bsq_map.h"
#include "../lib/bsq_log.h"



t_map 	*map_init(t_file *file)
{
	t_map *self;

	self = (t_map*) malloc(sizeof(t_map));
	if(self == NULL)
		return (map_dispose(self));

	*self = (t_map){.uuid     = log_serialize(self), 
					.width    = 0, 
					.height   = 0,
					.empt     = 0,
					.full     = 0,
					.obst     = 0,
					.is_valid = TRUE,
					.heat_map = NULL
				   };

	map_metadata(self, file);
	map_validate(self, file);
	map_heat_map(self, file);

	if(self->is_valid == TRUE)
	{
		if(DEBUG == TRUE)
		{
			log_alloc(OPT_MAP, OPT_MEM_ACCQUIRE, sizeof(t_map));
			log_from(self, OPT_MAP, __func__, __FILE__, __LINE__);
		}
		return (self);
	}
	else
		return (map_dispose(self));
}


void	map_metadata(t_map *self, t_file *file) 
{ 	
	assert(self != NULL);
	assert(file != NULL);
	assert(file->content != NULL);

	i32 index;
	i8 *meta;
	
	index = 0;
	meta  = file->content;

	while(meta[index] >= '0' && meta[index] <= '9')
	{
		self->width = (self->width * 10) + (meta[index] - '0');
		++index;
	}

	self->height = self->width;
	self->empt = meta[index++];
	self->obst = meta[index++];
	self->full = meta[index++];
	file->offset = index + 1;

	if(DEBUG == TRUE)
		log_from(self, OPT_MAP, __func__, __FILE__, __LINE__);
}


void 	map_validate(t_map *self, t_file *file)
{
	assert(self 		 != NULL);
	assert(file 		 != NULL);
	assert(file->content != NULL);

	i16 index;
	i16 row;
	i16 size;
	i8 	*map;
	i8 	n;
	
	index = 0;
	row   = 0;
	map   = &(file->content[file->offset]);
	size  = self->width * self->height + self->height;

	while(index < size && self->is_valid == TRUE)
	{
		n = map[index];
		if(n == self->empt || n == self->obst)
			++index;
		else if(((index % self->width) == row++) && (n == '\n' || n == '\r'))
			++index;
		else
			break;
	}

	if(index == (file->byte_read - file->offset))
		self->is_valid = TRUE;
	else
		self->is_valid = FALSE;

	if(DEBUG == TRUE)
		log_from(self, OPT_MAP, __func__, __FILE__, __LINE__);
}


void	map_heat_map(t_map *self, t_file *file)
{
	assert(self != NULL);
	assert(file != NULL);
	assert(file->content != NULL);

	i16 index;
	i16 size;
	i8 *pcontent;

	size           = (self->width * self->height + self->height);
	self->heat_map = (i8*) malloc(sizeof(i8) * size);

	if(self->heat_map == NULL)
		self->is_valid = FALSE;

	pcontent 	   = &file->content[file->offset];
	index    	   = 0;

	while(index < size)
	{
		if(pcontent[index] == self->empt)
			self->heat_map[index] = EMPT_VAL;
		else if (pcontent[index] == self->obst)
			self->heat_map[index] = OBST_VAL;
		else if (pcontent[index] == '\n' || pcontent[index] == '\r')
			self->heat_map[index] = OBST_VAL;
		++index;
	}

	if(DEBUG == TRUE)
	{
		log_from(self, OPT_MAP, __func__, __FILE__, __LINE__);
		log_alloc(OPT_MAP, OPT_MEM_ACCQUIRE, (sizeof(i8) * size));
	}
}


void 	*map_dispose(t_map *self)
{

	if(self != NULL)
	{
		if(self->heat_map != NULL)
		{
			assert(self->heat_map != NULL);
			free(self->heat_map);
			if(DEBUG == TRUE)
				log_alloc(OPT_MAP, OPT_MEM_RELEASE, ((self->width * self->height) + self->height));
		}
		assert(self != NULL);
		free(self);
		if(DEBUG == TRUE)
			log_alloc(OPT_MAP, OPT_MEM_RELEASE, sizeof(t_map));
	}
	return (NULL);
}

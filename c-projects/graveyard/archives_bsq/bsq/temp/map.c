#include "../lib/bsq_map.h"


t_map 	*map_init(t_file *file)
{
	t_map *self;

	self = (t_map*) malloc(sizeof(t_map));
	if(self == NULL)
		return (map_dispose(self));
	*self = (t_map){.empt = 0,  .full = 0,  .obst = 0,  .is_valid = 1,  .size = 0,  .heat_map = NULL};

	map_metadata(self, file);
	map_validate(self, file);

	assert(self != NULL);
	assert(file != NULL);
	if(self->is_valid == TRUE)
	{
		map_heat_map(self, file);
		return (self);
	}
	else
		return (map_dispose(self));
}


void	map_metadata(t_map *self, t_file *file) 
{ 	
	assert(self != NULL);
	assert(file != NULL);

	i32 index;
	i8 *meta;
	
	index = 0;
	meta  = file->content;
	while(meta[index] >= '0' && meta[index] <= '9')
	{
		self->size = (self->size * 10) + (meta[index] - '0');
		++index;
	}
	self->empt = meta[index++];
	self->obst = meta[index++];
	self->full = meta[index++];
	file->offset = index + 1;
}


void 	map_validate(t_map *self, t_file *file)
{
	assert(self != NULL);
	assert(file != NULL);
	assert(file->content != NULL);

	i16 index;
	i16 row;
	i16 size;
	i8 	*map;
	i8 	n;
	
	index = 0;
	row   = 0;
	map   = &(file->content[file->offset]);
	size  = self->size * self->size + self->size;
	while(index < size && self->is_valid == TRUE)
	{
		n = map[index];
		if(n == self->empt || n == self->obst)
			++index;
		else if(((index % self->size) == row++) && (n == '\n' || n == '\r'))
			++index;
		else
			break;
	}
	if(index == (file->byte_read - file->offset))
		self->is_valid = TRUE;
	else
		self->is_valid = FALSE;
}


void	map_heat_map(t_map *self, t_file *file)
{
	assert(self != NULL);
	assert(file != NULL);
	assert(file->content != NULL);

	i16 index;
	i16 size;
	i8 *pcontent;

	size           = (self->size * self->size + self->size);
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

		if(((index + 1) % (self->size + 1)) == 0)
			printf("%d\n",self->heat_map[index]);
		else
			printf("%d",self->heat_map[index]);
		++index;
			
	}

}



void 	*map_dispose(t_map *self)
{
	assert(self != NULL);
	assert(self->heat_map != NULL);
	if(self != NULL)
	{
		if(self->heat_map != NULL)
		{
			printf("map_dispose : self->heat_map : free  : (@addr  : %-16p)",&self->heat_map);
			free(self->heat_map);		
			printf(" : SUCCESS %d byte freed\n",(self->size * self->size));
			
		}
		printf("map_dispose : self           : free  : (@addr  : %-16p)",&self);
		free(self);
		printf(" : SUCCESS %lu byte freed\n\n",(sizeof(t_map)));
	}
	return (NULL);
}








void	map_debug(t_map *self, i8 *name)
{

	assert(self != NULL);
	assert(self->heat_map != NULL);
	__builtin_printf("\n\n---------- %s ----------\n\n",name);
	__builtin_printf("&map              : %p\n",&self);
	__builtin_printf("map->empt         : %c\n",self->empt);
	__builtin_printf("map->obst         : %c\n",self->obst);
	__builtin_printf("map->full         : %c\n",self->full);
	__builtin_printf("map->size         : %d\n",self->size);
	__builtin_printf("map->is_valid     : %s\n",(self->is_valid == 1 ? "True" :"False"));
	__builtin_printf("\n\n---------- %s ----------\n\n",name);
	__builtin_printf("&map->file        :\n%p\n",&self->heat_map);
	__builtin_printf("map->file->content:\n%s\n",self->heat_map);
}



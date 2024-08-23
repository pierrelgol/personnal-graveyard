#include "bsq.h"
#include "bsq_map.h"
#include "bsq_log.h"


t_map	*map_constructor(t_file *file)
{
	assert(file != NULL);
	assert(file->content != NULL);
	assert(file->is_valid == TRUE);
	assert(file->offset < file->size);

	t_map 	*self;

	self = (t_map*) malloc(sizeof(t_map));
	if(self == NULL)
		return (map_destructor(&self));
	*self = (t_map){0, 0, 0, 0, 0, TRUE, NULL};

	if(self->is_valid != FALSE)
		map_extract(self, file);
	if(self->is_valid != FALSE)
		map_certify(self, file);		
	if(self->is_valid != FALSE)
		map_togrid(self, file);	

	if(self->is_valid == FALSE)
	{
		assert(self != NULL);
		return (map_destructor(&self));
	}
	else
	{
		assert(self != NULL);
		assert(self->grid != NULL);
		assert(self->height == self->width);
		assert(file != NULL);
		assert(file->content != NULL);
		assert(file->is_valid == TRUE);
		assert(file->offset < file->size);

		return (self);
	}
}


void	map_extract(t_map *self, t_file *file)
{
	assert(file->content != NULL);
	assert(file->is_valid == TRUE);
	assert(file->offset < file->size);
	assert(self != NULL);

	i16 	offset;
	i8 		*pcont;

	offset = 0;
	pcont  = file->content;
	while(pcont[offset] >= '0' && pcont[offset] <= '9')
	{
		self->width = (self->width * 10) + (pcont[offset] - '0');
		++offset;
	}
	self->empt_char = pcont[offset++];
	self->obst_char = pcont[offset++];	
	self->full_char = pcont[offset++];
	file->offset = offset + 1;
}


void	map_certify(t_map *self, t_file *file)
{
	assert(file->content != NULL);
	assert(file->is_valid == TRUE);
	assert(file->offset < file->size);
	assert(self != NULL);
	assert(self->is_valid == TRUE);

	i32 	index;
	i32 	size;
	i8  	ch;

	index = file->offset;
	size = file->size;
	while(index < size && self->is_valid == TRUE)
	{
		ch = file->content[index];
		if(ch == self->empt_char || ch == self->obst_char)
			++index;
		else if (ch == '\n' || ch == '\r')
		{
			self->height++;
			++index;
		}
		else
			self->is_valid = FALSE;
	}
	if(self->height != self->width || (index - file->offset) != (self->width * self->height + self->height))
		self->is_valid = FALSE;
}


void	map_togrid(t_map *self, t_file *file)
{
	assert(file->content != NULL);
	assert(file->is_valid == TRUE);
	assert(file->offset < file->size);
	assert(self != NULL);
	assert(self->is_valid == TRUE);


	i8		*pcont;
	i16 	row;
	i16 	col;
	i16		index;

	index = 0;
	row = 0;
	col = 0;
    pcont = &file->content[(i16)file->offset];
    self->grid = (i8**)malloc(sizeof(i8*) * self->height);

	while(row < self->height)
		self->grid[row++] = (i8*) malloc(sizeof(i8) * self->width);

	row = 0;
	while(row < self->height)
	{
		col = 0;
		while(col < self->width)
		{
			if(pcont[index] == '\n' || pcont[index] == '\r' )
				index++;
			if(pcont[index] == self->empt_char)
				self->grid[row][col] = EMPT_GRID_VALUE;
			if(pcont[index] == self->obst_char)
				self->grid[row][col] = OBST_GRID_VALUE;
			index++;
			col++;
		}
		row++;
	}
}


// void	map_togrid(t_map *self, t_file *file)
// {
// 	assert(file->content != NULL);
// 	assert(file->is_valid == TRUE);
// 	assert(file->offset < file->size);
// 	assert(self != NULL);
// 	assert(self->is_valid == TRUE);


// 	i32 	index;
// 	i32 	size;
// 	i8		*pcont;

//     index = 0;
//     size = self->width * self->height + self->height;
//     pcont = &file->content[(i16)file->offset];
//     self->grid = (i8*)malloc(sizeof(i8) * size);
//     if(self->grid == NULL)
// 	{
// 		self->is_valid = FALSE;
// 		return ;
// 	}
// 	assert(self->grid != NULL);
// 	while(index < size)
// 	{
// 		if(pcont[index] == self->empt_char)
// 			self->grid[index] = EMPT_GRID_VALUE;
// 		else if(pcont[index] == self->obst_char)
// 			self->grid[index] = OBST_GRID_VALUE;
// 		else if (pcont[index] == '\n' || pcont[index] == '\r')
// 			self->grid[index] = OBST_GRID_VALUE;
// 		++index;
// 	}
// }


t_map	*map_destructor(t_map **self)
{
	i16 row;

	if((*self) != NULL)
	{
		if((*self)->grid != NULL)
		{
			row = 0;
			while(row < (*self)->height)
					free((*self)->grid[row++]);
			assert((*self)->grid != NULL);
			free((*self)->grid);
		}
		assert((*self) != NULL);
		free((*self));
	}
	(*self) = NULL;
	return (*self);
}


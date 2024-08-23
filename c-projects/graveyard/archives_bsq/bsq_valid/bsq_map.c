#include "bsq.h"
#include "bsq_map.h"
#include "bsq_log.h"


t_map 	*map_init(t_file *file)
{
	t_map *self;
	int   index;

	self = (t_map*) calloc(1, sizeof(t_map));
	while(file->data[self->offset] >= '0' && file->data[self->offset] <= '9' )
		self->lcount = (file->data[self->offset++] - '0') + (self->lcount * 10);
	self->empt = file->data[self->offset++];
	self->obst = file->data[self->offset++];
	self->full = file->data[self->offset++];
	self->offset += 1;
	while(file->data[self->offset + self->col++] != '\n');
	self->grid = (char**) calloc(self->lcount, sizeof(char*));
	while(self->row < self->lcount)
	{
		self->grid[self->row] = (char*) calloc(self->col, sizeof(char));
		index = -1;
		while(++index < self->col)
			if (file->data[(index + self->row * self->col) + self->offset] == self->empt)
				self->grid[self->row][index] = 1;
		++self->row;
	}
	if((self->col * self->row + self->offset) != file->count)
		return(map_dispose(&self));
	return(self);
}



void 	*map_dispose(t_map **self)
{
	int row;

	row = 0;
	if((*self) != NULL)
	{
		if((*self)->grid != NULL)
		{
			while(row < (*self)->row)
				free((*self)->grid[row++]);
			free((*self)->grid);
		}
		free((*self));
	}
	*self = NULL;
	return(NULL);
}


void	map_print(t_map *self)
{
	int row;
	int col;
	int count;
	
	count = 0;
	if(self != NULL && self->grid != NULL)
	{
		row = 0;
		while(row < self->row)
		{
			col = 0;
			while(col < self->col)
			{
				printf("%d,",self->grid[row][col++]);
				++count;
			}
			printf("\n");
			++row;
		}
	}
	log_message(LOG_INFO,"print count = %d",count);
}

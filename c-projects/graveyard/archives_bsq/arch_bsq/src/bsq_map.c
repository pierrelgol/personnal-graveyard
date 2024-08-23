#include "../lib/bsq_map.h"
#include "../lib/bsq_log.h"


bool map_init(t_config *cfg, t_map *self, t_file *file)
{
	int   index;

	self->grid = (char**) calloc(cfg->lrow, sizeof(char*));
	if(self->grid == NULL)
		return (false);

	index = cfg->offset;
	while(self->x < cfg->lrow)
	{
		self->grid[self->x] = (char*) calloc(cfg->lcol, sizeof(char));
		if(self->grid[self->x] == NULL)
			return (!map_dispose(self));

		self->y = 0;
		while(self->y < cfg->lcol)
		{
			if (file->data[index++] == cfg->empt)
				self->grid[self->x][self->y] = 1;
			++self->y;
		}
		++self->x;
	}
	return(true);
}


bool 	map_dispose(t_map *self)
{
	int row;

	row = 0;
	if(self->grid != NULL)
	{
		while(row < self->x)
			free(self->grid[row++]);
		free(self->grid);

		return (true);
	}

	return (false);
}


void	map_print(t_map *self)
{
	int row;
	int col;
	
	if(self != NULL && self->grid != NULL)
	{
		row = 0;
		while(row < self->x)
		{
			col = 0;
			while(col < self->y)
				printf("%d,",self->grid[row][col++]);
			printf("\n");
			++row;
		}
	}
}

// #define WHITE    "\033[38;2;255;255;255m"
// #define YELLOW   "\033[38;2;255;255;0m"
// #define ORANGE   "\033[38;2;255;165;0m"
// #define RED      "\033[38;2;255;0;0m"
// #define DARK_RED "\033[38;2;139;0;0m"

// void	map_print(t_map *self)
// {
// 	int row;
// 	int col;
// 	int value;
	
// 	if(self != NULL && self->grid != NULL)
// 	{
// 		row = 0;
// 		while(row < self->x)
// 		{
// 			col = 0;
// 			while(col < self->y)
// 			{
// 				value = self->grid[row][col++];
// 				if(value == 0)
// 					printf("%s%d,",WHITE,value);
// 				if(value == 1)
// 					printf("%s%d,",YELLOW,value);
// 				if(value == 2)
// 					printf("%s%d,",ORANGE,value);
// 				if(value == 3)
// 					printf("%s%d,",RED,value);
// 				if(value > 3)
// 					printf("%s%d,",DARK_RED,value);
// 			}
// 			printf("\n");
// 			++row;
// 		}
// 	}
// }

#include "../lib/bsq_interface.h"
#include "../lib/bsq_core.h"
#include "../lib/bsq_log.h"


void bsq_solve(t_map *map, t_file *file)
{
	assert(map != NULL);
	assert(map->heat_map != NULL);
	assert(file->content != NULL);
	assert(file->is_open == TRUE);


	i16 index;
	i16 row;
	i16 col;
	i16 size;
	i8  a;
	i8  b;
	i8  c;

	a = 0;
	b = 0;
	c = 0;
	size = map->width * map->height + map->height;
	index = 0;
	row = 0;
	while(index < size)
	{
		col = 0;
		while(col < map->width)
		{
			if(bsq_is_obst(map, index) == TRUE)
			{
				++index;
				++col;
			}
			a = map->heat_map[bsq_cartoi(col - 1, row, map->width)];
			b = map->heat_map[bsq_cartoi(col - 1, row - 1, map->width)];
			c = map->heat_map[bsq_cartoi(col, row - 1, map->width)];
			
			map->heat_map[index] = bsq_vmin(a, b, c) + 1;
			// sleep(1);
			// log_content(map->heat_map, index, map->width, OPT_AS_INT);
			index++;
			col++;
			
		}
		row++;
	}
}

i16		bsq_cartoi(i8 col, i8 row, i16 width)
{
	if(row < 0 && col < 0)
		return (width);
	else if(row < 0)
		return (width);
	else if(col < 0)
		return (width);
	else
		return (row * width + col);
}

i8	 	bsq_vmin(i8 c1, i8 c2, i8 c3)
{
	i8 min;

	min = c1;
	if(c2 < min)
		min = c2;
	else if(c3 < min)
		min = c3;

	return (min);
}


i8 	bsq_is_obst(t_map *map, i16 index)
{
	assert(map != NULL);
	assert(map->heat_map != NULL);
	assert(index < (map->width * map->height +map->height));
	
	if(index < 0)
		return(TRUE);
	else if(map->heat_map[index] == 0 || map->heat_map[index] == '\n' || map->heat_map[index] == '\r')
		return (TRUE);
	else
		return (FALSE);
}



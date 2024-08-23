#include "../lib/bsq_map.h"


bool 	map_init(t_map *map, t_file *file)
{
	while(file->buffer[map->off] >= '0' && file->buffer[map->off] <= '9')
		map->nrow = (file->buffer[map->off++] - '0') + (map->nrow * 10);
	map->empt = file->buffer[map->off++];
	map->obst = file->buffer[map->off++];
	map->full = file->buffer[map->off++];
	map->off += 1;

	while(file->buffer[map->off + map->ncol++] != '\n');
	if(!map_check(map, file->buffer, file->size))
		return(!map_dispose(map));

	if(!map_grid(map, file->buffer))
		return(!map_dispose(map));

	map->valid = true;
	return (true);
}


bool	map_check(t_map *m, char *data, int size)
{
	char ch;

	if(m->empt == m->obst || m->empt == m->full || m->full == m->obst)
		return(false);
	if(m->empt < 32 || m->obst < 32 || m->full < 32)
		return (false);
	if(m->empt > 127 || m->obst > 127 || m->full > 127)
		return (false);
	if((m->nrow * m->ncol + m->off) != size)
		return (false);

	m->index = m->off;
	while(m->index < size)
	{
		ch = data[m->index];
		if(ch == m->empt || ch == m->obst || ch == '\n' || ch == '\0')
			m->valid = true;
		else
			return (false);
		++m->index;
	}	
	return (true);
}


bool	map_grid(t_map *map, char *data)
{	
	map->grid = (char**) calloc(map->nrow, sizeof(char*));
	if(map->grid == NULL)
		return (map_dispose(map));

	map->index = map->off;
	while(map->row < map->nrow)
	{
		map->grid[map->row] = (char*) calloc(map->ncol, sizeof(char*));
		if(map->grid[map->row] == NULL)
			return (!map_dispose(map));

		map->col = 0;
		while(map->col < map->ncol)
		{
			if(data[map->index++] == map->empt)
				map->grid[map->row][map->col] = 1;
			++map->col;	
		}
		++map->row;
	}
	return (true);
}


bool	map_dispose(t_map *map)
{
	map->row = 0;
	map->valid = false;
	if(map->grid != NULL)
	{
		while(map->row < map->nrow)
			free(map->grid[map->row++]);
		free(map->grid);
		return (true);
	}
	return (false);		
}

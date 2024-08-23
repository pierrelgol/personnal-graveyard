#include "../lib/bsq_core.h"
#include "../lib/bsq_log.h"


bool	core_solve(t_map *map)
{

	map->row = 1;
	while(map->row < map->nrow)
	{
		map->col = 1;
		while(map->col < map->ncol)
		{
			if(map->grid[map->row][map->col] != 0)
				core_update(map);
			++map->col;
		}
		++map->row;
	}
	if(map->bsq_col == 0 && map->bsq_row == 0 && map->bsq_max == 0)
		map->valid = false;

	return (true);
}


static inline void	core_update(t_map *m)
{
	int min;
	int v1;
	int v2;
	int v3;

	v1 = m->grid[m->row - 1][m->col - 1];
	v2 = m->grid[m->row - 1][m->col - 0];
	v3 = m->grid[m->row - 0][m->col - 1];
	if(v1 != 0 && v2 != 0 && v3 != 0)
	{
		min = MIN3(v1,v2,v3) + 1;
		if(min > m->bsq_max)
		{
			m->bsq_row = m->row;
			m->bsq_col = m->col;
			m->bsq_max = min;
		}
		m->grid[m->row][m->col] = min;
	}
	else
		m->grid[m->row][m->col] = 1;
}

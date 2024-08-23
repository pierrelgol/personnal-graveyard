#include "../lib/bsq_core.h"
#include "../lib/bsq_log.h"


bool	core_search_bsq(t_config *cfg, t_map *map)
{
	int row;
	int col;
	int v1;
	int v2;
	int v3;

	row = 0;
	while(row < cfg->lrow)
	{
		col = 0;
		while(col < cfg->lcol)
		{
			v1 = core_assign_value(row - 1, col - 1, map);
			v2 = core_assign_value(row - 1, col - 0, map);
			v3 = core_assign_value(row - 0, col - 1, map);
			if(core_assign_value(row, col, map) != 0)
				map->grid[row][col] = core_assign_min(v1, v2, v3);
			++col;
		}
		++row;
	}

	return (true);
}


int		core_assign_min(int v1, int v2, int v3)
{
	int min;

	min = v1;
	if(v2 < min)
		min = v2;
	if(v3 < min)
		min = v3;

	return (min + 1);
}

int		core_assign_value(int row, int col, t_map *map)
{
	if(row < 0 || col < 0 || col == map->y)
		return (0);
	return (map->grid[row][col]);
}


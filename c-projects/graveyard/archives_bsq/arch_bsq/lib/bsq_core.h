#ifndef BSQ_CORE_H
#define BSQ_CORE_H
#include "bsq.h"

bool	core_search_bsq(t_config *cfg, t_map *map);
int		core_assign_min(int v1, int v2, int v3);
int 	core_assign_value(int row, int col, t_map *map);


#endif

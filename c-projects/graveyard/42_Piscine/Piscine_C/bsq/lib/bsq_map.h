#ifndef BSQ_MAP_H
#define BSQ_MAP_H
#include "bsq.h"


/**

	for quick debugging :

	log_message(LOG_INFO, "map->empt    = %c",map->empt);
	log_message(LOG_INFO, "map->obst    = %c",map->obst);
	log_message(LOG_INFO, "map->full    = %c",map->full);
	log_message(LOG_INFO, "map->valid   = %c",map->valid);
	log_message(LOG_INFO, "map->off     = %c",map->off);
	log_message(LOG_INFO, "map->index   = %c",map->index);
	log_message(LOG_INFO, "map->ncol    = %c",map->ncol);
	log_message(LOG_INFO, "map->nrow    = %c",map->nrow);
	log_message(LOG_INFO, "map->row     = %c",map->row);
	log_message(LOG_INFO, "map->col     = %c",map->col);
	log_message(LOG_INFO, "map->bsq_row = %c",map->bsq_row);
	log_message(LOG_INFO, "map->bsq_col = %c",map->bsq_col);
	log_message(LOG_INFO, "map->bsq_max = %c",map->bsq_max);
	
*/

bool 	map_init(t_map *map, t_file *file);
bool	map_check(t_map *map, char *data, int size);
bool	map_grid(t_map *map, char *data);
bool	map_dispose(t_map *map);

#endif

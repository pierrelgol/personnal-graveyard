#ifndef BSQ_MAP_H
#define BSQ_MAP_H
#include "bsq.h"

bool 	map_init(t_config *cfg, t_map *self, t_file *file);
void	map_print(t_map *self);
bool 	map_dispose(t_map *self);



#endif

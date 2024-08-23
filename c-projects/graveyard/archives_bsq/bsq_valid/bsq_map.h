#ifndef BSQ_MAP_H
#define BSQ_MAP_H
#include "bsq.h"

t_map *map_init(t_file *file);

void	map_print(t_map *self);

void *map_dispose(t_map **self);



#endif

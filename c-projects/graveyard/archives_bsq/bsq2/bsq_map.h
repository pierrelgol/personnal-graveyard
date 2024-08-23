#ifndef MAP_H
#define MAP_H
#include "bsq.h"

t_map	*map_constructor(t_file *file);

void	map_extract(t_map *self, t_file *file);
void	map_certify(t_map *self, t_file *file);
void	map_togrid(t_map *self, t_file *file);

t_map	*map_destructor(t_map **self);


#endif


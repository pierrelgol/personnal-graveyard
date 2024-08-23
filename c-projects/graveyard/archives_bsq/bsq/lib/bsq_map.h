#ifndef MAP_H
#define MAP_H
#include "bsq_interface.h"

t_map 			*map_init(t_file *file);
void 			map_metadata(t_map *self, t_file *file);
void 			map_validate(t_map *self, t_file *file);
void			map_heat_map(t_map *self, t_file *file);
void			*map_dispose(t_map *self);

#endif

#ifndef BSQ_CORE_H
#define BSQ_CORE_H
#include "bsq_interface.h"


void 	bsq_solve(t_map *map, t_file *file);
i8	 	bsq_is_obst(t_map *map, i16 index);
i16		bsq_cartoi(i8 col, i8 row, i16 width);
i8	 	bsq_vmin(i8 c1, i8 c2, i8 c3);


#endif

#ifndef BSQ_CORE_H
#define BSQ_CORE_H
#include "bsq.h"

#define MIN3(a, b, c) ((a) < (b) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c)))

bool	core_solve(t_map *map);
static inline void	core_update(t_map *map);
bool core_overwrite(t_map *m, t_file *file);

#endif

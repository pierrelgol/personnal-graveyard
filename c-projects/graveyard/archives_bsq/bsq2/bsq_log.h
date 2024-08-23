#ifndef BSQ_LOG_H
#define BSQ_LOG_H
#include "bsq.h"



void 	log_file(t_file *file);
void 	log_map(t_map *map, enum e_fmt as);
void	log_content(i8 *content, i8 row, i8 col, enum e_fmt as);

#endif


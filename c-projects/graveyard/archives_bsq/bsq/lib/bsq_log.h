#ifndef BSQ_LOG_H
#define BSQ_LOG_H
#include "bsq_interface.h"



void 	log_file(t_file *file);
void 	log_map(t_map *map);
void	log_from(void *obj, t_opt opt, const i8 *foo, i8* fname, i32 line);
void 	log_alloc(t_opt opt, t_opt cmd, u32 size);
void 	log_content(i8* content, i16 size, i16 nrow, t_opt opt);
i16 	log_serialize(void *obj);

#endif

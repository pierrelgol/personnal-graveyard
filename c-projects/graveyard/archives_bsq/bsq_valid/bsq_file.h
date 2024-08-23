#ifndef BSQ_FILE_H
#define BSQ_FILE_H
#include "bsq.h"

t_file *file_init(const char *path_to_file, char *buffer);
void	*file_dispose(t_file **self);


#endif
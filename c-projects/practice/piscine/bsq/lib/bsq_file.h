#ifndef BSQ_FILE_H
#define BSQ_FILE_H
#include "bsq.h"

bool	file_open(t_file *file, const char *path);
bool	file_read(t_file *file, short fd);
bool	file_write(t_file *file, short fd);
bool	file_dispose(t_file *file);

#endif

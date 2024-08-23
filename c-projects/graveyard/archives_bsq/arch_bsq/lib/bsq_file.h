#ifndef BSQ_FILE_H
#define BSQ_FILE_H
#include "bsq.h"

bool file_open(t_file *self, const char *path_to_file, char *buffer);
bool file_close(t_file *self);

#endif
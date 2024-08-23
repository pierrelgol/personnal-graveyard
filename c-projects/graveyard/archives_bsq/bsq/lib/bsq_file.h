#ifndef BSQ_FILE_H
#define BSQ_FILE_H
#include "bsq_interface.h"


t_file 	*file_init(char *file_name);
void 	*file_dispose(t_file *self);

// void 	file_print(t_file *self);
// void 	file_debug(t_file *self, char *name);

#endif

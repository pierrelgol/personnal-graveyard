#ifndef BSQ_FILE_H
#define BSQ_FILE_H
#include "bsq.h"


t_file 			*file_constructor(i8 *path_to_file, t_buffer *buffer);
t_file 	 		*file_destructor(t_file **self);


#endif


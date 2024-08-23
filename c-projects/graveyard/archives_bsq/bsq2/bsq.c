#include "bsq.h"
#include "bsq_file.h"
#include "bsq_map.h"
#include "bsq_log.h"





int main(int argc, char **argv)
{	
	t_file 	*file;
	t_map 	*map;
	t_buffer buffer;
	i32 	index;

	index = 1;
	buffer.capacity = BUFFER_SIZE;
	buffer.size = 0;
	buffer.content = (i8 [BUFFER_SIZE]){0};

	while(index < argc)
	{
		file = NULL;
		map  = NULL;
		file = file_constructor(argv[index], &buffer);
		map  = map_constructor(file);
		map_destructor(&map);
		file_destructor(&file);
		++index;
	}		
	return (EXIT_SUCCESS);
}

#include "../lib/bsq_core.h"
#include "../lib/bsq_file_utils.h"
#include "../lib/bsq_map.h"


int main(int ac, char **av)
{
	t_file 	*file;
	t_map 	*map;
	i32 	index;


	index = 1;
	while(index < ac)
	{
		file = NULL;
		map  = NULL;
		file = fut_init(av[index]);
		map  = map_init(file);
		fut_debug(file, av[index]);
		map_debug(map, av[index]);
		map_dispose(map);
		fut_dispose(file);
		++index;
	}

	return (SIG_SUCCESS);
}


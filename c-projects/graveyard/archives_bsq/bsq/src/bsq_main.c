#include "../lib/bsq_interface.h"
#include "../lib/bsq_core.h"
#include "../lib/bsq_file.h"
#include "../lib/bsq_map.h"
#include "../lib/bsq_log.h"


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
		file = file_init(av[index]);
		map  = map_init(file);
		log_content(file->content, file->byte_read, OPT_NONE, OPT_AS_CHAR);
		log_content(map->heat_map, (map->width * map->width + map->height), map->width, OPT_AS_INT);
		bsq_solve(map, file);
		log_content(file->content, file->byte_read, OPT_NONE, OPT_AS_CHAR);
		map_dispose(map);
		file_dispose(file);
		++index;
	}
	if (DEBUG == TRUE)
		log_alloc(-1, OPT_ASSERT_NO_LEAK, 0);

	return (SIG_SUCCESS);
}


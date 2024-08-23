#include "../lib/bsq.h"
#include "../lib/bsq_file.h"
#include "../lib/bsq_config.h"
#include "../lib/bsq_map.h"
#include "../lib/bsq_core.h"
#include "../lib/bsq_log.h"




int main(int argc, char **argv)
{
	t_file 		 file;
	t_config	 config;
	t_map 		 map;
	char 		*buffer;
	int 		 index;

	buffer = (char[BUFFCAP]){0};
	index  = 1;

	if(argc > 1)
	{
		while(index < argc)
		{

			file   = (t_file   ){0,0,0,0};
			config = (t_config ){0,0,0,0,0,0,0,0};
			map    = (t_map    ){0,0,NULL};

			if(file_open(&file, argv[index], buffer) == true)
			{
			    if(config_extract(&config, &file) == true)
				{
					if(map_init(&config, &map, &file) == true)
					{
						// map_print(&map);
						core_search_bsq(&config, &map);
						map_print(&map);
						map_dispose(&map);
					}
				}				
			}
			++index;
		}
	}

	return (EXIT_SUCCESS);
}

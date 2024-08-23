#include "bsq.h"
#include "bsq_file.h"
#include "bsq_map.h"
#include "bsq_log.h"




int main(int argc, char **argv)
{
	t_file 		*file;
	t_map 		*map;
	char 		*buffer;
	int 		 index;

	file   = NULL;
	map	   = NULL;
	buffer = (char[BUFFCAP]){0};
	index  = 1;
	log_message(LOG_INFO,"Start of : %s",argv[0]);
	if(argc > 1)
	{
		while(index < argc)
		{
			log_message(LOG_INFO,"Loading ressources from : %s",argv[index]);
			file = file_init(argv[index],buffer);
			map  = map_init(file);
			log_message(LOG_INFO,"%s",file->data);
			map_print(map);
			log_message(LOG_INFO,"Deleting ressources from : %s",argv[index]);
			map_dispose(&map);
			file_dispose(&file);
			++index;
		}
	}

	log_message(LOG_INFO,"Exiting Program");
	return (EXIT_SUCCESS);
}

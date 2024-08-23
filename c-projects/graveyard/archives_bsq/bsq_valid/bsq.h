#ifndef BSQ_H
#define BSQ_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>

#define BUFFCAP 16384

typedef struct s_file
{
	int 		fd;
	int 		count;
	bool 		is_open;
	char		*data;
	
}			   t_file;

typedef struct s_map
{
	char	empt;
	char	obst;
	char	full;
	bool	is_valid;
	int 	row;
	int		col;
	int		offset;
	int		lcount;
	char	**grid;

}			   t_map;


#endif

#ifndef BSQ_H
#define BSQ_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>

#define BUFFCAP 64000

typedef struct s_file
{
	int 		fd;
	int 		count;
	bool 		is_open;
	char		*data;
	
}			   t_file;

typedef struct s_config
{
	char	empt;
	char	obst;
	char	full;
	int		offset;
	int 	lcol;
	int		lrow;
	int		lines;
	bool	is_valid;
	
}			   t_config;


typedef struct s_map
{
	int 	x;
	int		y;
	char	**grid;

}			   t_map;


#endif

#ifndef BSQ_H
#define BSQ_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>
#include <stdio.h>

#define STD_INP 0
#define STD_OUT 1
#define STD_ERR 2

#define WHITE    "\033[38;2;255;255;255m"
#define YELLOW   "\033[38;2;255;255;0m"
#define ORANGE   "\033[38;2;255;165;0m"
#define RED      "\033[38;2;255;0;0m"
#define DARK_RED "\033[38;2;139;0;0m"

#define BUFFER_SIZE 16384
#define MAP_ERROR "map error\n"

typedef struct s_file
{
	int 		size;
	short 		fd;
	bool		valid;
	bool		open;
	char		*buffer;
	
}			   t_file;

typedef struct s_map
{
	char	empt;
	char	obst;
	char	full;
	bool	valid;
	int		off;
	int 	index;
	int 	ncol;
	int		nrow;
	int 	row;
	int		col;
	int		bsq_row;
	int		bsq_col;
	int		bsq_max;
	char	**grid;

}			   t_map;


void	bsq_update_result(t_map *map, t_file *file);
void	bsq_map_print(t_map *map);
void	bsq_map_print_pretty(t_map *map);


#endif


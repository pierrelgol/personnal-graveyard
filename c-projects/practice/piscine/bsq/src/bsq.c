#include "../lib/bsq.h"
#include "../lib/bsq_log.h"
#include "../lib/bsq_file.h"
#include "../lib/bsq_map.h"
#include "../lib/bsq_core.h"


void	bsq_update_result(t_map *map, t_file *file)
{
	int row;
	int col;
	
	row = 0;
	while(row < map->nrow)
	{
		col = 0;
		while(col < map->ncol)
		{
			if((row > (map->bsq_row - map->bsq_max) && row <= map->bsq_row) 
			&& (col > (map->bsq_col - map->bsq_max) && col <= map->bsq_col ))
				file->buffer[(row * map->ncol + col) + map->off] = map->full;

			// else if (map->grid[row][col] == 0)
			// {
			// 	if((col + 1) == map->ncol)
			// 		file->buffer[(row * map->ncol + col) + map->off] = '\n';
			// 	else
			// 		file->buffer[(row * map->ncol + col) + map->off] = map->obst;
			// }
			// else
			// 	file->buffer[(row * map->ncol + col) + map->off] = map->empt;
			++col;
		}

		++row;
	}
}


void	bsq_map_print(t_map *map)
{
	int row;
	int col;
	
	if(map != NULL && map->grid != NULL)
	{
		row = 0;
		while(row < map->nrow)
		{
			col = 0;
			while(col < map->ncol)
				printf("%d,",map->grid[row][col++]);
			printf("\n");
			++row;
		}
	}
}


void	bsq_map_print_pretty(t_map *map)
{	
	map->row = 0;
	while(map->row < map->nrow)
	{
		map->col = 0;
		while(map->col < map->ncol)
		{
			if(map->grid[map->row][map->col] == 0)
				printf("%s%d",WHITE,map->grid[map->row][map->col]);
			else if(map->grid[map->row][map->col] < 2)
				printf("%s%d",YELLOW,map->grid[map->row][map->col]);
			else if(map->grid[map->row][map->col] < 4)
				printf("%s%d",ORANGE,map->grid[map->row][map->col]);
			else if(map->grid[map->row][map->col] < 6)
				printf("%s%d",RED,map->grid[map->row][map->col]);
			else 
				printf("%s%d",DARK_RED,map->grid[map->row][map->col]);
			++map->col;
		}
		printf("\n");
		++map->row;
	}
	printf("\n");
}


int main(int argc, char **argv)
{
	t_file 		 file;
	t_map 		 map;
	int 		 index;


	index  = 1;
	if(argc > 1)
	{
		while(index < argc)
		{
			file = (t_file){0,0,0,.buffer = (char[BUFFER_SIZE]){0}};
			map  = (t_map){0,0,0,0,0,0,0,0,0,0,0,0,0,NULL};

			if (file_open(&file, argv[index]) == false)
				file_write(NULL,STD_ERR);
			else
				map_init(&map, &file);

			if(map.valid == false)
				file_write(NULL,STD_ERR);
			else
			{
				core_solve(&map);
				if(map.valid == false)
					file_write(NULL,STD_ERR);
				else
				{
					bsq_update_result(&map, &file);
					file_write(&file, STD_OUT);
				}
			}
			map_dispose(&map);
			file_dispose(&file);
			++index;
		}
	}
	else
	{
		file = (t_file){0,0,0,.buffer = (char[BUFFER_SIZE]){0}};
		map  = (t_map){0,0,0,0,0,0,0,0,0,0,0,0,0,NULL};

		if(!file_read(&file, STD_INP))
			file_write(NULL,STD_ERR);
		else
			map_init(&map, &file);

		if(map.valid == false)
			file_write(NULL,STD_ERR);
		else
		{
			core_solve(&map);
			if(map.valid == false)
				file_write(NULL,STD_ERR);
			else
			{
				bsq_update_result(&map, &file);
				file_write(&file, STD_OUT);
			}
		}
		map_dispose(&map);
		file_dispose(&file);
	}

	return (EXIT_SUCCESS);
}

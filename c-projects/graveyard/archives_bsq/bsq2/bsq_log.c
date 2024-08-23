#include "bsq.h"
#include "bsq_log.h"

void 	log_file(t_file *file)
{
	assert(file != NULL);
	assert(file->content != NULL);
	
	printf("+--------------------  FILE  --------------------+\n");
	printf("file           : ptr :     = %16p \n",file);
	printf("file->size     : i32 :     = %16d \n",file->size);
	printf("file->fd       : i8  :     = %16d \n",file->fd);
	printf("file->offset   : i8  :     = %16d \n",file->offset);
	printf("file->is_open  : i8  :     = %16d \n",file->is_open);
	printf("file->is_valid : i8  :     = %16d \n",file->is_valid);
	printf("file->content  : ptr :     = %16p \n",&file->content);
	printf("+------------------------------------------------+\n");

	printf("%s",file->content);
}

void 	log_map(t_map *map, enum e_fmt as)
{
	assert(map != NULL);
	assert(map->grid != NULL);
	i16 row;
	i16 col;
	(void)as;

	printf("+--------------------  MAP  ---------------------+\n");
	printf("map            : ptr :     = %16p \n",&map);
	printf("map->width     : i16 :     = %16d \n",map->width);
	printf("map->height    : i16 :     = %16d \n",map->height);
	printf("map->empt_char : i8  :     = %16c \n",map->empt_char);
	printf("map->full_char : i8  :     = %16c \n",map->full_char);
	printf("map->obst_char : i8  :     = %16c \n",map->obst_char);
	printf("map->is_valid  : i8  :     = %16d \n",map->is_valid);
	printf("map->grid      : ptr :     = %16p \n",map->grid);
	printf("+------------------------------------------------+\n");
	
	row = 0;
	while(row < map->height)
	{
		col = 0;
		while(col < map->width)
		{
			printf("%d ",map->grid[row][col]);
			++col;
		}
		row++;
		printf("\n");
	}

}

void	log_content(i8 *content, i8 row, i8 col, enum e_fmt as)
{
	assert(content != NULL);
	i16 index;
	i16 size;

	index = 0;
	size = row * col + col;
	while(index < size)
	{
		if(((index + 1) % (row + 1) == 0))
		{
			if(as == AS_CHAR)
				printf("%c \n",content[index]);
			if(as == AS_INTEGER)
				printf("%d \n",content[index]);
		}
		else
		{
			if(as == AS_CHAR)
				printf("%c ",content[index]);
			if(as == AS_INTEGER)
				printf("%d ",content[index]);
		}
		++index;
	}
	printf("\n\n");


}

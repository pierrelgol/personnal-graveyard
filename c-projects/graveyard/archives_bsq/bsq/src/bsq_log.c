#include "../lib/bsq_log.h"
#include <assert.h>

void 	log_file(t_file *file)
{
	printf("\n+--------------- FILE UUID : %-3d -----------------+\n",file->uuid);
	printf("|                                                 |\n");
	printf("| Field : uuid       : T : i16 : %16d |\n",file->uuid);
	printf("| Field : fd         : T : i8  : %16d |\n",file->fd);
	printf("| Field : is_open    : T : i8  : %16d |\n",file->is_open);
	printf("| Field : byte_read  : T : i16 : %16d |\n",file->byte_read);
	printf("| Field : offset     : T : i16 : %16d |\n",file->offset);
	printf("| Field : content    : T : *i8 : %16p |\n",&file->content);
	printf("|                                                 |\n");
	printf("|----------------- TYPE / ADR / MEM ------------- |\n");
	printf("|                                                 |\n");
	printf("| ADDR  : address    :         : %16p |\n",file);
	printf("| ALIGN : _Alignof() :         : %16lu |\n",_Alignof(t_file));
	printf("| SIZE  : sizeof()   :         : %16lu |\n",sizeof(t_file));
	printf("|                                                 |\n");
	printf("+-------------------------------------------------+\n");
}

void 	log_map(t_map *map)
{
	printf("\n+--------------- MAP UUID : %-3d ------------------+\n",map->uuid);
	printf("|                                                 |\n");
	printf("| Field : uuid       : T : i16 : %16d |\n",map->uuid);
	printf("| Field : width      : T : i8  : %16d |\n",map->width);
	printf("| Field : height     : T : i8  : %16d |\n",map->height);
	printf("| Field : empt       : T : i8  : %16c |\n",map->empt);
	printf("| Field : full       : T : i8  : %16c |\n",map->full);
	printf("| Field : obst       : T : i8  : %16c |\n",map->obst);
	printf("| Field : is_valid   : T : i8  : %16s |\n",(map->is_valid == TRUE ? "TRUE" : "FALSE"));
	printf("| Field : is_valid   : T : *i8 : %16p |\n",&map->heat_map);
	printf("|                                                 |\n");
	printf("|--------------- TYPE / ADR / MEM ----------------|\n");
	printf("|                                                 |\n");
	printf("| ADDR  : address    :         : %16p |\n",map);
	printf("| ALIGN : _Alignof() :         : %16lu |\n",_Alignof(t_map));
	printf("| SIZE  : sizeof()   :         : %16lu |\n",sizeof(t_map));
	printf("|                                                 |\n");
	printf("+-------------------------------------------------+\n");
	
}

void	log_from(void *obj, t_opt opt, const i8 *foo, i8* fname, i32 line)
{
	printf("Function : %s : in File : %s : at Line %d\n",foo, fname, line);
	if(opt == OPT_FILE)
		log_file((t_file*)obj);
	else if(opt == OPT_MAP)
		log_map((t_map*)obj);
}


void 	log_core(t_core *core)
{
		printf("\n+--------------- MAP UUID : %-3d ------------------+\n",core->uuid);
	printf("|                                                 |\n");
	printf("| Field : uuid       : T : i16 : %16d |\n",core->uuid);
	// printf("| Field : size       : T : i16 : %16d |\n",core->size);
	// printf("| Field : empt       : T : i8  : %16c |\n",core->empt);
	// printf("| Field : full       : T : i8  : %16c |\n",core->full);
	// printf("| Field : obst       : T : i8  : %16c |\n",core->obst);
	// printf("| Field : is_valid   : T : i8  : %16s |\n",(core->is_valid == TRUE ? "TRUE" : "FALSE"));
	// printf("| Field : is_valid   : T : *i8 : %16p |\n",&core->heat_core);
	printf("|                                                 |\n");
	printf("|--------------- TYPE / ADR / MEM ----------------|\n");
	printf("|                                                 |\n");
	printf("| ADDR  : address    :         : %16p |\n",core);
	printf("| ALIGN : _Alignof() :         : %16lu |\n",_Alignof(t_core));
	printf("| SIZE  : sizeof()   :         : %16lu |\n",sizeof(t_core));
	printf("|                                                 |\n");
	printf("+-------------------------------------------------+\n");

}

void log_alloc(t_opt opt, t_opt cmd, u32 size)
{
	static i32 byte_total = 0;
	static i32 byte_released = 0;

	if(cmd == OPT_MEM_ACCQUIRE)
	{
		byte_total += size;
		if(opt == OPT_FILE)
			printf("| FILE X ACQUIRED : %10u byte(s) : TOTAL : %10d byte(s) : RELEASED : %d byte(s) : |\n",size, byte_total, byte_released);
		else if(opt == OPT_MAP)
			printf("| MAP  X ACQUIRED : %10u byte(s) : TOTAL : %10d byte(s) : RELEASED : %d byte(s) : |\n",size, byte_total, byte_released);

	}
	else if (cmd == OPT_MEM_RELEASE)
	{
		byte_released += size;
		if(opt == OPT_FILE)
			printf("| FILE X RELEASED : %10u byte(s) : TOTAL : %10d byte(s) : RELEASED : %d byte(s) : |\n",size, byte_total, byte_released);
		else if(opt == OPT_MAP)
			printf("| MAP  X RELEASED : %10u byte(s) : TOTAL : %10d byte(s) : RELEASED : %d byte(s) : |\n",size, byte_total, byte_released);
	}
	else if(cmd == OPT_ASSERT_NO_LEAK)
	{
		if((byte_total - byte_released) != 0)
			printf("\n\nWARNING!  : MEMORY LEAKS DETECTED:\
					  \n[ACQUIRED : %8d byte(s) ]\
					  \n[RELEASED : %8d byte(s) ]\
					  \n[LOST     : %8d byte(s) ]\n",byte_total, byte_released, (byte_total - byte_released));
	}
}

void 	log_content(i8* content, i16 size, i16 nrow, t_opt opt)
{
	i16 index;

	index = 0;
	while(index < size)
	{
		if(((index + 1) % (nrow + 1) == 0))
		{
			if(opt == OPT_AS_CHAR)
				printf("%c \n",content[index]);
			if(opt == OPT_AS_INT)
				printf("%d \n",content[index]);
		}
		else
		{
			if(opt == OPT_AS_CHAR)
				printf("%c ",content[index]);
			if(opt == OPT_AS_INT)
				printf("%d ",content[index]);
		}
		++index;
	}
	printf("\n\n");
}


i16 	log_serialize(void *obj)
{
	return (((i64)obj) << 7);
}

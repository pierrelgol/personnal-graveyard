#ifndef BSQ_INTERFACE_H
#define BSQ_INTERFACE_H


#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


# define DEBUG 0


# define TRUE 			1
# define FALSE 			0
# define STD_INPUT 		0
# define STD_OUTPUT 	1
# define STD_ERROR 		2
# define MSG_ENOENT 	"File name missing."
# define MSG_MNYARG 	"Too many arguments."
# define MSG_EACCES 	"Cannot read file."
# define SIG_ERROR 	   	-1
# define SIG_SUCCESS 	0
# define BUFFER_SIZE 	1024


# define EMPT_VAL 1
# define OBST_VAL 0

typedef unsigned char 			u8;
typedef unsigned short 			u16;
typedef unsigned int 			u32;
typedef unsigned long long int 	u64;
typedef char 					i8;
typedef short 					i16;
typedef int 					i32;
typedef long long int 			i64;


typedef enum e_opt
{
	OPT_NONE		   = -1,
	OPT_FILE 		   = 0,
	OPT_MAP  		   = 1,
	OPT_CORE 		   = 2,

	OPT_MEM_ACCQUIRE   = 3,
	OPT_MEM_RELEASE    = 4,
	
	OPT_ASSERT_NO_LEAK = 5,

	OPT_AS_CHAR        = 6,
	OPT_AS_INT         = 7,

}			t_opt;

typedef struct s_pos
{
	u8 		x;
	u8 		y;

}			   t_pos;


typedef struct s_file
{
	i16 	uuid;
	i8 		fd;
	i8 		is_open;
	i16 	byte_read;
	i16 	offset;

	i8 		*content;

}			   t_file;


typedef struct s_map
{
	i16		uuid;
	i8		width;
	i8		height;
	i8 	   	empt;
	i8 	   	full;
	i8 	   	obst;
	i8 	   	is_valid;

	i8  	*heat_map;

}			   t_map;


typedef struct s_sqr
{
	t_pos 	minima;
	t_pos 	maxima;

} 			   t_sqr;

typedef struct s_core
{
	i16 uuid;
}				t_core;



#endif

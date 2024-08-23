#include <unistd.h>


/*
	T = TOP
	B = BOTTOM
	L = LEFT
	R = RIGHT
	H = HORIZONTAL
	V = VERTICAL
*/


#define ORIGIN 1


#define VERT_TL_CHAR 'A'
#define VERT_TR_CHAR 'C'
#define VERT_BL_CHAR 'C'
#define VERT_BR_CHAR 'A'


#define EDGE_TH_CHAR 'B'
#define EDGE_TV_CHAR 'B'


#define FILLER_CHAR ' '


/*
	For testing Purposes
*/
// int	ft_isspace(int n);
// int	ft_atoi(const char *str);


void ft_putchar(int ch);

void rush(int col, int row);

int get_char_for_pos(int pos_y, int pos_x, int col, int row);


int main(int argc, char **argv)
{
	int col;
	int row;

	col = 5;
	row = 3;
	rush(col, row);
	col = 5;
	row = 1;
	rush(col, row);
	col = 1;
	row = 1;
	rush(col, row);
	col = 1;
	row = 5;
	rush(col, row);

	// if(argc == 3)
	// {
	// 	row = ft_atoi(argv[2]);
	// 	col = ft_atoi(argv[1]);
	// 	rush(col, row);
	// }
	return (0);
}


void ft_putchar(int ch)
{
	write(1, &ch, 1);
}


void rush(int col, int row)
{
	int pos_x;
	int pos_y;

	pos_x = 1;
	while(pos_x <= row)
	{
		pos_y = 1;
		while(pos_y <= col)
			ft_putchar(get_char_for_pos(pos_y++, pos_x, col, row));
		pos_x++;
		ft_putchar('\n');
	}
	ft_putchar('\n');
}


int get_char_for_pos(int pos_y, int pos_x, int col, int row)
{
	if(pos_x == ORIGIN && pos_y == ORIGIN)
		return (VERT_TL_CHAR);
	if(pos_x == ORIGIN && pos_y == col)
		return (VERT_TR_CHAR);
	if(pos_x == row && pos_y == ORIGIN)
		return (VERT_BL_CHAR);
	if(pos_x == row && pos_y == col)
		return (VERT_BR_CHAR);

	if(pos_x == ORIGIN && pos_y > ORIGIN && pos_y < col)
		return (EDGE_TH_CHAR);
	if(pos_x > ORIGIN && pos_x < row && pos_y == ORIGIN)
		return (EDGE_TV_CHAR);
	if(pos_x > ORIGIN && pos_x < row && pos_y == col)
		return (EDGE_TV_CHAR);
	if(pos_x == row && pos_y > ORIGIN && pos_y < col)
		return (EDGE_TH_CHAR);

	return (FILLER_CHAR);
}


// int	ft_isspace(int n)
// {
// 	if (n == ' ' || n == '\t' || n == '\n')
// 		return (1);
// 	if (n == '\r' || n == '\f' || n == '\v')
// 		return (1);
// 	return (0);
// }


// int	ft_atoi(const char *str)
// {
// 	int	sign;
// 	int	result;

// 	sign = 1;
// 	result = 0;
// 	while (ft_isspace(*str))
// 		str++;
// 	if (*str == '-' || *str == '+')
// 	{
// 		if (*str == '-')
// 			sign = -1;
// 		str++;
// 	}
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		result = (result * 10) + (*str - '0');
// 		++str;
// 	}
// 	return (sign * result);
// }

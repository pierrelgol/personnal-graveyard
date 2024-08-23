#include "parsarg.h"


int main(int argc, char **argv)
{
	t_arg arg_c;
	int arg_value;

	arg_value = 0;
	arg_c.at_index = 0;
	arg_c.arg_definiton = (char [3]){'-','c','\0'};

	if(t_arg_parse_arguments(&arg_c, argc, argv) == T_ARG_IS_FOUND)
	{
		__builtin_printf("The argument %s is found in argv[%d] : %s\n",arg_c.arg_definiton,arg_c.at_index,argv[arg_c.at_index]);
		if(arg_c.has_option)
		{
			__builtin_printf("%d\n",arg_value);
			
		}
	}
	else
	{
		__builtin_printf("Error\n");
	}

	return (0);
}

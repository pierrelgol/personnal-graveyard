#include "parsarg.h"

int	t_arg_parse_arguments(t_arg *arg, int argc, char **argv)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		if (t_arg_strcmp(arg->arg_definiton, argv[count]) == 0)
		{
			arg->at_index = count;
			if (arg->has_option && count + 1 < argc)
			{
				arg->option_value = t_arg_atoi_arg_option(argv[count + 1]);
			}
			return (T_ARG_IS_FOUND);
		}
		++count;
	}
	return (T_ARG_NOT_FOUND);
}

int	t_arg_isspace(int ch)
{
	if (ch == ' ' || ch == '\r' || ch == '\t')
		return (1);
	if (ch == '\n' || ch == '\f' || ch == '\v')
		return (1);
	return (0);
}

int	t_arg_strcmp(char *arg_definition, char *search_in)
{
	unsigned char	*pdef;
	unsigned char	*psin;

	pdef = (unsigned char *)arg_definition;
	psin = (unsigned char *)search_in;
	while (*pdef && *pdef == *psin)
	{
		++pdef;
		++psin;
	}
	return (*pdef - *psin);
}

int t_arg_atoi_arg_option(char *arg)
{
	int	result;

	result = 0;
	while (*arg && (t_arg_isspace(*arg) || *arg == '-' || *arg == '+'))
		++arg;

	while (*arg && *arg >= '0' && *arg <= '9')
		result = *arg++ - '0' + result * 10;

	if (*arg != '\0' || result == 0)
		return (-1);

	return (result);
}

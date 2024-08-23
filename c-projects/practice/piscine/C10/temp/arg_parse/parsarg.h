#ifndef PARSARG_H
# define PARSARG_H

# define T_ARG_NOT_FOUND -1
# define T_ARG_IS_FOUND 0

typedef struct s_arg
{
	int		at_index;
	int		has_option;
	int		option_value;
	char	*arg_definiton;

}			t_arg;

int			t_arg_parse_arguments(t_arg *arg, int argc, char **argv);

int			t_arg_isspace(int ch);

int			t_arg_strcmp(char *arg_definition, char *search_in);

int			t_arg_atoi_arg_option(char *arg);

#endif

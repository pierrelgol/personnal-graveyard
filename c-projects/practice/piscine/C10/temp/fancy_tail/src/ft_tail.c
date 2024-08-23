/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:59:12 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/23 16:48:58 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../lib/futils.h"
#include "../lib/parsarg.h"

#define TAIL_DEFAULT_LINE 10

void	tail_throw_error(void)
{
	if (errno == EACCES)
		write(STD_ERROR, MSG_EACCES, sizeof(MSG_EACCES));
	if (errno == ENOENT)
		write(STD_ERROR, MSG_ENOENT, sizeof(MSG_ENOENT));
	else
		write(STD_ERROR, MSG_MNYARG, sizeof(MSG_MNYARG));
	exit(errno);
}

int tail_is_eol(int ch)
{
	if(ch == '\n' || ch == '\r' || ch == '\0')
		return (1);
	return (0);
}

int tail_offset_get_default(t_buffer *buff)
{
	int line_count;
	int offset;

	offset = buff->size;
	line_count = 0;
	while (offset > 0 && line_count <= 10)
	{
		if(tail_is_eol(buff->content[offset]))
			++line_count;
		--offset;
	}
	return (offset);
}

int tail_print_tail(char *file_name, t_buffer *buffer, int offset)
{
	if (t_buffer_load_file(buffer, file_name) == SIG_ERROR)
		tail_throw_error();

	if(offset == 0)
		offset = tail_offset_get_default(buffer);
	
	if (t_buffer_write_from(STD_OUTPUT, buffer, offset) == SIG_ERROR)
		tail_throw_error();

	return (SIG_SUCCESS);
}


int	main(int argc, char **argv)
{
	t_buffer	buffer;
	t_arg		c_opt;
	int read_from;
	int offset;

	c_opt = (t_arg){0, 1, -1, "-c"};
	buffer = (t_buffer){0,(char [T_BUFFER_MAX_CAP]){0}};
	offset = 0;
	read_from = 1;
	t_arg_parse_arguments(&c_opt, argc, argv);
	if (c_opt.at_index != 0)
		++read_from;
	if (c_opt.option_value != -1)
	{
		++read_from;
		offset = c_opt.option_value;
	}
	while(read_from < argc)
	{
		tail_print_tail(argv[read_from], &buffer, offset);
		++read_from;
	}
	return (SIG_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissenma <bissenma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:18:31 by pollivie          #+#    #+#             */
/*   Updated: 2023/09/24 15:55:51 by bissenma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/num_file.h"
#include "../lib/num_helpers.h"
#include "../lib/num_lexer.h"
#include "../lib/num_print.h"

int	main(int argc, char **argv)
{
	t_file	*file;
	char	*buffer;
	int		token_count;

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (1);
	if (argc == 2)
	{
		file = file_init(buffer);
		file_open(file, "./numbers.dict", O_RDWR);
		file_read(file);
		token_count = lexer_token_count(file->buffer);
		print_putstr("\n");
		print_putnbr(token_count);
		print_putstr("\n");
		print_putstr(argv[1]);
		print_putstr("\n");
		print_putstr(file->buffer);
		print_putstr("\n");
		file_dispose(file);
	}
	return (0);
}

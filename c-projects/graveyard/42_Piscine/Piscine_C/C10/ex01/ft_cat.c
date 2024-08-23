/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 09:25:53 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/23 09:36:21 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_CAPACITY 30000

void	ft_handle_error(void)
{
	char	*error_message;
	int		errlen;

	errlen = 0;
	error_message = strerror(errno);
	while (error_message[errlen])
		++errlen;
	write(2, error_message, errlen);
	errno = 0;
}

int	ft_cache_file_at(char *fname, char *buff, int offset)
{
	int	f_desc;
	int	byte_read;

	f_desc = open(fname, O_RDONLY);
	if (f_desc < 0)
		ft_handle_error();
	byte_read = read(f_desc, &buff[offset], (BUFFER_CAPACITY - offset));
	close(f_desc);
	return (byte_read);
}

void	ft_display_cache(char *buff, int size)
{
	if (buff == NULL)
		ft_handle_error();
	write(1, buff, size);
}

int	main(int argc, char **argv)
{
	char	*buffer;
	int		offset;
	int		i;

	i = 1;
	offset = 0;
	buffer = (char [BUFFER_CAPACITY]){0};
	if (argc == 2)
	{
		offset += ft_cache_file_at(argv[1], buffer, offset);
		ft_display_cache(buffer, offset);
	}
	else if (argc > 2)
	{
		while (offset < BUFFER_CAPACITY && i < argc)
		{
			offset += ft_cache_file_at(argv[i++], buffer, offset);
		}
		ft_display_cache(buffer, offset);
	}
	return (0);
}

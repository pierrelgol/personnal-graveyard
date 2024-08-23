/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   futils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 09:25:02 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/23 16:49:05 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/futils.h"

int	t_buffer_load_file(t_buffer *buff, char *file_name)
{
	int	fd;

	fd = open(file_name, O_RDONLY);
	if (fd < 0 || buff == NULL)
	{
		return (SIG_ERROR);
	}
	else
	{
		buff->size += read(fd, &buff->content[buff->size], T_BUFFER_MAX_CAP);
		close(fd);
		return (SIG_SUCCESS);
	}
}

int	t_buffer_write_to(int fd, t_buffer *buff)
{
	if (buff == NULL || fd < 0)
	{
		return (SIG_ERROR);
	}
	else
	{
		write(fd, buff->content, buff->size);
		return (SIG_SUCCESS);
	}
}

int	t_buffer_write_from(int fd, t_buffer *buff, int offset)
{
	if (buff == NULL || fd < 0)
	{
		return (SIG_ERROR);
	}
	if (offset > buff->size)
	{
		write(fd, buff->content, buff->size);
		return (SIG_SUCCESS);
	}
	else
	{
		write(fd, &buff->content[(offset)], (buff->size - offset));
		return (SIG_SUCCESS);
	}
}

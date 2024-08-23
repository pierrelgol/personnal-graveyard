/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_file_read.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:05:15 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/24 17:05:16 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	plib_file_read(t_file *self)
{
	char	*read_from;
	int	byte_read;
	int	fd;

	if (self->type != IO_TYPE_FILE)
		return (-1);
	read_from = &self->stream_buff[self->stream_cursor[self->type]];
	fd = self->stream_handle[self->type];
	byte_read = read(fd, read_from, self->stream_size);
	return (byte_read);
}

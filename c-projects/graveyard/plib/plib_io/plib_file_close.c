/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_file_close.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:05:24 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/24 17:05:24 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	plib_file_close(t_file *self)
{
	int	fd;

	if (self->type != IO_TYPE_FILE)
		return (-1);
	fd = self->stream_handle[self->type];
	self->stream_handle[self->type] = close(fd);
	return (self->stream_handle[self->type]);
}


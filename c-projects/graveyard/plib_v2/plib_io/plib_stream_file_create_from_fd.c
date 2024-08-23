/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_stream_file_create_from_fd.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:33:08 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/28 11:33:12 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

t_file *plib_stream_file_create_from_fd(int fd, int perm, char *buffer, int size)
{
	t_stream *self;

	self = plib_memory_alloc(1, sizeof(t_stream));
	if (!self)
		return (NULL);
	self->_private.perm = perm;
	if (!buffer)
		self->_private.mode = MODE_UNBUFFED;
	else
	{
		self->_private.mode = MODE_BUFFED;
		self->_private.buff = buffer;
		self->_private.size = size;
	}
	self->_private.handle = fd;
	if (self->_private.handle == -1)
		return (plib_stream_file_destroy(self));
	return (self);
}


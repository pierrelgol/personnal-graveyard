/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_file_open.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:05:07 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/24 17:05:08 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int 	plib_file_open(t_file *self, char *path, unsigned int flags)
{
	if (self->type != IO_TYPE_FILE)
		return (-1);
	self->stream_flags[self->type] = flags;
	self->stream_handle[self->type] = open(path, flags);
	return (self->stream_handle[self->type]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_stream_file_get_writer.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:47:12 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/28 10:48:20 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

t_writer	*plib_stream_file_get_writer(t_file *file)
{
	t_generic_private *private;
	t_generic_writer *writer;

	private = &file->_private;
	writer = &file->_writer;

	writer->buff = private->buff;
	writer->handle = private->handle;
	writer->kind = private->kind;
	writer->mode = private->mode;
	writer->path = private->path;
	writer->signal = private->signal;
	writer->perm = private->perm;
	writer->size = private->size;

	return ((t_writer*)file);
}

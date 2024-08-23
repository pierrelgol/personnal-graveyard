/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_stream_file_get_reader.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:35:25 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/28 10:35:25 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

t_reader *plib_stream_file_get_reader(t_file *file)
{
	t_generic_private *private;
	t_generic_reader *reader;

	private = &file->_private;
	reader = &file->_reader;
	reader->buff = private->buff;
	reader->handle = private->handle;
	reader->kind = private->kind;
	reader->mode = private->mode;
	reader->size = private->size;
	reader->path = private->path;
	return ((t_reader*)file);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_stream_writer_write.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:51:48 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/28 10:51:49 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int plib_stream_writer_write(t_writer *writer)
{
	t_generic_writer *w;
	t_generic_reader *r;
	long int          wbytes;

	w = &writer->_writer;
	r = &writer->_reader;
	// if (w->signal == SIGNAL_ERR)
	// 	return (0);
	if (w->mode == MODE_UNBUFFED)
		wbytes = write(w->handle, &r->ch, 1);
	else
		wbytes = write(w->handle, &w->buff[w->cursor], (w->size - w->cursor));
	if (wbytes == 0)
		w->signal = SIGNAL_EOF;
	// if (wbytes == -1)
	// 	w->signal = SIGNAL_ERR;
	// w->cursor += wbytes;
	return (wbytes);
}

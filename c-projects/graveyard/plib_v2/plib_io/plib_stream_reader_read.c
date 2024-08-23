/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_stream_reader_read.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:35:29 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/28 10:35:30 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	plib_stream_reader_read(t_reader *reader)
{
	t_generic_reader *r;
	long int	rbytes;

	r = &reader->_reader;
	if (r->signal == SIGNAL_EOF)
		return (0);
	if (r->mode == MODE_UNBUFFED)
		rbytes = read(r->handle, &r->ch, 1);
	else
		rbytes = read(r->handle, &r->buff[r->cursor], (r->size - r->cursor));
	if (rbytes == 0)
		r->signal = SIGNAL_EOF;
	// if (rbytes == -1)
	// 	r->signal = SIGNAL_ERR;
	// r->cursor += rbytes;
	return (rbytes);
}

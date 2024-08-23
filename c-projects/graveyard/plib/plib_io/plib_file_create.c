/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_file_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:04:21 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/24 17:04:43 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

t_file *plib_file_create(void)
{
	t_file	*self;

	self = plib_memory_alloc(1, sizeof(struct s_stream_io));
	return (self);
}



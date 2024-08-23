/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_file_reader_destroy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:07:10 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/24 17:07:11 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

t_reader	*plib_file_reader_destroy(t_file *self, unsigned int flags)
{
	self->type = IO_TYPE_FILE;
	return (NULL);
}

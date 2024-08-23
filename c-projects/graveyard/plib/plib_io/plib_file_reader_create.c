/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_file_reader_create.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:07:04 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/24 17:07:04 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

t_reader	*plib_file_reader_create(t_file *file, unsigned int flags)
{
	t_reader *reader;

	reader = file;
	reader->type = IO_TYPE_READER;
	return (reader);
}

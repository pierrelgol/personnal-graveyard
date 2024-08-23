/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_stream_file_copy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:35:12 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/28 10:35:12 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

t_file	*plib_stream_file_copy(t_file *file)
{
	t_file	*copy;

	copy = plib_memory_alloc(1, sizeof(t_file));
	plib_memory_copy(copy, file, sizeof(t_file));
	return (copy);
}

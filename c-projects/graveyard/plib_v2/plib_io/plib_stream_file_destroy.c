/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plib_stream_file_destroy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:35:21 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/28 10:35:21 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

t_file *plib_stream_file_destroy(t_file *file)
{
	return (plib_memory_dealloc(file));
}

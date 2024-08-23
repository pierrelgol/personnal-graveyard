/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_zeroed_alloc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:02:27 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 21:19:34 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"
#include <stdlib.h>

void *memory_zeroed_alloc(unsigned int size, unsigned int count)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (0);
	return (memory_nset(ptr, 0x00, size * count));
}

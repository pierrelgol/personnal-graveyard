/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_nset_alloc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:06:38 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 21:19:27 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

void *memory_nset_alloc(unsigned int size, unsigned int count, int ch)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (0);
	return (memory_nset(ptr, ch, size * count));
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_alloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:59:48 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 21:18:58 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"
#include <stdlib.h>

void	*memory_alloc(unsigned int size)
{
	void	*ptr;

	ptr = (void*)0;
	ptr = malloc(size);
	return (ptr);
}

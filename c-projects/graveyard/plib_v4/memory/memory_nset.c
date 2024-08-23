/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_nset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:07:07 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 21:19:23 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

void	*memory_nset(void *ptr, int ch, unsigned int n)
{
	char *pptr;

	if (!ptr || !n)
		return (0);
	pptr = (char *)ptr;
	while (n--)
		*pptr = ch;
	return (ptr);
}


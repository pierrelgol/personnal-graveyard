/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_nsearch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:07:42 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 21:19:16 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

void	*memory_nsearch(void *ptr, int ch, unsigned int n)
{
	const char *pptr;

	if (!ptr || !n)
		return (0);
	pptr = ptr;
	while (n--)
	{
		if (*pptr == ch)
			return ((void *)pptr);
		++pptr;
	}
	return (0);
}

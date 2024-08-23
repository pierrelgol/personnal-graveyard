/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_ncompare.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:09:03 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 21:19:06 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	memory_ncompare(void *mem1, void *mem2, unsigned int n)
{
	const unsigned char *p1;
	const unsigned char *p2;

	if (!mem1 || !mem2 || !n)
		return (0);
	p1 = (unsigned char *)mem1;
	p2 = (unsigned char *)mem2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		++p1;
		++p2;
	}
	return (0);
}

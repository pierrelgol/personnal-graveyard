/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_ncopy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:07:29 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 21:19:10 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

void	*memory_ncopy(void *dest, void *src, unsigned int n)
{
	char *pdest;
	char *psrc;

	if (!dest || !src || !n)
		return (0);
	pdest = dest;
	psrc = src;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}

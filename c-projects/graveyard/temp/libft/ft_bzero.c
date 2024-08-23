/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierreollivier <plgol.perso@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:49:32 by pierreollivie     #+#    #+#             */
/*   Updated: 2023/07/07 11:49:41 by pierreollivie    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	register unsigned char	*i;
	register unsigned char	*end;

	i = (unsigned char *)b;
	end = (unsigned char *)b + n;
	while ((i + 8) < end)
	{
		*i = '\0';
		*(i + 1) = '\0';
		*(i + 2) = '\0';
		*(i + 3) = '\0';
		*(i + 4) = '\0';
		*(i + 5) = '\0';
		*(i + 6) = '\0';
		*(i + 7) = '\0';
		i += 8;
	}
	while (i < end)
		*i++ = '\0';
}

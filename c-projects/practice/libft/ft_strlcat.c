/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierreollivier <plgol.perso@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:32:16 by pierreollivie     #+#    #+#             */
/*   Updated: 2023/07/07 17:32:19 by pierreollivie    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	register unsigned int	dlen;
	register unsigned int	bound;
	register unsigned int	i;
	unsigned int			slen;

	if (!dst && dstsize == 0)
		return (0);
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dstsize < dlen)
		return (dstsize + slen);
	i = 0;
	bound = (const size_t)(dstsize - dlen);
	while ((i + 1) < bound && *(src + i))
	{
		*(dst + dlen + i) = *(src + i);
		++i;
	}
	*(dst + dlen + i) = '\0';
	return (slen + dlen);
}

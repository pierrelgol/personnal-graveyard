/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:52:37 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/20 14:53:06 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned int	slen;
	unsigned int	i;
	char			*duplicata;

	if (src == NULL)
		return (NULL);
	slen = 0;
	while (src[slen])
		++slen;
	duplicata = (char *)malloc(sizeof(char) * slen + 1);
	if (duplicata == NULL)
		return (NULL);
	i = 0;
	while (*src)
		duplicata[i++] = *src++;
	duplicata[i] = '\0';
	return (duplicata);
}

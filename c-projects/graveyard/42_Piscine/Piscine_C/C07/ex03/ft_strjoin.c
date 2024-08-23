/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:48:22 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/20 15:00:02 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static inline unsigned int	ft_strlen(const char *s)
{
	register const char	*ps;

	ps = s;
	while (*ps)
		++ps;
	return (ps - s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;
	int		i;
	int		j;
	int		k;

	i = 0;
	total_len = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]) + ft_strlen(sep);
	result = (char *)malloc(sizeof(char) * (total_len));
	if (result == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < size)
	{
		k = 0;
		while (*(strs[i]))
			result[j++] = *(strs[i])++;
		while (sep[k] && (int)(j + ft_strlen(sep)) != total_len)
			result[j++] = sep[k++];
	}
	result[j] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:33:15 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/20 10:14:44 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"

static int	ft_strlen(char *str)
{
	char	*pstr;

	if (str != (void *)0)
	{
		pstr = str;
		while (*pstr)
			++pstr;
		return (pstr - str);
	}
	return (0);
}

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (dest != (void *)0 && src != (void *)0)
	{
		i = 0;
		while (*src)
			dest[i++] = *src++;
		dest[i] = '\0';
	}
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*result;
	int					i;

	result = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * ac + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		result[i].str = av[i];
		result[i].size = ft_strlen(av[i]);
		result[i].copy = (char *)malloc(sizeof(char) * (result[i].size + 1));
		ft_strcpy(result[i].copy, result[i].str);
		++i;
	}
	result[i].str = 0;
	result[i].copy = 0;
	result[i].size = 0;
	return (result);
}

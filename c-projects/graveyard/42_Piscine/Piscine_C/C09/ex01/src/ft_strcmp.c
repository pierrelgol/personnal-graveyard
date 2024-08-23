/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:30:24 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/17 14:00:11 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (n > 0)
	{
		while (*ps1 && *ps1 == *ps2 && --n)
		{
			++ps1;
			++ps2;
		}
		return (*ps1 - *ps2);
	}
	return (0);
}


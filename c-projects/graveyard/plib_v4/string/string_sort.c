/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:32:32 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 14:32:33 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_sort(char *str, int (*f)(int ch1, int ch2))
{
	int	temp;
	int	i;

	if (!str || !f)
		return (0);
	i = 1;
	while (str[i])
	{
		while (i >= 1 && f(str[i - 1], str[i]) == 0)
		{	
			temp = str[i - 1];
			str[i - 1] = str[i];
			str[i--] = temp;
		}
		++i;
	}
	return (str);
}

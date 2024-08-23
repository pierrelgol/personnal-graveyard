/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_substring_find.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:48:01 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 15:48:02 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"


char *string_substring_find(char *str, char *sub)
{
	unsigned int i;
	unsigned int j;
	unsigned int s;

	if (!str || !sub)
		return (0);
	s = string_length(str);
	if (!*sub)
		return ((char *) str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] && str[i] == sub[j] && i < s)
		{
			j++;
			i++;
		}
		if (!sub[j])
			return ((char *) &str[(int) i - j]);
		i = (i - j) + 1;
	}
	return (0);
}


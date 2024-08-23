/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_filter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:43:24 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 15:43:25 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_filter(char *str, int ch)
{
	char	*result;
	int	rlength;
	int	i;

	if (!str)
		return (0);
	rlength = string_length(str) - string_count(str, ch);
	result = memory_zeroed_alloc(rlength + 1, sizeof(char));
	if (!result)
		return (0);
	i = 0;
	while (*str)
	{
		if (*str != ch)
			result[i++] = *str;
		++str;
	}
	return (result);
}

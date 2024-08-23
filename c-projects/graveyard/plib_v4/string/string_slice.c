/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_slice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:22:11 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 14:22:12 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

static int abs_length(int n)
{
	return (((n < 0) * (-(n))) + ((n >= 0) * n));
}

char	*string_slice(char *str, int start, int end)
{
	char	*result;
	int	slength;
	int	index;

	if (!str)
		return (0);
	slength = string_length(str);
	if (slength < end || slength < start)
		return (0);
	result = memory_zeroed_alloc((abs_length(end - start)) + 1, sizeof(char));
	index = 0;
	if (start <= end)
	{
		while (start < end)
			result[index++] = str[start++];
	}
	else
	{
		while (start >= end)
			result[index++] = str[start--];
	}
	return (result);
}

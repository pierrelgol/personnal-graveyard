/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_map_filter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:39:02 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 17:39:03 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_map_filter(char *str, int (*f)(int ch))
{
	char	*result;
	int	rlength;
	int	i;

	if (!str || !f)
		return (0);
	rlength = string_length(str) - string_map_count(str, f);
	result = memory_zeroed_alloc(rlength + 1, sizeof(char));
	if (!result)
		return (0);
	i = 0;
	while (*str)
	{	
		if (!f(*str))
			result[i++] = *str;
		++str;
	}
	return (result);
}

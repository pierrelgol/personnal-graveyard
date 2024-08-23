/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_map_split.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:15:51 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 16:15:52 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char *string_map_split_create(char *str, int (*f)(int ch))
{
	char *result;
	int   i;

	i = 0;
	while (f(str[i]))
		++i;
	result = memory_zeroed_alloc(i + 1, sizeof(char));
	memory_ncopy(result, str, i);
	return (result);
}

char **string_map_split(char *str, int (*f)(int ch))
{
	char **result;
	int    length;
	int    index;

	if (!str || !f)
		return (0);
	index = 0;
	length = string_map_count(str, f);
	result = memory_zeroed_alloc(length + 1, sizeof(char *));
	while (index < length)
	{
		while (*str && f(*str))
			++str;
		if (*str && !f(*str))
			result[index] =  string_map_split_create(str, f);
		if (!result[index++])
			return (string_split_destroy(result, index - 1));
		while (*str && !f(*str))
			++str;
	}
	return (result);
}

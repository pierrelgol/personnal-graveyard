/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_nsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:01:36 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 14:01:39 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char **string_nsplit(char *str, unsigned int n)
{
	char       **result;
	unsigned int index;
	unsigned int length;

	index = 0;
	length = (string_length(str)) / n;
	result = memory_zeroed_alloc(n + 1, sizeof(char *));
	if (!result)
		return (0);
	while (index < n)
	{
		result[index] = memory_zeroed_alloc(length + 1, sizeof(char));
		if (!result[index])
			return (string_split_destroy(result, index));
		memory_ncopy(result[index], &str[length * index], length);
		++index;
	}
	return (result);
}

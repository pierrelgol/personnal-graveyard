/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_random.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:37:12 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 15:20:13 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char *string_random(char *set, unsigned int n)
{
	char        *result;
	unsigned int ch;
	unsigned int i;

	if (!set || !n)
		return (0);
	result = memory_zeroed_alloc(n + 1, sizeof(char));
	if (!result)
		return (0);
	i = 0;
	while (i < n)
	{
		ch = char_to_random(ch) % 255;
		while (set[ch] == 0)
			ch = char_to_random(ch) % 255;
		result[i++] = ch;
	}
	return (result);
}

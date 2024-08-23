/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_find_last.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:20:20 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 14:20:21 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_find_last(char *str, int ch)
{
	char *last;

	if (!str)
		return (0);
	last = (void *)0;
	while (*str)
	{
		if (*str == ch)
			last = str;
		++str;
	}
	return (last);
}

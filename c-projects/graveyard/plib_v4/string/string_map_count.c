/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_map_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:36:21 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 17:36:22 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	string_map_count(char *str, int (*f)(int ch))
{
	int	count;

	if (!str || !f)
		return (0);
	count = 0;
	while (*str)
	{
		if (f(*str))
			++count;
		++str;
	}
	return (count);
}

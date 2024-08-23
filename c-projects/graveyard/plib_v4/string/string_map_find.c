/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_map_find.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:13:48 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 16:13:48 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_map_find(char *str, int (*f)(int ch))
{
	if (!str || !f)
		return (0);
	while (*str)
	{
		if (f(*str))
			return (str);
		++str;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_find_first.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:18:34 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 14:18:35 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char *string_find_first(char *str, int ch)
{	
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == ch)
			return (str);
		++str;
	}
	return (0);
}

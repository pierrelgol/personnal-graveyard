/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:16:00 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 15:16:02 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_to_set(char *str, char set[255])
{
	if (!str || !set)
		return (0);
	while (*str)
	{
		set[(int)*str] = *str;
		++str;
	}
	return (set);
}

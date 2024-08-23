/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:05:22 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 16:05:24 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_to_lowercase(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		++str;
	}
	return (str);
}

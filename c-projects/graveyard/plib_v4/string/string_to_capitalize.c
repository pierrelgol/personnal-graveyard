/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_capitalize.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:08:15 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 16:08:17 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

static int string_is_space(int ch)
{
	return (ch == ' ' || (ch >= 9 && ch <= 13));
}

char	*string_to_capitalize(char *str)
{
	int	length;
	int	i;

	if (!str)
		return (0);
	str = string_to_lowercase(str);
	length = string_length(str);
	i = 0;
	while (i < length)
	{
		while (str[i] && string_is_space(str[i]))
			++i;
		if (str[i] && !string_is_space(str[i]))
			str[i] -= 32;
		++i;
		while (str[i] && !string_is_space(str[i]))
			++i;
	}
	return (str);
}

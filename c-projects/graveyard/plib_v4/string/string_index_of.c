/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_index_of.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:14:14 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 14:14:16 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	string_index_of(char *str, int ch)
{
	int	index;

	if (!str)
		return (-1);
	index = 0;
	while (str[index])
	{
		if (str[index] == ch)
			return (index);
		++index;
	}
	return (-1);
}

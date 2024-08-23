/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:16:39 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 14:16:41 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	string_count(char *str, int ch)
{
	int	count;

	if (!str)
		return (-1);
	count = 0;
	while (*str)
	{
		if (*str++ == ch)
			++count;
	}
	return (count);
}

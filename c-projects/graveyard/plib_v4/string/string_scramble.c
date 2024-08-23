/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_scramble.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:26:10 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 15:26:12 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_scramble(char *str, int (*f)(int v, int len))
{	
	int	length;
	int	index;

	if (!str || !f)
		return (0);
	length = string_length(str);
	index = 0;
	while (length--)
	{
		str[index] = f(str[length], index);
		++index;
	}
	return (0);
}

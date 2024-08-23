/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_nreverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:36:24 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 15:36:24 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_nreverse(char *str, int n)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (i < (n - i - 1))
	{
		str[i] = str[n - i - 1];
		++i;
	}
	return (str);
}


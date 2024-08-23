/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_nlength.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:07:28 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 13:07:30 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	string_nlength(char *str, unsigned int n)
{
	char	*pstr;

	if (!str || !n)
		return (0);
	pstr = str;
	while (*pstr && n--)
		++pstr;
	return (pstr - str);
}

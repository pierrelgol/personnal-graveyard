/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_compare.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:37:15 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 13:37:16 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	string_compare(char *str1, char *str2)
{
	while (*str1 && *((unsigned char*)str1) == *((unsigned char*)str2))
	{
		++str1;
		++str2;
	}
	return (*((unsigned char*)str1) - *((unsigned char*)str2));
}

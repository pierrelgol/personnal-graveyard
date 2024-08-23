/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_substring_replace.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:52:36 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 15:52:36 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_substring_replace(char *str, char *sub, char *with)
{
	char	*ptr;

	if (!str || !sub || !with)
		return (0);
	ptr = string_substring_find(str, sub);
	if (!ptr)
		return (0);
	while (*ptr && *sub && *with)
	{
		*ptr++ = *with++;
		sub++;
	}
	return (str);
}

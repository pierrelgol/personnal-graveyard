/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:44:23 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 13:44:24 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_join(char *str1, char *str2)
{
	char	*result;
	int	s1length;
	int	s2length;

	if (!str1 || !str2)
		return (0);
	s1length = string_length(str1);
	s2length = string_length(str2);
	result = memory_zeroed_alloc(s1length + s2length + 1, sizeof(char));
	if (!result)
		return (0);
	memory_ncopy(result, str1, s1length);
	memory_ncopy(&result[s1length], str2, s2length);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_trim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:38:00 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 15:38:01 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_trim(char *str, int ch)
{
	char	*result;
	int	start;
	int	end;

	if (!str)
		return (0);
	start = -1;
	while (str[++start] == ch);
	end = string_length(str);
	while (end >= 0 && str[--end] == ch);
	result = memory_zeroed_alloc((end - start) + 1, sizeof(char));
	if (!result)
		return (0);
	memory_ncopy(result, &str[start], (end - start));
	return (result);
}

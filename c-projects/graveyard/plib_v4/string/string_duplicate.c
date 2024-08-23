/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_duplicate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:10:28 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 13:10:29 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_duplicate(char *str)
{
	char	*result;
	int	length;

	if (!str)
		return (0);
	length = string_length(str);
	result = memory_zeroed_alloc(length + 1, sizeof(char));
	if (!result)
		return (0);
	return (memory_ncopy(result, str, length));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_nduplicate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:18:38 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 13:18:41 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char *string_nduplicate(char *str, unsigned int n)
{
	unsigned int length;
	char        *result;

	if (!str || n == 0)
		return (0);
	length = string_length(str);
	if (length > n)
		return (0);
	result = memory_zeroed_alloc(n + 1, sizeof(char));
	if (!result)
		return (0);
	return (memory_ncopy(result, str, n));
}

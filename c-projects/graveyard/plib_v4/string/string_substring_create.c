/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_substring_create.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:56:58 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 15:57:01 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_substring_create(char *str, char *sub)
{
	char	*psub;
	char	*result;
	char	length;

	if (!str || !sub)
		return (0);
	psub = string_substring_find(str, sub);
	if (!psub)
		return (0);
	length = string_length(psub);
	result = memory_zeroed_alloc(length + 1, sizeof(char));
	if (!result)
		return (0);
	memory_ncopy(result, psub, length);
	return (result);
}

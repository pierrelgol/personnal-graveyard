/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:20:53 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 13:20:56 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_copy(char *dest, char *src)
{
	if (!dest || !src)
		return (0);
	memory_ncopy(dest, src, string_length(src));
	return (dest);
}

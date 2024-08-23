/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_ncopy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:23:17 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 13:23:19 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_ncopy(char *dest, char *src, unsigned int n)
{
	unsigned int	length;

	if (!dest || !src || !n)
		return (0);
	length = string_length(src);
	if (length < n)
		return (0);
	memory_ncopy(dest, src, n);
	return (dest);
}

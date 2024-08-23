/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_nconcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:33:00 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 13:33:01 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int string_nconcat(char *dest, char *src, unsigned int n)
{
	unsigned int dlength;
	unsigned int slength;

	if (!dest || !src || !n)
		return (0);
	dlength = string_length(dest);
	slength = string_length(src);
	if (dlength + slength > n)
		slength = n - dlength;
	memory_ncopy(&dest[dlength], src, slength);
	return (slength);
}

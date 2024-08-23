/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_concat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:25:45 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 13:25:47 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	string_concat(char *dest, char *src)
{
	int	slength;

	if (!dest || !src)
		return (0);
	slength = string_length(src);
	memory_ncopy(&dest[string_length(dest)], src, slength);
	return (slength);
}

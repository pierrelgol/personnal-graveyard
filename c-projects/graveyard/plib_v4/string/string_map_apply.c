/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_map_apply.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:44:43 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 19:30:34 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char	*string_map_apply(char *str, int (*f)(int ch))
{
	if (!str || !f)
		return (0);	
	while (*str)
	{
		*str = f(*str);
		str++;
	}
	return (str);
}

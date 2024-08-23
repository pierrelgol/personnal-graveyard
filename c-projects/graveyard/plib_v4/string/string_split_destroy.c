/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_split_destroy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:11:24 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 14:11:25 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

char **split_cleanup(char **split, int index)
{
	int i;

	i = 0;
	while (i < index)
		memory_dealloc(split[i++]);
	memory_dealloc(split);
	return (0);
}


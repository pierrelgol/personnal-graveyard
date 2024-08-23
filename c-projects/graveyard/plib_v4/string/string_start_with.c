/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_start_with.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:00:20 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 22:00:21 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int string_start_with(char *str, char *pre)
{
	if (!str || !pre)
		return (0);
	return (string_substring_nfind(str, pre, string_length(pre)) != 0);
}

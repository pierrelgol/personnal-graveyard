/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_ends_with.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:00:38 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 22:00:39 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int string_ends_with(char *str, char *pre)
{
	char	*pstr;

	if (!str || !pre)
		return (0);
	pstr = &str[string_length(str) - string_length(pre) - 1];
	return (string_substring_nfind(pstr, pre, string_length(pre)) != 0);
}


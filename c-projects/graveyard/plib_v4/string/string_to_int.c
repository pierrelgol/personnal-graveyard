/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:00:43 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 16:00:44 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../plib.h"

int	string_to_int(char *str)
{
	long	result;
	long	sign;

	sign = 1;
	result = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		++str;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while (*str && (*str >= '0' && *str <= '9'))
		result = (*str++ - '0') + result * 10;
	return (result * sign);
}


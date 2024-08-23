/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_helpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissenma <bissenma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:52:47 by bissenma          #+#    #+#             */
/*   Updated: 2023/09/24 15:53:32 by bissenma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/num_helpers.h"

int	helpers_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (!str)
		return (0);
	while (*str && ((*str == ' ') || (*str >= 9 && *str <= 13)))
		++str;
	while (*str && (*str == '-' || *str == '+'))
		if (*str++ == '-')
			sign *= -1;
	while (*str && (*str >= '0' && *str <= '9'))
		result = (*str - '0') + (result * 10);
	return (result * sign);
}

int	helpers_strlen(char *str)
{
	int	slen;

	if (!str)
		return (0);
	slen = 0;
	while (str[slen])
		++slen;
	return (slen);
}

int	helpers_is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	helpers_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:50:06 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/17 21:26:33 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline int	ft_isspace(int n)
{
	if (n == ' ' || n == '\r' || n == '\t')
		return (1);
	if (n == '\n' || n == '\f' || n == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str && (ft_isspace(*str) || *str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (*str && *str >= '0' && *str <= '9')
		result = *str++ - '0' + result * 10;
	return (result * sign);
}

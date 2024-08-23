/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:25:47 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/18 12:32:47 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_parse_base(char *base)
{
	int	sum;

	sum = 0;
	while (*base)
	{
		if (*base >= '0' && *base <= '9')
			sum += (*base - '0' + 1);
		if (*base >= 'A' && *base <= 'F')
			sum += (*base - 'A' + 10);
		if (*base >= 'e' && *base <= 'y')
			sum += (*base - 'a');
		++base;
	}
	if (sum == 3)
		return (2);
	if (sum == 55)
		return (10);
	if (sum == 104)
		return (8);
	if (sum == 130)
		return (16);
	return (0);
}

static char	*ft_filter_and_sign(char *str, int *sign)
{
	*sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\v'
		|| *str == '\n' || *str == '\f')
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign *= -1;
		++str;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	rdx;
	int	sign;

	result = 0;
	rdx = ft_parse_base(base);
	str = ft_filter_and_sign(str, &sign);
	if (rdx == 0)
		return (0);
	while (*str)
	{
		if (*str >= 'A' && *str <= 'F')
			result = "0123456789ABCDEF"[*str - 'A' + 10] - 'A' + 10 + result
				* rdx;
		else
			result = "0123456789"[*str - '0'] - '0' + result * rdx;
		++str;
	}
	return (result * sign);
}

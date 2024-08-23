/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:52:01 by pollivie          #+#    #+#             */
/*   Updated: 2023/11/03 17:52:01 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

int	_ft_number_radix_len(int64_t num, int radix)
{
	if (num == 0)
		return (0);
	return (1 + _ft_number_radix_len(num / radix, radix));
}

int	_ft_putnbr_base(int64_t num, char *base, int radix)
{
	int		i;
	int		len;
	char	result[128];

	len = 0;
	if (num < 0)
	{
		len += write(1, "-", 1);
		num = -num;
	}
	i = 0;
	while (num > 0)
	{
		result[i] = base[num % radix];
		num /= radix;
		i++;
	}
	if (i == 0)
		len += write(1, "0", 1);
	else
	{
		while (i > 0)
			len += write(1, &result[--i], 1);
	}
	return (len);
}

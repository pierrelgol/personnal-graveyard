/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:17:56 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/17 21:26:06 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

static void	ft_write_rdx(long long int nbr, int rdx)
{
	if (nbr == 0)
		return ;
	ft_write_rdx((nbr / rdx), rdx);
	if (rdx == 8)
		write(1, &"poneyvif"[nbr % rdx], 1);
	else
		write(1, &"0123456789abcdef"[nbr % rdx], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	n;
	int				rdx;

	n = nbr;
	rdx = ft_parse_base(base);
	if (n <= 0)
	{
		if (n == 0)
			write(1, &"0", 1);
		else
			write(1, &"-", 1);
		n *= -1;
	}
	if (rdx != 0 && n != 0)
		ft_write_rdx(n, rdx);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:38:42 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/17 14:50:19 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static void	ft_write_nbr_r(long n)
{
	if (n == 0)
		return ;
	ft_write_nbr_r((n / 10));
	write(1, &"0123456789"[n % 10], 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n <= 0)
	{
		if (n == 0)
			write(1, &"0", 1);
		else
		{
			write(1, &"-", 1);
			n *= -1;
		}
	}
	ft_write_nbr_r(n);
}

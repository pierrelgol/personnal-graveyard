/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:18:25 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/20 10:30:42 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	char	ch[13];
	long	n;
	int		i;

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
	i = 0;
	while (n > 0)
	{
		ch[i++] = "0123456789"[(n % 10)];
		n /= 10;
	}
	while (i > 0)
		write(1, &ch[--i], 1);
	write(1, &"\n", 1);
}

void	ft_putstr(char *str)
{
	int	slen;

	if (str != (void *)0)
	{
		slen = 0;
		while (str[slen])
			++slen;
		write(1, str, slen);
		write(1, &"\n", 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	if (par != NULL)
	{
		i = 0;
		while (1)
		{
			if (par[i].size == 0 && par[i].str == 0 && par[i].copy == 0)
				break ;
			ft_putstr(par[i].str);
			ft_putnbr(par[i].size);
			ft_putstr(par[i].copy);
			++i;
		}
	}
}

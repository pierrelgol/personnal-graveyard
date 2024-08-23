/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:14:43 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/19 11:20:54 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static inline int	ft_is_print(int c)
{
	return (c >= 32 && c <= 126);
}

static void	ft_whex(int n)
{
	if (n != 0)
	{
		if (n > 16)
		{
			ft_whex((n / 10));
			write(1, &"0123456789abcdef"[n % 10], 1);
		}
		else
			write(1, &"0123456789abcdef"[n], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!(ft_is_print(*str)))
		{
			if (*str < 16)
				write(1, &"\\0", 2);
			else
				write(1, &"\\", 1);
			ft_whex(*str);
		}
		else
			write(1, str, 1);
		++str;
	}
}

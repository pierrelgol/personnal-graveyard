/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:37:03 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/16 17:38:20 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static void	ft_print_number(int *num, int depth)
{
	int		i;
	char	ch;

	i = 0;
	while (i < depth)
	{
		ch = num[i++] + '0';
		write(1, &ch, 1);
	}
	if (num[0] != 10 - depth)
		write(1, ", ", 2);
}

static void	ft_compute_combn(int *num, int final_depth, int current_depth, int prev_i)
{
	int	i;

	if (current_depth == final_depth)
	{
		ft_print_number(num, final_depth);
		return ;
	}
	i = prev_i + 1;
	while (i < 10)
	{
		num[current_depth] = i;
		ft_compute_combn(num, final_depth, current_depth + 1, i);
		i++;
	}
}

void	ft_print_combn(int n)
{
	if (n >= 1 && n <= 9)
		ft_compute_combn((int [9]){0}, n, 0, -1);
}

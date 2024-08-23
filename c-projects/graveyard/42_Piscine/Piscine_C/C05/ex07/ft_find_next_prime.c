/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:58:04 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/19 11:24:16 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_is_prime(unsigned int nb)
{
	register unsigned int	i;
	register unsigned int	n;

	if (nb < 2)
		return (0);
	i = 2;
	n = nb;
	while ((i * i) <= n)
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;

	if(nb == 2)
		return (2);
	i = nb + 1;
	while (!(ft_is_prime(i)))
		++i;
	return (i);
}

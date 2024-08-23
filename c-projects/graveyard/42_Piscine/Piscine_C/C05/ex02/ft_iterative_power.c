/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:40:35 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/18 13:56:53 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int pow)
{
	int	result;

	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	result = nb;
	while (--pow > 0)
		result *= nb;
	return (result);
}

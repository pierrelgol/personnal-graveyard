/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:53:53 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/18 13:57:35 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline float	ft_fabs(float x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	ft_sqrt(int nb)
{
	float	epsilon;
	float	x;

	if (nb <= 0)
		return (0);
	x = nb * 0.5;
	epsilon = 0.000001;
	while (ft_fabs((x * x) - nb) > epsilon)
	{
		x = 0.5 * (x + nb / x);
	}
	if ((int)x == x)
		return (x);
	else
		return (0);
}

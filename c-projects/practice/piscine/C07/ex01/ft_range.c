/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:28:41 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/20 14:54:20 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	else if (min < 0 && max > 0)
		size = max + (-min);
	else
		size = max - min;
	range = (int *)malloc(sizeof(int) * (size + 1));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		range[i++] = min++;
	return (range);
}

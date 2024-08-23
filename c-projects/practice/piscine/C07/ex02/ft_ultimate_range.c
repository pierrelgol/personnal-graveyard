/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:28:41 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/20 14:54:54 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = (void *)0;
		return (-1);
	}
	else if (min < 0 && max > 0)
		size = max + (-min);
	else
		size = max - min;
	result = (int *)malloc(sizeof(int) * (size));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		result[i++] = min++;
	*range = result;
	return (size);
}

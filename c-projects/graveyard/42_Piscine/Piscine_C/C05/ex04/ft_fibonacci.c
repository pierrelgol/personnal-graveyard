/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:47:47 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/18 13:57:23 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_fib_recursive(int result[4], int index)
{
	if (index < 3)
		return (result[index]);
	result[3] = result[2] + result[1];
	result[1] = result[2];
	result[2] = result[3];
	return (0 + ft_fib_recursive(result, index - 1));
}

int	ft_fibonacci(int index)
{
	int	*result;

	if (index < 0)
		return (-1);
	result = (int [4]){0, 1, 1, 2};
	return (ft_fib_recursive(result, index));
}

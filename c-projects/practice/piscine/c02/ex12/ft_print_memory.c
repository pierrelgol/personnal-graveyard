/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:17:02 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/17 11:17:42 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_hex(unsigned long int number, unsigned int size)
{
	if (size == 0)
		return ;
	ft_print_hex(number / 16, size - 1);
	write(1, &"0123456789abcdef"[number % 16], 1);
}

void	ft_print_16(char *at, unsigned int size)
{
	unsigned int	i;

	i = 0;
	ft_print_hex((unsigned long int)at, 16);
	write(1, &": ", 2);
	while (i < size)
	{
		ft_print_hex((unsigned long int)*(at + i), 2);
		ft_print_hex((unsigned long int)*(at + i + 1), 2);
		write(1, &"  ", 2);
		i += 2;
	}
	i = 0;
	while (i < size)
	{
		if (*(at + i) >= 32 && *(at + i) <= 126)
			write(1, (at + i), 1);
		else
			write(1, &".", 1);
		++i;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	const void	*end;
	char		*current;

	current = (char *)addr;
	end = (const void *)(addr + size);
	while ((void *)current < end && size != 0)
	{
		if (size >= 16)
			ft_print_16(current, 16);
		else
			ft_print_16(current, size);
		size -= 16;
		current += 16;
		write(1, &"\n", 1);
	}
	return (addr);
}

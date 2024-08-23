/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierreollivier <plgol.perso@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:55:18 by pierreollivie     #+#    #+#             */
/*   Updated: 2023/07/07 11:55:25 by pierreollivie    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int num_len(long int n)
{
	unsigned int count;

	count = 0;
	while(n > 0 && count++)
		n /= 10;

	return (count);
}

char	*ft_itoa(int n)
{
	char *result;
	char *buffer;
	long int ln;
	int i;

	i = 0;
	ln = n;
	buffer = (char[33]){0};
	if(ln == 0)
		return (char*) calloc(1, sizeof(char));
	else if(ln < 0)
	{
		buffer[i--] = '-';
		ln *= -1;
	}
	while(ln > 0)
	{
		buffer[i++] = '0' + ln % 10;
		ln /= 10;
	}
	result = (char*) calloc(1, sizeof(char[33]) - i);

	return (result);
}


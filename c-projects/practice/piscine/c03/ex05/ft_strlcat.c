/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:25:08 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/17 14:36:38 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j] && i < (size - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	while (src[j])
	{
		++j;
		++i;
	}
	return (i);
}

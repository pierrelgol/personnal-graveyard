/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:12:52 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/19 11:19:22 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	if (dest != (void *)0 && src != (void *)0)
	{
		i = 0;
		while (*src && i < n)
		{
			dest[i] = *src++;
			i++;
		}
		while (i < n)
			dest[i++] = '\0';
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:12:36 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/17 14:24:11 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*pto;
	char	*psrc;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		pto = to_find;
		psrc = str;
		while (*psrc == *pto)
		{
			if (*(pto + 1) == '\0' && *psrc == *pto)
				return (str);
			++pto;
			++psrc;
		}
		++str;
	}
	return ((void *)0);
}

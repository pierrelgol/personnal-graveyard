/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_upercase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:07:09 by plgol.perso       #+#    #+#             */
/*   Updated: 2023/11/30 16:07:12 by plgol.perso      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*string_to_upercase(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		++str;
	}
	return (str);
}


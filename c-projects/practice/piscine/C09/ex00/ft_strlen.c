/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:24:56 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/16 18:27:12 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	pointer arithmetic generate more efficient code this is a place
	where it make sense in my opinion.
*/

int	ft_strlen(char *str)
{
	char	*ps;

	if (str != (void *)0)
	{
		ps = str;
		while (*ps)
			++ps;
		return (ps - str);
	}
	return (0);
}


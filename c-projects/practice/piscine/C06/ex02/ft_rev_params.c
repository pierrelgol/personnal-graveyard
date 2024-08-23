/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:12:23 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/19 10:47:41 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	unsigned int	arglen;
	int				i;

	i = argc;
	while (i >= 1)
	{
		arglen = 0;
		while (argv[i][arglen])
			++arglen;
		write(1, argv[i--], arglen);
		write(1, &"\n", 1);
	}
	return (0);
}

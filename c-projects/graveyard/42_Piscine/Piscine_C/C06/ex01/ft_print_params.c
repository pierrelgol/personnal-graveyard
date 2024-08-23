/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:50:35 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/19 10:11:26 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned int	arglen;

	while (argc > 1)
	{
		arglen = 0;
		while (argv[argc][arglen])
			++arglen;
		write(1, argv[argc], arglen);
		write(1, &"\n", 1);
		argc--;
	}
	return (0);
}

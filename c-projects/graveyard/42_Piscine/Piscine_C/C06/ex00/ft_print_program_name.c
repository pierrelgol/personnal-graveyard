/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:53:46 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/19 10:08:14 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	unsigned int	arglen;

	while (argc > 0)
		argc--;
	arglen = 0;
	while (argv[argc][arglen])
		++arglen;
	write(1, argv[argc], arglen);
	write(1, &"\n", 1);
	return (0);
}

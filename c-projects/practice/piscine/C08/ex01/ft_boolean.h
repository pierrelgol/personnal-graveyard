/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:02:08 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/19 17:21:39 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum e_bool
{
	FALSE = 0,
	TRUE = 1,

}		t_bool;

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(x) ((((x) & (1)) != (1)))
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fmt_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:49:52 by pollivie          #+#    #+#             */
/*   Updated: 2023/11/03 17:49:54 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	char	*pstr;

	pstr = str;
	while (*pstr)
		++pstr;
	return (pstr - str);
}

int	ft_print_fmt_str(va_list *arg)
{
	char	*str;

	str = va_arg(*arg, char *);
	return (write(1, str, ft_strlen(str)));
}

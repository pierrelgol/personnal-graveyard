/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fmt_lhex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:49:38 by pollivie          #+#    #+#             */
/*   Updated: 2023/11/03 17:49:39 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_fmt_lhex(va_list *arg)
{
	int64_t	lhex;

	lhex = va_arg(*arg, int64_t);
	return (_ft_putnbr_base(lhex, "0123456789abcdef", 16));
}

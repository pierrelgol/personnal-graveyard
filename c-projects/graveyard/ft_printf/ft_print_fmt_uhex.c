/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fmt_uhex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:50:14 by pollivie          #+#    #+#             */
/*   Updated: 2023/11/03 17:50:15 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_fmt_uhex(va_list *arg)
{
	uint64_t	lhex;

	lhex = va_arg(*arg, uint64_t);
	return (_ft_putnbr_base(lhex, "0123456789ABCDEF", 16));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fmt_u32.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:50:02 by pollivie          #+#    #+#             */
/*   Updated: 2023/11/03 17:50:03 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_fmt_u32(va_list *arg)
{
	unsigned int	u32;

	u32 = va_arg(*arg, unsigned int);
	return (_ft_putnbr_base(u32, "0123456789", 10));
}

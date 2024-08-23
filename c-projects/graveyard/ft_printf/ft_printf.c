/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:03:20 by pollivie          #+#    #+#             */
/*   Updated: 2023/11/03 17:03:22 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_printf(const char *fmt, ...)
{
	int		count;
	va_list	args;
	t_fsm	fsm;

	count = 0;
	va_start(args, fmt);
	fsm = fsm_init(fmt);
	while (*fsm.fmt)
	{
		fsm.curr = fsm.get_curr_state(fsm.curr, *fsm.fmt);
		fsm.use_print_fmt = fsm.get_print_fmt(fsm.curr);
		if (fsm.curr == FSM_PRINT_CHAR)
			count += fsm.use_print_fmt((va_list *)fsm.fmt);
		else
			count += (fsm.use_print_fmt(&args));
		fsm.fmt++;
	}
	return (count);
}

int	main(void)
{
	int	ch;
	int	var;
	int	count1;
	int	count2;

	ch = 65;
	var = 12345678;
	count1 = 0;
	count2 = 0;
	count1 += ft_printf("%c\n", ch);
	count1 += ft_printf("%d\n", var);
	count1 += ft_printf("%u\n", var);
	count1 += ft_printf("%i\n", var);
	count1 += ft_printf("%x\n", var);
	count1 += ft_printf("%X\n", var);
	count1 += ft_printf("%p\n", &ch);
	count1 += ft_printf("%%\n");
	count1 += ft_printf("%s\n", "end");
	count2 += printf("%c\n", ch);
	count2 += printf("%d\n", var);
	count2 += printf("%u\n", var);
	count2 += printf("%i\n", var);
	count2 += printf("%x\n", var);
	count2 += printf("%X\n", var);
	count2 += printf("%p\n", &ch);
	count2 += printf("%%\n");
	count2 += printf("%s\n", "end");
	printf("results :\nprintf = %d\nft_printf = %d", count2, count1);
	return (0);
}

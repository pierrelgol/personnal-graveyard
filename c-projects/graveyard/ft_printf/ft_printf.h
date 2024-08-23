/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:25:24 by pollivie          #+#    #+#             */
/*   Updated: 2023/11/03 16:25:25 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

// # define UNUSED_ARGUMENT(x) ((void)(x))

/* ------------------------------ ft_printf.c ------------------------------ */

int						ft_printf(const char *fmt, ...);

/* ------------------------------ ft_fsm.c --------------------------------- */

enum					e_state
{
	FSM_START,
	FSM_LOOK_FOR_FMT,
	FSM_FOUND_FMT_I8,
	FSM_FOUND_FMT_I32,
	FSM_FOUND_FMT_U32,
	FSM_FOUND_FMT_LHEX,
	FSM_FOUND_FMT_UHEX,
	FSM_FOUND_FMT_STR,
	FSM_FOUND_FMT_PTR,
	FSM_PRINT_CHAR,
	FSM_STOP,
};

typedef enum e_state	(*t_interpreter)(enum e_state state, int ch);
typedef int				(*t_print_fmt)(va_list *arg);
typedef t_print_fmt		(*t_dispatcher)(enum e_state state);

typedef struct s_fsm
{
	const char			*fmt;
	int					count;
	enum e_state		curr;
	t_interpreter		get_curr_state;
	t_print_fmt			use_print_fmt;
	t_dispatcher		get_print_fmt;
}						t_fsm;

t_fsm					fsm_init(const char *fmt);
enum e_state			fsm_interpret(enum e_state prev, int ch);
t_print_fmt				fsm_dispatch(enum e_state curr);
int						fsm_eat_char(va_list *arg);
int						fsm_put_char(va_list *arg);

/* ------------------------------ ft_putnbr_base.c ------------------------- */

int						_ft_putnbr_base(int64_t num, char *base, int radix);
int						_ft_number_radix_len(int64_t num, int radix);

/* ------------------------------ ft_print_fmt_i8.c ------------------------ */

int						ft_print_fmt_i8(va_list *arg);

/* ------------------------------ ft_print_fmt_i32.c ----------------------- */

int						ft_print_fmt_i32(va_list *arg);

/* ------------------------------ ft_print_fmt_u32.c ----------------------- */

int						ft_print_fmt_u32(va_list *arg);

/* ------------------------------ ft_print_fmt_str.c ----------------------- */

int						ft_print_fmt_str(va_list *arg);

/* ------------------------------ ft_print_fmt_lhex.c ---------------------- */

int						ft_print_fmt_lhex(va_list *arg);

/* ------------------------------ ft_print_fmt_uhex.c ---------------------- */

int						ft_print_fmt_uhex(va_list *arg);

/* ------------------------------ ft_print_fmt_ptr.c ----------------------- */

int						ft_print_fmt_ptr(va_list *arg);

#endif

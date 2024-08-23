# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 17:46:51 by Plgol             #+#    #+#              #
#    Updated: 2023/07/16 17:46:54 by Plgol            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC     = cc
CFLAGS = -Wall -Wextra -Werror -ggdb

SRC    = ft_printf.c			\
		 ft_fsm.c 				\
		 ft_putnbr_base.c 		\
		 ft_print_fmt_i32.c 	\
		 ft_print_fmt_u32.c		\
		 ft_print_fmt_i8.c		\
		 ft_print_fmt_str.c		\
		 ft_print_fmt_ptr.c		\
		 ft_print_fmt_lhex.c	\
		 ft_print_fmt_uhex.c	\

LIB    = ft_printf.h
NAME   = printf

.PHONY all:

all: $(NAME)

$(NAME): $(SRC) $(LIB)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	rm -f $(NAME)

fclean: clean
	rm -f *.o $(NAME)

test:
	./$(NAME)

re: fclean all test




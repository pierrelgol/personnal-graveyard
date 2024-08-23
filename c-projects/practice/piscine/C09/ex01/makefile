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

# Makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror

src	=   src/ft_putchar.c src/ft_swap.c src/ft_putstr.c src/ft_strlen.c src/ft_strcmp.c

name = libft.a

obj	=  ${src:.c=.o}

HEADERS	= includes/

.c.o	:
		gcc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o ${<:.c=.o}

${name} : ${obj}
		ar rc ${name} ${obj}

all : ${name}


clean :
		rm -f ${obj}

fclean : clean
		rm -f ${name}

re : fclean all
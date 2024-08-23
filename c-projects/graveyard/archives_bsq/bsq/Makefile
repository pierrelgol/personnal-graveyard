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

CC     = gcc
CFLAGS = -Wall -Wextra -Werror -ggdb
SRC    = src/*.c
LIB    = lib/*.h
NAME   = bin/bsq

.PHONY all:

all: $(NAME)

$(NAME): $(SRC) $(LIB)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	rm -f $(NAME)

fclean: clean

	rm -f *.o $(NAME)

re: fclean all


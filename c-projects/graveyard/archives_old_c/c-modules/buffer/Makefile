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
CFLAGS = -Wall -Wextra -Werror -ggdb -DDEBUG_MODE=1
SRC    = *.c
LIB    = *.h
NAME   = buffer

.PHONY all:

all: $(NAME)

$(NAME): $(SRC) $(LIB)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	rm -f $(NAME)

fclean: clean

	rm -f *.o $(NAME)

re: fclean all


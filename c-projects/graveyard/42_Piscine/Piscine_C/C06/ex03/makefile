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
CC = cc
CFLAGS = -Weverything -Wall -Wextra -Werror

src = ft_sort_params.c 

name = a.out

all: $(name)

$(name): $(src)
	$(CC) $(CFLAGS) $(src) -o $(name)

clean:
	rm -f $(name)

fclean: clean

	rm -f name

re: fclean all


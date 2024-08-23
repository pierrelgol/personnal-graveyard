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
CFLAGS = -Wall -Wextra -Werror -pedantic -g

# Source files
src = ft_do-op.c

# Name of the executable
name = ft_do-op

.PHONY all:

# Default target
all: $(name)

# Compile the executable
$(name): $(src)
	$(CC) $(CFLAGS) $(src) -o $(name)

# Clean the build files
clean:
	rm -f $(name)

# Clean the build files and additional generated files
fclean: clean

	rm -f *.o $(name)

# Rebuild the project
re: fclean all


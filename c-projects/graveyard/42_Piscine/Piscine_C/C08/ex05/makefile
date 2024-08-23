# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 17:46:51 by Plgol             #+#    #+#              #
#    Updated: 2023/07/20 10:14:55 by Plgol            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -g

# Source files
src = ft_strs_to_tab.c ft_show_tab.c

# Header files
header = ft_stock_str.h

# Name of the executable
name = a.out

# Default target
all: $(name)

# Compile the executable
$(name): $(src) $(header)
	$(CC) $(CFLAGS) $(src) -o $(name)

# Clean the build files
clean:
	rm -f $(name)

# Clean the build files and additional generated files
fclean: clean

# Add any additional generated files to be removed
	rm -f additional_file

# Rebuild the project
re: fclean all


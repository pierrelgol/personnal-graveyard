# Makefile
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -Wdisabled-optimization

src = ft_print_memory.c

name = bin


all: $(name)

$(name): $(src)
	$(CC) $(CFLAGS) $(src) -o $(name)

clean:
	rm -f $(name)

fclean: clean

	rm -f additional_file

re: fclean all


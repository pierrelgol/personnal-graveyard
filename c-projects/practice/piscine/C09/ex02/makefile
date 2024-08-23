# Makefile
CC = clang
CFLAGS = -Wall -Wextra -Werror -pedantic -g

# Source files
src = ft_split.c

# Name of the executable
name = bin

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

# Add any additional generated files to be removed
	rm -f additional_file

# Rebuild the project
re: fclean all


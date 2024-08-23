# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plgol.perso <pollivie@student.42.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 16:10:27 by plgol.perso       #+#    #+#              #
#    Updated: 2023/11/12 16:10:28 by plgol.perso      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC          = cc
RM          = rm -f
CFLAGS 	    = -Wall -Wextra -Werror

NAME        = libplib.a
SHARED_NAME = libplib.so

SRCS        = ./string/string_length.c				\
			  ./string/string_nlength.c				\
			  ./string/string_duplicate.c			\
			  ./string/string_nduplicate.c			\
			  ./string/string_copy.c				\
			  ./string/string_ncopy.c				\
			  ./string/string_concat.c				\
			  ./string/string_nconcat.c				\
			  ./string/string_compare.c				\
			  ./string/string_ncompare.c			\
			  ./string/string_join.c				\
			  ./string/string_njoin.c				\
			  ./string/string_split_destroy.c		\
			  ./string/string_split.c				\
			  ./string/string_nsplit.c				\
			  ./string/string_split_set.c			\
			  ./string/string_index_of.c			\
			  ./string/string_count.c				\
			  ./string/string_find_first.c			\
			  ./string/string_find_last.c			\
			  ./string/string_slice.c				\
			  ./string/string_sort.c				\
			  ./string/string_random.c				\
			  ./string/string_scramble.c			\
			  ./string/string_reverse.c				\
			  ./string/string_trim.c				\
			  ./string/string_filter.c				\
			  ./string/string_substring_find.c		\
			  ./string/string_substring_nfind.c		\
			  ./string/string_substring_replace.c	\
			  ./string/string_substring_create.c	\
			  ./string/string_to_int.c				\
			  ./string/string_to_long.c				\
			  ./string/string_to_uint.c				\
			  ./string/string_to_ulong.c			\
			  ./string/string_to_boolset.c			\
			  ./string/string_to_set.c				\
			  ./string/string_to_lowercase.c		\
			  ./string/string_to_upercase.c			\
			  ./string/string_to_capitalize.c		\
			  ./string/string_map_find.c			\
			  ./string/string_map_count.c			\
			  ./string/string_map_filter.c			\
			  ./string/string_map_apply.c			\
			  ./string/string_start_with.c			\
			  ./string/string_ends_with.c			\
													\
			  ./memory/memory_alloc.c				\
			  ./memory/memory_dealloc.c				\
			  ./memory/memory_ncompare.c			\
			  ./memory/memory_ncopy.c				\
			  ./memory/memory_nsearch.c				\
			  ./memory/memory_nset.c				\
			  ./memory/memory_nset_alloc.c			\
			  ./memory/memory_zeroed_alloc.c		\
													\
			  ./char/char_is_alnum.c				\
			  ./char/char_is_alpha.c				\
			  ./char/char_is_ascii.c				\
			  ./char/char_is_binary.c				\
			  ./char/char_is_decimal.c				\
			  ./char/char_is_digit.c				\
			  ./char/char_is_even.c					\
			  ./char/char_is_odd.c					\
			  ./char/char_is_hex.c					\
			  ./char/char_is_lowercase.c			\
			  ./char/char_is_newline.c				\
			  ./char/char_is_octal.c				\
			  ./char/char_is_odd.c					\
			  ./char/char_is_printable.c			\
			  ./char/char_is_spaces.c				\
			  ./char/char_is_uppercase.c			\
			  ./char/char_is_whitespace.c			\
			  ./char/char_to_hash.c					\
			  ./char/char_to_lowercase.c			\
			  ./char/char_to_nextchar.c				\
			  ./char/char_to_prevchar.c				\
			  ./char/char_to_random.c				\
			  ./char/char_to_reversecase.c			\
			  ./char/char_to_uppercase.c			\
			  ./char/char_to_zero.c					\
			  ./char/char_sort_ascending.c			\
			  ./char/char_sort_descending.c			\

OBJS       = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

so: $(OBJS)
	$(CC) $(CLFAGS) -shared -o $(SHARED_NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(SHARED_NAME)

re: fclean all


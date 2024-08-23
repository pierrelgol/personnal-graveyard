lCC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -ggdb
NAME = lexer

SDIR = ./src
LDIR = ./lib

SRCS = $(SDIR)/lex_driver.c		\
	   $(SDIR)/lex_file.c 		\
	   $(SDIR)/lex_scanner.c 	\
	   $(SDIR)/lex_token.c 		\
	   $(SDIR)/lex_tokenizer.c 	\
	   $(SDIR)/lex_symtab.c 	\
	   $(SDIR)/lex_memory.c 	\
	   $(SDIR)/lex_fsm.c	 	\
	   
	   
HDRS = $(LDIR)/lex_driver.h 	\
	   $(LDIR)/lex_file.h 		\
	   $(SDIR)/lex_scanner.h 	\
	   $(SDIR)/lex_token.h 		\
	   $(SDIR)/lex_tokenizer.h 	\
	   $(SDIR)/lex_symtab.h 	\
	   $(LDIR)/lex_memory.h 	\
	   $(SDIR)/lex_fsm.h	 	\

OBJS = $(patsubst $(SDIR)/%.c, $(SDIR)/%.o, $(SRCS))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(SDIR)/%.o: $(SDIR)/%.c $(HDRS)
	$(CC) $(CFLAGS) -I$(LDIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

test :
	./$(NAME) test.c

re: fclean all test fclean

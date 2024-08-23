# Compiler
CC = clang

# Compiler Flags
CFLAGS = -g -Wall

# Header Files Location
INCLUDES = -I.

# Source Files ( insert name of files)
SRC = MergeSort.c benchmark.c 

# Object Files
OBJ = $(SRC:.c=.o)

# Executable Name
EXEC = benchmark

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: clean all
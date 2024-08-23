CC=gcc
INCDIRS=-Isrc
OPT=-O0
BINAME=main
CFLAGS=-Wall -Wextra -g $(INCDIRS) $(OPT)

# Use wildcard to get all .c files in the src directory
CFILES=$(wildcard src/*.c)

# Use patsubst to replace the .c extension with .o
OBJECTS=$(patsubst src/%.c, src/%.o, $(CFILES))

BINARY=$(wildcard bin/$(BINAME))
all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

# Use wildcard to get all .o files in the src directory
src/%.o: src/%.c src/%.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BINARY) $(OBJECTS)



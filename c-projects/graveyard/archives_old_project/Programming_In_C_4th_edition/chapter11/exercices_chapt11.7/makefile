CC = gcc
CFLAGS = -g -Wall -Wextra -Wpedantic -std=c11
SRC_DIR = src
BIN_DIR = bin

# Find all .c files in the SRC_DIR and create an object file for each
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%.o,$(SRC_FILES))

# Define the executable targets
EXE_FILES = $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%,$(SRC_FILES))

all: $(EXE_FILES)

$(BIN_DIR)/%: $(BIN_DIR)/%.o
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

clean:
	rm -rf $(BIN_DIR)/*

.PHONY: all clean

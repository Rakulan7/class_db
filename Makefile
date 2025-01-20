CC = gcc
CFLAGS = -Wall -Wextra -g

SRC_DIR = src
SRC_FILES = $(SRC_DIR)/main.c $(SRC_DIR)/repl.c $(SRC_DIR)/btree.c
OBJ_FILES = $(SRC_FILES:.c=.o)

TARGET = sgbd

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ_FILES)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(SRC_DIR)/%.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES) $(TARGET)

.PHONY: all clean
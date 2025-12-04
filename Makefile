CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = db
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

clean:
	rm -f $(TARGET) $(OBJ)

.PHONY: clean

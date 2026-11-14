CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = guess_the_number.exe

.PHONY: all run clean

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
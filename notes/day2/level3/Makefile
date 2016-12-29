CC = gcc
CFLAGS = -m32 -z execstack

all: anti_debugging.c
	$(CC) $(CFLAGS) $^ -o level3

clean:
	rm level3

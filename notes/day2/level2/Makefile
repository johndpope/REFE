CC = gcc
CFLAGS = -m32 -z execstack

all: self_modifying.c
	$(CC) $(CFLAGS) $^ -o level2

clean:
	rm level2

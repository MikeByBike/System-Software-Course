CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Exercise9

Exercise9: Exercise9.o Struct.o
	$(CC) $(CFLAGS) -o Exercise9 Exercise9.o Struct.o -lm

Exercise9.o: Exercise9.c Struct.h
	$(CC) $(CFLAGS) -c Exercise9.c

Struct.o: Struct.c Struct.h
	$(CC) $(CFLAGS) -c Struct.c

clean:
	$(RM) Exercise9 *.o *~

CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Main

Main: Main.o Array.o
	$(CC) $(CFLAGS) -o Main Main.o Array.o -lm

Main.o: Main.c Array.h
	$(CC) $(CFLAGS) -c Main.c

Array.o: Array.c Array.h
	$(CC) $(CFLAGS) -c Array.c

clean:
	$(RM) Main *.o *~

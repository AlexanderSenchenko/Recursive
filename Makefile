.PHONY: gdb 

all:
	gcc -Wall -o main src/*.c

gdb:
	gcc -Wall -g -O0 -o gdbtest main.c
	gdb ./gdbtest

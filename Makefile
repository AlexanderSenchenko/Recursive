.PHONY: gdb 

all:
	gcc -Wall -o main main.c

gdb:
	gcc -Wall -g -O0 -o gdbtest main.c
	gdb ./gdbtest

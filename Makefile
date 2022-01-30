all: run

run:
	@gcc main.c && ./a.out $(arg); rm a.out
install:
	@gcc main.c && cp a.out /usr/local/bin/isOdd

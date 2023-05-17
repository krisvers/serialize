CC = gcc
CCFLAGS = -Iinclude -std=c99 -Wall -Werror -Wextra -Wpedantic
CFILES = $(shell find . -type f -name "*.c")
OUTFILE = ./serialize

all:
	$(CC) $(CFILES) -o $(OUTFILE) $(CCFLAGS)

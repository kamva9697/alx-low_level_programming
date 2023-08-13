#!/bin/python3

import os

current_dir = os.path.curdir

with open(f"{current_dir}/Makefile", 'w') as makefile:
    make = """CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -std=gnu89
files := main.c main.h

main: main.c main.h
	$(CC) $(CFLAGS) $(files) -o main
clean:
	rm -f main
run:
	./main

"""

    makefile.write(make)

print(f"ALX Makefile generated at {current_dir}")

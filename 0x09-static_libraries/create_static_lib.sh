#!/bin/bash

gcc -c main.h ./*.c

ar rcs liball.a ./*.o


#!/bin/bash
gcc -Wall -pedantic -Werror -Wentra -c *.c
ar -rc liball.a *.o
ranlib liball.a

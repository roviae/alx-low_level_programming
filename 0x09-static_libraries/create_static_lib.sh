#!/bin/bash
gcc -Wall -pedantic -Wno-extra -c *.c
ar -rc liball.a *.o
ranlib liball.a

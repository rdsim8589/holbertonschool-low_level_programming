#!/bin/bash
gcc -g -c -fPIC -Wall *.c
gcc -g -shared -o liball.so *.o

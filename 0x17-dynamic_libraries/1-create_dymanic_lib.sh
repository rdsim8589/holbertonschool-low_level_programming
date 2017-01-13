#!/bin/bash
gcc -c -fPIC -Wall *.c
gcc -shared -o liball.so *.o

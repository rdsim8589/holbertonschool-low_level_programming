#!/bin/bash
gcc -g -fPIC -Wall *.c
gcc -g -shared -o liball.so *.o

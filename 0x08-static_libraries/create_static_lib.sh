#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c;
ar -rc liball.a *.o;
chmod u+x liball.a;

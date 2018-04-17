#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -fPIC *.c
gcc -shared -o liball.so -Wall -Werror -Wextra -pedantic *.o

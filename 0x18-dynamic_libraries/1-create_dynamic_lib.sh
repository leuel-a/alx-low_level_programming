#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic -c *.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic *.o -shared -o liball.so

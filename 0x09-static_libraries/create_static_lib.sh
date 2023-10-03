#!/bin/bash
gcc -c -Wall -Wextra -I. ./*.c && ar rcs liball.a ./*.o && rm ./*.o

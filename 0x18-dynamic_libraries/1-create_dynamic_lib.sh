#!/bin/bash
gcc -Wall -fPIC -c *.o
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
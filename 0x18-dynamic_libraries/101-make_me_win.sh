#!/bin/bash
gcc -shared -o libhack.so -fpic hack.c
export LD_PRELOAD=/.libhack.so:$LD_LIBRARY_PATH

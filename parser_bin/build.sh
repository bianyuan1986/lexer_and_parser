#!/bin/bash

set -x

if [ $1 = "shared" ]; then
	make clean && make shared SHARED_LIB=TRUE
else
	make clean && make
fi

gcc test_lib.c -L./ -lsqldetecter -o test_lib
LD_LIBRARY_PATH=./ ./test_lib "1 and 1=1"


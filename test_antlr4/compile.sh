#!/bin/bash

#use -pg switch for gprof
#/usr/bin/g++_5_0 -pg -O3 -std=c++11 -I/usr/local/include/antlr4-runtime sqliLexer.cpp sqliParser.cpp sqliParserBaseListener.cpp sqliParserListener.cpp cpp_test.cpp -lantlr4-runtime -I./ -o test_case
/usr/bin/g++_5_0 -DTEST_TIME -O3 -std=c++11 -I/usr/local/include/antlr4-runtime/tree -I/usr/local/include/antlr4-runtime sqliLexer.cpp sqliParser.cpp sqliParserBaseListener.cpp sqliParserListener.cpp cpp_test.cpp -lantlr4-runtime -I./ -o test_case

LD_LIBRARY_PATH=../gcc_install/gcc_5.2.0_install/lib64 ./test_case

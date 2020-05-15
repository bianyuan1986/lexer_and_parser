# Makefile for sql parser

CFLAGS = -g -O3 -fPIC -m64 

ifeq ($(SHARED_LIB), TRUE)
	CFLAGS += -DSHARED
endif

all: mysql.o mysql.tab.o mysql_parser.o
	gcc $(CFLAGS) $^ -o parser_bin

shared: mysql.o  mysql.tab.o mysql_parser.o
	gcc $(CFLAGS) -shared $^ -o libsqldetecter.so

mysql.o: mysql.c
	gcc $(CFLAGS) -c $< -o $@

mysql.tab.o: mysql.tab.c mysql.tab.h
	gcc $(CFLAGS) -c $< -o $@

mysql_parser.o: mysql_parser.c
	gcc $(CFLAGS) -c $< -o $@

mysql.c: mysql.l
	flex -w -o mysql.c mysql.l

mysql.tab.c mysql.tab.h: mysql.y
	bison -vd mysql.y

clean:
	rm *.o

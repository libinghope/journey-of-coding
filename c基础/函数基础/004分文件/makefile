#sample Makefile
main: main.o fun.o
    gcc -o main fun.o main.o
main.o: main.c fun.h
    gcc -c main.c
fun.o: fun.c fun.h
    gcc -c fun.c
    
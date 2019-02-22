CC=g++ 
CFLAGS=-c
all: LStack.out

LStack.out: ./Main.o  ./LStack/LStack.o
	$(CC) ./Main.o ./LStack/LStack.o -o LStack.out

Main.o: ./Main.cpp
	$(CC) $(CFLAGS) ./Main.cpp

LStack.o: ./LStack/LStack.cpp
	$(CC) $(CFLAGS) ./LStack/LStack.cpp

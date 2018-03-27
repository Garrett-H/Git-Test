CC=g++

DEBUG=-g

TARGET=main

CFLAGS= -c -Wall $(DEBUG)

all: $(TARGET)

$(TARGET): main.o
	   $(CC) main.o -o $(TARGET)

main.o: main.o
	$(CC)  $(CFLAGS) main.cpp

clean:
	rm *.o $(TARGET)
	rm *~

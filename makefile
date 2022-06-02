CXX_FLAG = --std=c++11 -g

all: test

test: test.o heap.o
	g++ $(CXX_FLAG) -o test test.o heap.o

test.o: test.cpp
	g++ -c $(CXX_FLAG) test.cpp

heap.o: heap.cpp heap.h
	g++ -c $(CXX_FLAG) heap.cpp

clean:
	rm -f test *.o



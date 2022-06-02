CXX_FLAG = --std=c++11 -g

all: examheap

examheap: examheap.o heap.o
	g++ $(CXX_FLAG) -o examheap examheap.o heap.o

test: test.o heap.o
	g++ $(CXX_FLAG) -o test test.o heap.o

examheap.o: examheap.cpp
	g++ -c $(CXX_FLAG) examheap.cpp

test.o: test.cpp
	g++ -c $(CXX_FLAG) test.cpp

heap.o: heap.cpp
	g++ -c $(CXX_FLAG) heap.cpp

clean:
	rm -f examheap test *.o

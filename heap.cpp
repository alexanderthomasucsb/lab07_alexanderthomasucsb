// heap.cpp
// Diba Mirza

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
	vdata.push_back(value);
	int i  = vdata.max_size()-1;
	while(i != 0){
		int temp = i;
		i = (i-1)/2;
		if(value < vdata[i]){
			vdata[temp] = vdata[i];
			vdata[i] = value;
		}
	}



}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){

}

// Returns the minimum element in the heap
int Heap::top(){
  return *vdata.begin();
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){

	if(vdata.empty()){
		return true;
	}
	else{
		return false;
	}

}
    

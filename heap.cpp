// heap.cpp
// Diba Mirza

#include "heap.h"
#include <iostream>
using namespace std;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
	vdata.push_back(value);
	int i  = vdata.size()-1;
	while(i > 0){
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
	int temp = vdata[0];
	vdata[0] = vdata[vdata.size() -1];
	vdata[vdata.size()-1] = temp;
	vdata.pop_back();
	int i = 0;
	while(2*i+1 < vdata.size()){
		if(2*i+2 < vdata.size()){
			if(vdata[2*i+1] < vdata[2*i+2]){
				if(vdata[i] > vdata[2*i+1]){
					temp = vdata[i];
					vdata[i] = vdata[2*i+1];
					vdata[2*i+1] = temp;
					i = 2*i+1;
				}
				else{
					return;
				}
			}
			else {
				if(vdata[i] > vdata[2*i+2]){
                                        temp = vdata[i];
                                        vdata[i] = vdata[2*i+2];
                                        vdata[2*i+2] = temp;
                                        i = 2*i+2;
                                }
				else{
					return;
				}
			}
		}
		else{
			if(vdata[i] > vdata[2*i+1]){
                                        temp = vdata[i];
                                        vdata[i] = vdata[2*i+1];
                                        vdata[2*i+1] = temp;
                                        i = 2*i+1;
                         }
                         else{
                                        return;
                         }
		}
	}


		




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
    

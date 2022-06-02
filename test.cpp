#include "heap.h"
#include "iostream"

using namespace std;

int main(){
	Heap h;
	h.push(20);
	h.push(70);
	h.push(80);
	h.push(10);
	h.push(30);

	while(!h.empty()){
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;




	return 0;
}


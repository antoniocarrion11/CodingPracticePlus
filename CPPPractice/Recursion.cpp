//Practice for recursion, memoization aand hashmaps in C++

#include<iterator>
#include"Recursion.h"

int FibonacciSequence::createFibonacciToPosition(int pos) {
	if (fibonacciSequence.count(pos) != 0){
		return fibonacciSequence.at(pos);
	}
	if (pos == 0) {
		fibonacciSequence.insert(pos, 0);
		return 0;
	}
	else if (pos == 1) {
		fibonacciSequence.insert(pos, 1);
		return 1;
	}
	else if(fibonacciSequence.count(pos) == 0){
		fibonacciSequence.insert(pos, createFibonacciToPosition(pos - 1) + createFibonacciToPosition(pos - 2));
		return fibonacciSequence.at(pos);
	}

}

void FibonacciSequence::printSequence() {

	for (map<int, int>::iterator itr = fibonacciSequence.begin(); itr != fibonacciSequence.end(); itr++) {
		cout << "Pos: " << itr->first << ": " << itr->second << endl;
	}
	
}
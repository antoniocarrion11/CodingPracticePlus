//Practice for recursion, memoization aand hashmaps in C++

#include<iterator>
#include"Recursion.h"

using namespace std;

int FibonacciSequence::createFibonacciToPosition(int pos) {
	if (fibonacciSequence.count(pos) != 0){
		return fibonacciSequence.at(pos);
	}
	if (pos == 0) {
		fibonacciSequence.insert(make_pair(pos, 0));
		return 0;
	}
	else if (pos == 1) {
		fibonacciSequence.insert(make_pair(pos, 1));
		return 1;
	}
	else if(fibonacciSequence.count(pos) == 0){
		fibonacciSequence.insert(make_pair(pos, createFibonacciToPosition(pos - 1) + createFibonacciToPosition(pos - 2)));
		return fibonacciSequence.at(pos);
	}
}

void FibonacciSequence::printSequence() {

	for (map<int, int>::iterator i = fibonacciSequence.begin(); i != fibonacciSequence.end(); ++i) {
		cout << "Pos " << i->first << ": " << i->second << endl;
	}
	
}

//BinarySearcher::BinarySearcher(vector<int> orderedList) {
//	this->orderedList = orderedList;
//}


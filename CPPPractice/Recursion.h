#pragma once

#include<map>
#include<iostream>

using namespace std;

class FibonacciSequence {
public:
	int createFibonacciToPosition(int pos);
	void printSequence();
private:
	map<int, int> fibonacciSequence;
};
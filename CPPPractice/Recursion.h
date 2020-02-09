#pragma once

#include<map>
#include<iostream>
#include<vector>

using namespace std;

class FibonacciSequence {
public:
	FibonacciSequence::FibonacciSequence() {};
	int createFibonacciToPosition(int pos);
	void printSequence();
private:
	map<int, int> fibonacciSequence;
};

//class BinarySearcher {
//public:
//	BinarySearcher::BinarySearcher(vector<int> orderedList);
//	bool findValue(int value);
//private:
//	vector<int> orderedList;
//};
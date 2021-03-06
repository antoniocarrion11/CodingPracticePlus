// CPPPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cstdlib>
#include "PointersReferences.h"
#include "Inheritance.h"
#include "DataStructures.h"
#include "Recursion.h"
#include "StringManipulation.h"

using namespace std;

int main() {
	cout << "Hello Tony! \n";

	//Pointer practice
	PointersReferences().pointRefPractice();

	//Simple Inheritance practice
	Ship dingy = Ship("SS dingy", 1992);
	dingy.printNameAndYear();

	CruiseShip stormBorn = CruiseShip("S.S. StormBorn", 2020, 5);
	stormBorn.printNameAndYear();

	CruiseShip dingyRebuilt = CruiseShip(dingy, 200);
	dingyRebuilt.printNameAndYear();

	CargoShip cargo = CargoShip(dingy, 3089);
	cargo.printNameAndYear();

	//DataStructures
		//Stack with pointers
	Stack stack = Stack();
	stack.push(20);
	stack.push(19);
	stack.push(5);
	stack.printStack();
	stack.push(4);
	stack.pop();
	stack.pop();
	stack.pop();
	stack.printStack();
	stack.pop();

	//Queue with pointers
	Queue queue = Queue();
	for (int i = 0; i < 4; i++) {
		queue.printQueue();
		queue.enqueue(rand());
	}
	for (int i = 0; i < 4; i++) {
		queue.printQueue();
		queue.dequeue();
	}

	//Fibonacci
	cout << "Fibonacci Sequence: " << endl;
	cout << "enter a number~ ";
	int position;
	cin >> position;
	FibonacciSequence fibo = FibonacciSequence();
	fibo.createFibonacciToPosition(position);
	fibo.printSequence();

	//String compression
	string stringToBeCompressed;
	cout << "compress String: ";
	cin >> stringToBeCompressed;
	cout << endl;
	cout << "original string: " << stringToBeCompressed << ", compressed string: " 
			<< StringCompressor(stringToBeCompressed).stringCompression() << endl;

	
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

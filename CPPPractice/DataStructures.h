#pragma once

using namespace std;

class Stack {
	public:
		Stack();
		void push(int value) throw (underflow_error);
		int pop() throw (overflow_error);
		void printStack();
	private:
		size_t size;
		int stackStore[3];
		int* stackPointer;
};
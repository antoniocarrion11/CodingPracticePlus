#pragma once

using namespace std;

class Stack {
	public:
		Stack();
		void push(int value);
		int pop();
		void printStack();
	private:
		int stackStore[10];
		int* stackPointer;
};
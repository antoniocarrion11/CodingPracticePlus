//Practice for different data structure such as Stacks, Queues, Hashmaps, Linkedlists, and maps

#include <iostream>
#include "DataStructures.h"

Stack::Stack() {
	const size_t size = sizeof stackStore / sizeof stackStore[0];
	stackPointer = stackStore + size - 1;
}

void Stack::push(int value) {
	*stackPointer = value;
	cout << *stackPointer << " pushed onto stack" << endl;
	stackPointer--;
}

int Stack::pop() {
	stackPointer++;
	cout << *stackPointer << " is popped from the stack" << endl;
	int result = *stackPointer;
	*stackPointer = 0;
	return result;
}

void Stack::printStack() {
	cout << "Stack: " << endl;
	for (int value : stackStore) {
		cout << value << endl;
	}
}
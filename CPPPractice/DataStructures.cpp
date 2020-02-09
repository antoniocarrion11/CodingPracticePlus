//Practice for different data structure such as Stacks, Queues, Hashmaps, Linkedlists, and maps

#include <iostream>
#include<stdexcept>
#include "DataStructures.h"
using namespace std;

Stack::Stack() {
	size = sizeof stackStore / sizeof stackStore[0];
	stackPointer = stackStore + size - 1;
}

void Stack::push(int value) {
	try {
		if (stackPointer == stackStore - 1) {
			throw overflow_error("stack is full!");
		}
		*stackPointer = value;
		cout << *stackPointer << " pushed onto stack" << endl;
		stackPointer--;
	}
	catch (const std::exception& e) {
		cout << "EXCEPTION: " << e.what() << endl;
	}
}

int Stack::pop() {
	try {
		if (stackPointer == stackStore + size - 1) {
			throw underflow_error("stack is empty there is nothing to pop!");
		}
		stackPointer++;
		cout << *stackPointer << " is popped from the stack" << endl;
		int result = *stackPointer;
		*stackPointer = 0;
		return result;
		
	} catch(const std::exception& e){
		cout << "EXCEPTION: " << e.what() << endl;
	}
}

void Stack::printStack() {
	cout << "Stack: " << endl;
	for (int value : stackStore) {
		cout << value << endl;
	}
}

Queue::Queue() {
	max_capacity = sizeof queue / sizeof queue[0];
	currentSize = 0;
	head = queue;
	tail = queue;
}

void Queue::enqueue(int value) {
	cout << "we want to queue up: " << value << endl;
	try {
		if (currentSize < max_capacity) {
			*tail = value;
			tail++;
			currentSize++;
		}
		else {
			throw overflow_error("Line is full!");
		}
	}
	catch (const exception & e) {
		cout << "EXCEPTION: " << e.what() << endl;
	}
}

int Queue::dequeue() {
	try {
		if (currentSize > 0) {
			int result = *head;
			for (int i = 0; i <= currentSize; i++) {
				if (head != tail) {
					*head = *(head + 1);
					head++;
				}
				else {
					*head = 0;
				}
			}
			head = queue;
			tail--;
			currentSize--;
			return result;
		}
		else {
			throw underflow_error("nothing to dequeue off the line!");
		}
	}
	catch (const exception & e) {
		cout << "EXCEPTION: " << e.what() << endl;
	}
}

void Queue::printQueue() {
	cout << "Queue: ";
	for (int value : queue) {
		cout << value << "--";
	}
	cout << endl;
}
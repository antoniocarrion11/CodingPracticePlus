//Practice for basic Pointers and References in C plus plus
#include <iostream>
#include <cstdlib>	 
#include "PointersReferences.h"
using namespace std;

PointersReferences::PointersReferences() {}
PointersReferences::~PointersReferences() {}

void PointersReferences::pointRefPractice() {
	int i = 10;


	cout << "The value of i is " << i << ".\n"
		<< "The address of i is " << &i << ".\n"
		<< "The size in bytes of i is " << sizeof i << ".\n\n";

	int* p = &i; //Let the value of p be the address of i.

	cout << "The value of i is " << *p << ".\n"
		<< "The address of i is " << p << ".\n"
		<< "The size in bytes of i is " << sizeof * p << ".\n\n"

		<< "The value of p is " << p << ".\n"
		<< "The address of p is " << &p << ".\n"
		<< "The size in bytes of p is " << sizeof p << ".\n\n";


	//BUBBLE SORT USING POINTERS 
	int arr[] = { 4, 2, 30, 82, 25 };
	const size_t arrSize = sizeof arr / sizeof arr[0];

	cout << "unordered array printed with pointers: \n";
	for (int* point = arr; point < arr + arrSize; point++) {
		cout << point[0] << "\n";
	}
	cout << "\n";

	for (int* end = arr + arrSize - 1; arr < end; end--) {
		for (int* point = arr; point < end; ++point) {
			if (point[0] > point[1]) {
				swap(point[0], point[1]);
			}
		}
	}

	cout << "ordered array printed with pointers after bubble sort: \n";
	for (int* point = arr; point < arr + arrSize; point++) {
		cout << point[0] << "\n";
	}
	cout << endl;

}

void PointersReferences::swap(int& high, int& low) {
	int temp = low;
	low = high;
	high = temp;

}
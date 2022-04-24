/*
 * vectors_memory.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: alexramirez
 */

#include <iostream>
#include <vector>

using namespace std;

//int main() {
int vec_mem() {

	vector<double> numbers(0);

	cout << numbers.size() << endl;

	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;

	for(int i=0; i<10000; i++) {

		if(numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}

		numbers.push_back(i);
	}

	//numbers.resize(100);
	numbers.reserve(100000);

	cout << numbers[2] << endl;
	cout << "size: " << numbers.size() << endl;
	cout << "cap: " << numbers.capacity() << endl;

	return 0;
}



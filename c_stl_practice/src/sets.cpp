/*
 * sets.cpp
 *
 *  Created on: Apr 24, 2022
 *      Author: alexramirez
 */

#include <iostream>
#include <set>

using namespace std;

class Test {
	int id;
	string name;

public:
	Test(): id(0), name("") {

	}

	Test(int id, string name) :id(id), name(name) {

	}

	void print() const {
		cout << id << ": " << name << endl;
	}

	bool operator<(const Test &other) const {
		return(name < other.name);
	}
};

int main() {

	set<int> numbers;

	numbers.insert(50);
	numbers.insert(10);
	numbers.insert(30);
	numbers.insert(30);
	numbers.insert(20);

	for(set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	set<int>::iterator it_find = numbers.find(30);
	if(it_find != numbers.end()) {
		cout << "Found: " << *it_find << endl;
	}

	if(numbers.count(30)) {
		cout << "Number found." << endl;
	}

	set<Test> tests;

	tests.insert(Test(10, "Mike"));
	tests.insert(Test(30, "Joe"));
	tests.insert(Test(20, "Sue"));
	tests.insert(Test(333, "Joe"));


	for(set<Test>::iterator it = tests.begin(); it != tests.end(); it++) {
		it->print();
	}

	return 0;
}



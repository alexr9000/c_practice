/*
 * assignment.cpp
 *
 *  Created on: Apr 24, 2022
 *      Author: alexramirez
 */
#include <iostream>
using namespace std;

class oTest {
private:
	int id;
	string name;

public:
	oTest(): id(0), name("") {}

	oTest(int id, string name): id(id), name(name) {}

	void print() {
		cout << id << ": " << name << endl;
	}

	const oTest &operator=(const oTest &other) {
		cout << "Assignment" << endl;
		id = other.id;
		name = other.name;

		return *this;
	}

	oTest(const oTest &other) {
		cout << "Copy constructor running" << endl;
		//id = other.id;
		//name = other.name;
		*this = other;
	}
};

int main() {

	oTest test1(10, "Mike");
	test1.print();

	oTest test2(20, "Bob");

	test2 = test1;
	test2.print();

	oTest test3;
	test3.operator=(test2);
	test3.print();

	oTest test4 = test1;
	test4.print();

	return 0;
}



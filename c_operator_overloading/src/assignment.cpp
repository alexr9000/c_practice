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
};

int main() {

	return 0;
}



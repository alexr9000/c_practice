/*
 * custom_map.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: alexramirez
 */

#include <iostream>
#include <map>

using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person(string name, int age) :
		name(name), age(age) {
	}

	void print() const {
		cout << name << ": " << age << endl;
	}
};

int main() {



	return 0;
}



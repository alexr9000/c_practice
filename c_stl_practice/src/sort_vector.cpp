/*
 * sort_vector.cpp
 *
 *  Created on: Apr 24, 2022
 *      Author: alexramirez
 */
#include <iostream>
#include <vector>
using namespace std;

class Testy {
	int id;
	string name;

public:
	Testy(int id, string name) :id(id), name(name) {}

	void print() {
		cout << id << ": " << name << endl;
	}

	/*bool operator<(const Testy &other) const {
		return name < other.name;
	}*/

	friend bool comp(const Testy &a, const Testy &b);
};

bool comp(const Testy &a, const Testy &b) {
	return a.name < b.name;
}

//int main() {
int sorting() {
	vector<Testy> tests;

	tests.push_back(Testy(5, "Mike"));
	tests.push_back(Testy(10, "Sue"));
	tests.push_back(Testy(7, "Raj"));
	tests.push_back(Testy(3, "Vicky"));

	sort(tests.begin(), tests.end(), comp);

	for(int i=0; i<tests.size(); i++) {
		tests[i].print();
	}
	return 0;
}



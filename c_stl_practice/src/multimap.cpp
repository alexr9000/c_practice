/*
 * multimap.cpp
 *
 *  Created on: Apr 24, 2022
 *      Author: alexramirez
 */

#include <iostream>
#include <map>

using namespace std;

//int main() {
int multimaps() {

	multimap<int, string> lookup;

	lookup.insert(make_pair(30, "Mike"));
	lookup.insert(make_pair(10, "Vick"));
	lookup.insert(make_pair(30, "Raja"));
	lookup.insert(make_pair(20, "Bobb"));

	for(multimap<int, string>::iterator it=lookup.begin(); it != lookup.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << endl;

	for(multimap<int, string>::iterator it=lookup.find(20); it != lookup.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << endl;
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);

	for(multimap<int, string>::iterator it=its.first; it != its.second; it++) {
		cout << it->first << ": " << it->second << endl;
	}

	return 0;
}



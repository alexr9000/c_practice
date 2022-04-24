/*
 * parsing.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: alexramirez
 */

#include <iostream>
#include <fstream>

using namespace std;

//int main() {
int parsing() {

	string file_name = "text.txt";
	ifstream input;

	input.open(file_name);

	if(!input.is_open()) {
		return 1;
	}

	while(input) {
		string line;

		getline(input, line, ':');

		int population;
		input >> population;

		input.get();
		//input >> ws;

		if(!input) {
			break;
		}

		cout << line << " -- " << population << endl;
	}

	input.close();

	return 0;
}


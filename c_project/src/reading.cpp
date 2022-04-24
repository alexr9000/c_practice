/*
 * reading.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: alexramirez
 */

#include <iostream>
#include <fstream>

using namespace std;

//int main() {
int reading() {

	string in_file_name = "text.txt";

	ifstream in_file;

	in_file.open(in_file_name);

	if(in_file.is_open()){

		string line;

		while(in_file) {
			getline(in_file, line);
			cout << line << endl;
		}

		in_file.close();
	}
	else {
		cout << "Cannot open file: " << in_file_name << endl;
	}

	return 0;
}



/*
 * writing.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: alexramirez
 */

#include <iostream>
#include <fstream>
using namespace std;


//int main() {
int reading() {

	ofstream out_file;
	string out_file_name = "text.txt";

	out_file.open(out_file_name);

	if(out_file.is_open()) {
		out_file << "Hello there" << endl;
		out_file << "123" << endl;
		out_file.close();
	}
	else {
		cout << "Count not create file: " << out_file_name << endl;
	}

	return 0;
}



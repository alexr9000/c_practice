/*
 * struct_padding.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: alexramirez
 */

#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)
struct Person {
	char name[50];
	int age;
	double height;
};
#pragma pack(pop)

int main() {

	Person someone = {"Frodo", 220, 0.8};

	string file_name = "test.bin";

	// Write binary file
	ofstream output_file;

	output_file.open(file_name, ios::binary);

	if(output_file.is_open()) {
		output_file.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		output_file.close();
	}
	else {
		cout << "Could not create file: " + file_name << endl;
	}

	// Read binary file

	Person someone_else = {};

	ifstream input_file;

	input_file.open(file_name, ios::binary);

	if(input_file.is_open()) {
		input_file.read(reinterpret_cast<char *>(&someone_else), sizeof(Person));

		input_file.close();
	}
	else {
		cout << "Could not read file: " + file_name << endl;
	}

	cout << someone_else.name << "," << someone_else.age << "," << someone_else.height << endl;

	return 0;
}



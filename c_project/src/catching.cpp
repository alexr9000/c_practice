/*
 * catching.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: alexramirez
 */

#include <iostream>
#include <exception>

using namespace std;

void goesWrong() {
	bool error1_detected = false;
	bool error2_detected = true;

	if(error1_detected) {
		throw bad_alloc();
	}

	if(error2_detected) {
		throw exception();
	}
}

//int main() {
int catching() {
	try {
		goesWrong();
	} catch(bad_alloc &e) {
		cout << "Catching bad_alloc:" << e.what() << endl;
	} catch(exception &e) {
		cout << "Catching exception: " << e.what() << endl;
	}

	return 0;
}



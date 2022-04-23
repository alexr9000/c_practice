/*
 * basic_exceptions.cpp
 *
 *  Created on: Apr 23, 2022
 *      Author: alexramirez
 */

// Basic Exceptions

#include <iostream>
using namespace std;

void might_go_wrong() {

    bool error1 = false;
    bool error2 = true;

    if(error1) {
        throw "Went wrong.";
    }

    if(error2) {
        throw string("Something else went wrong.");
    }
}

void uses_might_go_wrong() {
    might_go_wrong();
}

//int main() {
int basic_ex() {

    try {
        uses_might_go_wrong();
    }
    catch(int e) {
        cout << "Error code: " << e << endl;
    }
    catch(char const *e) {
        cout << "Error message: " << e << endl;
    }
    catch(string &e) {
        cout << "String error message: " << e << endl;
    }

    cout << "Still running." << endl;

    return 0;
}



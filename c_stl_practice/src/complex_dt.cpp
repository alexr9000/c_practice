/*
 * complex_dt.cpp
 *
 *  Created on: Apr 24, 2022
 *      Author: alexramirez
 */
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

	map<string, vector<int> > scores;

	scores["Mike"].push_back(10);
	scores["Mike"].push_back(20);
	scores["Vicky"].push_back(15);

	for(map<string, vector<int> >::iterator it=scores.begin(); it != scores.end(); it++) {
		string name = it->first;
		vector<int> score_list = it->second;

		cout << name << ": " << flush;

		for(int i=0; i<score_list.size(); i++) {
			cout << score_list[i] << " " << flush;
		}

		cout << endl;
	}

	return 0;
}




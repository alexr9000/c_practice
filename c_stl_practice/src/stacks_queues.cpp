/*
 * stacks_queues.cpp
 *
 *  Created on: Apr 24, 2022
 *      Author: alexramirez
 */
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Testx {
private:
	string name;

public:
	Testx(string name): name(name) {
	}

	//~Testx() {
	//	cout << "Object destroyed" << endl;
	//}

	void print() {
		cout << "'" << name << "'" << endl;
	}
};

//int main() {
int stacks() {
	stack<Testx> test_stack;

	test_stack.push(Testx("John"));
	test_stack.push(Testx("Mike"));
	test_stack.push(Testx("Suex"));

	while(test_stack.size() > 0) {
		Testx &test1 = test_stack.top();
		test1.print();
		test_stack.pop();
	}

	queue<Testx> test_queue;

	test_queue.push(Testx("John"));
	test_queue.push(Testx("Mike"));
	test_queue.push(Testx("Suex"));

	test_queue.back().print();

	while(test_queue.size() > 0) {
		Testx &test1 = test_queue.front();
		test1.print();
		test_queue.pop();
	}

	return 0;
}




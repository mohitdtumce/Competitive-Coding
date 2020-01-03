#include <iostream>
using namespace std;

int* blah() {
	int i = 0;
	return &i;
}

void increment1(int x) {
	x++;
}

void increment(int &x) {
	x++;
}

int main() {
	
	int i = 10;
	increment(i);
	cout << i << endl;
	int j = 20;

	int &k = i;


	k = j;


	k++;
	cout << i  << endl;
}


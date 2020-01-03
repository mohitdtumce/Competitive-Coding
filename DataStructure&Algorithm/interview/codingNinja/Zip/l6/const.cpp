#include <iostream>
using namespace std;

void temp(int& in) {
	in++;
}

int sum(int const * a, int size) {

}

int main() {
	const int input = 10;
	temp(input);
	// change and you have to initialize
	const int i = 10;
	// illegal int& k2 = i;
	//i++;
	int j = i + 1;
	const int& k = j;

	int const * p1;
	int * const p2 = &j; // &i will be illegal

	int const * const p3 = &i;

	(*p2)++;
	
	// illegal p2 = &j;
	p1 = &i;


	// illegal (*p1)++;
	(*p2)++;


	p1 = &j; // legal
	// illegal (*p1)++;
	j++;
	


	int * p = &j;

}

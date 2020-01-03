#include <iostream>
#include "pair.h"
using namespace std;

int main() {

	int k = 10;
	cout << k++ << endl;

	pair1 p(100,15);
	pair1 p3 = p++;
	pair1 p4 = (p++)++;
	cout << p4.getFirst() << endl;
	cout << p3.getFirst() << endl;
	cout << p.getFirst() << endl;

	pair1 p2(10,20);
	p += (p += p2);
	//(p += p2) = p2;
	p.print();

	int i = 10;
	int j = 12;
	//i += (i += j);
	(i += j)++;
	cout << i << endl;

}


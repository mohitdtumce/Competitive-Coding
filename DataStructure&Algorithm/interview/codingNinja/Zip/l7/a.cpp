#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 15;
	int c = (a = b);
	(a = b)++;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;


}


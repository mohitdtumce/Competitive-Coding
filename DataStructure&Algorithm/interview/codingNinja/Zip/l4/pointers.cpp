#include <iostream>
#define PI 3.14
using namespace std;

void deleteHelper(int * p) {
	delete [] p;
}


inline int max(int a, int b) {
	return (a > b)? a: b;
}

int length(char a[],int size = 10, int si = 0) {
	if (a[si] == '\0') {
		return 0;
	}
	return 1 + length(a, si + 1);
}

int main() {
	char abc[] = "abc";
	length(abc);
	length(abc, 3);
	length(abc, 3, 2);
	int x = 10;
	int y = 15;

//	int max1 = (a > b)? a: b;
	int max1 = max(x, y);
/*	while (true) {
		int *i = new int;

	}
*/
	int r = 10;
	double cir = 2 * PI * r;
	int i23 = 10;
	int * p23 = &i23;

	int* parr = new int[100];
	
	cout << parr[0];

	deleteHelper(parr);
	
	int * p2 = new int;
	*p2 = 10;

	cout << &p2 << endl;
	cout << p2 << endl;
	cout << *p2 << endl;
	cout << *p2 << endl;
	p2 = 0;

	int i = -1;
	int * p = &i;
	
	char* cp = (char *)p;
	cout << cp << endl;
	cout << p << endl;


	char a = 'a';
	cp = &a;
	p = (int*) cp;
	char b[4];
	b[0] = 'a';
	b[1] = '\0';
	b[2] = '\0';
	b[3] = '\0';
	cout << *p << endl;
	p = (int*)b;
	cout << *p << endl;

	int arr[10];
	p = arr;
	cout << sizeof(arr) << endl;
	cout << sizeof(p) << endl;
	--p;
	++p;
	cout << *p << endl;
}


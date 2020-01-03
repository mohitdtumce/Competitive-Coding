#include <iostream>
using namespace std;

int poly(int a[], int x) {
	int size = sizeof(a)/sizeof(a[0]);
	cout << sizeof(a) << endl;
	return 1;
}

int increment(int i) {
	i++;
	return i;
}

void increment(int a[]) {
	a[0]++;
}

void swap(int i , int j) {
	int temp = i;
	i = j;
	j = temp;
}

void pushNonZeroes(int arr[], int size) {
	int i = 0;
	int j = 0;
	while (i < size) {
		if (a[i] != 0) {
			a[j] = a[i];
			j++;
		}
		i++;
	}
	while (j < size) {
		a[j] = 0;
		j++;
	}
}

int main() {
	int i = 10;
	increment(i);
	cout << i << endl;
	
	int a[] = {1,2,3,4};
	swap(a[0], a[1]);
	increment(a);
	cout << a[0] << endl;
	cout << sizeof(a) << endl;
	poly(a, 10);
	
	char carr[] = {'a','b'};
	cout << a << endl;
	cout << carr << endl;

	int b[10] = {0};
	int c[10] = {-1};
}


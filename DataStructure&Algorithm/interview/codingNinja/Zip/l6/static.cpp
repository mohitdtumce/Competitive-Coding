#include <iostream>
using namespace std;

int sum(int a[], int size, int startIndex = 0) {
	if (startIndex == size) {
		return 0;
	}
	return a[startIndex] + sum(a, size, startIndex + 1);
}

int sum1(int a[], int size) {
	static int startIndex = 0;
	if (startIndex == size) {
		startIndex = 0;
		return 0;
	}
	int ans = a[startIndex];
	startIndex++;
	return ans + sum1(a, size);
}

void temp() {
	static int i = 0;
	i++;
	cout << i << endl;
}

int main() {
	int a[] = {1,2,3};
	sum1(a, 3);
	int b[] = {2,3,4};
	sum1(b, 3);
	temp();
	temp();
	temp();
}


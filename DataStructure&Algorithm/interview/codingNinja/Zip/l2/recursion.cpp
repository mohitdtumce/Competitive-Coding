#include <iostream>
using namespace std;

/*
void mergeSort(int a[], int start, int end) {
	if (start >= end) {
		return;
	}
	int mid = start + (end - start)/2;
	mergeSort(a, start, mid);
	mergeSort(a, mid + 1, end);
	merge(a, start, end);
}
*/
int firstIndex(int a[], int size, int x) {
	if (size == 0) {
		return -1;
	}
	if (a[0] == x) {
		return 0;
	}
	int smallOutput = firstIndex(a + 1, size - 1, x);
	return (smallOutput == -1) ? -1 : smallOutput + 1;
}

bool isSorted(int a[], int size) {
	if (size <= 1) {
		return true;
	}
	if (a[0] > a[1]) {
		return false;
	}
	return isSorted(a + 1, size - 1);
}

int fact(int n) {
	if (n == 0) {
		return 1;
	}
	int smallOutput = fact(n - 1);
	int ans = n * smallOutput;
	return ans;
}

int subsets(int a[], int size, int out[][100]) {
	if (size == 0) {
		out[0][0] = 0;
		return 1;
	}
	int k = subsets(a, size - 1, out);
	for (int i = 0; i < k; i++) {
		for (int j = 0; j <= out[i][0]; j++) {
			out[i + k][j] = out[i][j];
		}
		out[i + k][0]++;
		int numElements = out[i + k][0];
		out[i + k][numElements] = a[size - 1];
	}
	return 2*k;
}

int main() {
	int a[] = {1,2,3,4};
	int b[16][100];
	int k = subsets(a, 4, b);
	for (int i = 0; i < k; i++) {
		for (int j = 1; j <= b[i][0]; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}	

#include <iostream>
#include <vector>
using namespace std;

void print(int *a, int *b, int size1, int size2,
		vector<int>& out, int lastElement = 0) {
	if (size1 == 0 && size2 == 0) {
		vector<int>::iterator it = out.begin();
		while (it != out.end()) {
			cout << *it << " ";
			it++;
		}
		cout << endl;
		return;
	}

	if (size1 == 0) {
		print(a, b + 1, size1, size2 - 1, out, lastElement);
		if (lastElement != 2) {
			out.push_back(b[0]);
			print(a, b + 1, size1, size2 - 1, out, 2);
			out.pop_back();
		}
	} else if (size2 == 0) {
		print(a + 1, b, size1 -1, size2, out, lastElement);
		if (lastElement != 1) {
			out.push_back(a[0]);
			print(a + 1, b, size1 -1, size2, out, 1);
			out.pop_back();
		}
	} else {
		if (a[0] < b[0]) {
			print(a + 1, b, size1 -1, size2, out, lastElement);
			if (lastElement != 1) {
				out.push_back(a[0]);
				print(a + 1, b, size1 -1, size2, out, 1);
				out.pop_back();
			}
		} else {
			print(a, b + 1, size1, size2 - 1, out, lastElement);
			if (lastElement != 2) {
				out.push_back(b[0]);
				print(a, b + 1, size1, size2 - 1, out, 2);
				out.pop_back();
			}
		}
	}
}


int count(int *a, int *b, int size1, int size2) {
	int empty = 1;
	int ending_first = 0;
	int ending_second = 0;

	int i = 0;
	int j = 0;
	while (i < size1 && j < size2) {
		if (a[i] < b[j]) {
			ending_first += empty + ending_second;
			i++;
		} else {
			ending_second += empty + ending_first;
			j++;
		}
	}
	while (i < size1) {
		ending_first += empty + ending_second;
		i++;
	}

	while (j < size2) {
		ending_second += empty + ending_first;
		j++;
	}
	return empty + ending_first + ending_second;
}

int main() {
	int a[] = {1,3,5};
	int b[] = {2,4,6};
	vector<int> v;
	print(a, b, 3, 3, v);
	cout << count(a,b, 3,3);
}


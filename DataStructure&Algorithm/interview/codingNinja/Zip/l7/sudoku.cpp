#include <iostream>
using namespace std;

bool* findOptions(int a[][9], int x, int y) {
	bool * options = new bool[10];
	//bool options[10];
	for (int i = 1; i < 10; i++) {
		options[i] = true;
	}

	for (int j = 0; j < 9; j++) {
		options[a[x][j]] = false;
	}
	for (int i = 0; i < 9; i++) {
		options[a[i][y]] = false;
	}
	int boxX = x/3;
	int boxY = y/3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			options[a[3 * boxX + i][3 * boxY + j]] = false;
		}
	}
	return options;
}

bool solve(int a[][9]) {
	int x = -1;
	int y = -1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (a[i][j] == 0) {
				x = i;
				y = j;
				break;
			}
		}
		if (x != -1) {
			break;
		}
	}
	if (x == -1) {
		return true;
	}

	bool* options = findOptions(a, x, y);
	for (int i = 1; i < 10; i++) {
		if (options[i]) {
			a[x][y] = i;
			if (solve(a)) {
				delete [] options;
				return true;
			}
			a[x][y] = 0;
		}
	}
	delete [] options;
	return false;
}

int main() {
	
	int a[9][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
		{5, 2, 0, 0, 0, 0, 0, 0, 0},
		{0, 8, 7, 0, 0, 0, 0, 3, 1},
		{0, 0, 3, 0, 1, 0, 0, 8, 0},
		{9, 0, 0, 8, 6, 3, 0, 0, 5},
		{0, 5, 0, 0, 9, 0, 6, 0, 0},
		{1, 3, 0, 0, 0, 0, 2, 5, 0},
		{0, 0, 0, 0, 0, 0, 0, 7, 4},
		{0, 0, 5, 2, 0, 6, 3, 0, 0}};

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	solve(a);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


}


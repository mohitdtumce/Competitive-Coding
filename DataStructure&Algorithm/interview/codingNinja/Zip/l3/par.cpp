#include <iostream>
using namespace std;

void printparhelper(int op, int cl, string& outputsofar) {
	if (op == 0 && cl == 0) {
		cout << outputsofar << endl;
		return;
	}
	if (cl > op) {
		outputsofar.push_back(')');
		printparhelper(op, cl - 1, outputsofar);
		outputsofar.pop_back();
	}
	if (op > 0) {
		outputsofar.push_back('(');
		printparhelper(op - 1, cl, outputsofar);
		outputsofar.pop_back();
	}
}

void printpar(int n) {
	string s = "";
	printparhelper(n, n, s);
}

int main() {
	int n;
	cin >> n;
	printpar(n);
}

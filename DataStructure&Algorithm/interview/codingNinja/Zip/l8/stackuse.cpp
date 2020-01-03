#include <iostream>
#include "stack.h"
using namespace std;

int main() {
	stack<int> s;
	s.push(10);
	s.pop();
	s.pop();
	int i = 10;
	stack<int*> s2;
	s2.push(&i);
}


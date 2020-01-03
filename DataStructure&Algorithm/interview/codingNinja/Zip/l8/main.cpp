#include <iostream>
#include <stack>
#include <queue>
#include "TreeNode.h"
using namespace std;

int main() {
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.top() << endl;
	s.pop();
	s.pop();
	s.pop();
	
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	
  cout << q.front() << endl;
	q.pop();
  cout << q.front() << endl;
	TreeNode<int> t(100);

}


#include <iostream>
#include <stack>
using namespace std;

stack<int> S;

void sortedInsert(int x)
{
	if(S.size() == 0 || x < S.top())
		S.push(x);
	else{
		int a = S.top();
		S.pop();
		sortedInsert(x);
		S.push(a);
	}
}
void sortStack()
{
	if(S.size()>0)
	{
		int x = S.top();
		S.pop();
		sortStack();
		sortedInsert(x);
	}
}
int main(int argc, char const *argv[])
{
	S.push(1);
	S.push(2);
	S.push(91);
	S.push(12);
	S.push(4);
	S.push(9);
	S.push(3);
	S.push(21);
	sortStack();
	while(S.empty() == false)
	{
		cout<<S.top()<<" ";
		S.pop();
	}
	return 0;
}

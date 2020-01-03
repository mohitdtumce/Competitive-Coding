#include <iostream>
#include <stack>
using namespace std;

stack<int> S;

void insertAtBottom(int x)
{
	if(S.size() == 0)
		S.push(x);
	else{
		int a = S.top();
		S.pop();
		insertAtBottom(x);
		S.push(a);
	}
}
void Reverse()
{
	if(S.size()>0)
	{
		int x = S.top();
		S.pop();
		Reverse();
		insertAtBottom(x);
	}
}
int main(int argc, char const *argv[])
{
	for (int i = 0; i < 10; ++i)
	{
		S.push(i+1);
	}
	Reverse();
	while(S.empty() == false)
	{
		cout<<S.top()<<" ";
		S.pop();
	}
	return 0;
}

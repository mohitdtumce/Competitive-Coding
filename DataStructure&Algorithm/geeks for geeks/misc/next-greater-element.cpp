#include <iostream>
#include <stack>
using namespace std;

void nextGreaterElement(int arr[],int n)
{
	stack<int> S;
	S.push(arr[0]);
	for (int i = 1; i < n; ++i)
	{
		int next = arr[i];
		if(S.empty() == false)
		{
			int element = S.top();
			S.pop();
			while(element < next)
			{
				cout<<element<<" "<<next<<endl;
				if(S.empty())
					break;
				element = S.top();
				S.pop();
			}
			if(element > next)
				S.push(element);
		}
		S.push(next);
	}

	while(S.empty() == false)
	{
		cout<<S.top()<<"  -1\n";
		S.pop();
	}
}

int main(int argc, char const *argv[])
{
	int arr[]= {11, 13, 21, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    nextGreaterElement(arr,n);
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, N;
	cin>>T;
	while (T--) {
		cin>>N;
		string str = "";
		for (int i = 0; i < N/3; ++i)
		{
			str += "abc";
		}
		for (int i = 0; i < N%3; ++i)
		{
			if (i == 0)
			{	
				str += 'a';
			}
			else if (i == 1)
			{
				str += 'b';
			}
			else
			{
				str += 'c';
			}
		}
		cout<<str<<"\n";
	}
}
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int picCount, painterCount;
	cin>>picCount>>painterCount;
	int t[picCount + 1][painterCount + 1] = {};
	for (int i = 1; i <= picCount; ++i)
	{
		for (int j = 1; j <= painterCount; ++j)
		{
			cin>>t[i][j];
		}
	}
	for (int j = 1; j <= painterCount; ++j)
	{
		for(int i = 1; i <= picCount; ++i)
		{
			t[i][j] = max(t[i-1][j], t[i][j-1]) + t[i][j]; 
		}
	}
	for (int i = 1; i <= picCount; ++i)
	{
		cout<<t[i][painterCount]<<" ";
	}
	return 0;
}

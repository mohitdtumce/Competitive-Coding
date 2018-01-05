#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, k;
	cin>>n>>k;
	if(n == k)
	{
		cout<<"-1";
	}
	else
	{
		cout<<n-k<<" ";
		for (int i = 1; i <= n-k-1; ++i)
		{
			cout<<i<<" ";
		}
		for (int i = n - k + 1; i <= n; ++i)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}

#include <iostream>
	#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int minCap = 0;
	int a, b;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		sum += (b-a);
		minCap = max(minCap, sum);
	}
	cout<<minCap;
	return 0;
}

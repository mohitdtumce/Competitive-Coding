#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	long long totalCost = 0;
	int a, p;
	int currCost = 101;
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>p;
		currCost = min(currCost, p);
		totalCost += currCost*a;
	}
	cout<<totalCost;
	return 0;
}

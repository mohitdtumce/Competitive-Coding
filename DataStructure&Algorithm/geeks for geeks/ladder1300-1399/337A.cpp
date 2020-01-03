#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin>>n>>m;
	int arr[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+m);
	int minDiff = INT_MAX, diff;
	for (int i = 0; i <= m-n; ++i)
	{
		diff = arr[n-1+i] - arr[i];
		if(diff < minDiff)
		{
			minDiff = diff;
		}
	}
	cout<<minDiff;
	return 0;
}

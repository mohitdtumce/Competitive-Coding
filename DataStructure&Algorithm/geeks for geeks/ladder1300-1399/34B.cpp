#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int sum = 0;
	int i = 0; 
	while(i < m)
	{
		if(arr[i] < 0)
		{
			sum += abs(arr[i]);
		}
		i++;
	}
	cout<<sum;
	return 0;
}

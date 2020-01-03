#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int minIndex = 0;
	int maxIndex = 0;
	for (int i = 1; i < n; ++i)
	{
		if(arr[i] <= arr[minIndex])
			minIndex = i;
		if(arr[i] > arr[maxIndex])
			maxIndex = i;
	}
	if(minIndex < maxIndex)
		cout<<((n-1-minIndex) + maxIndex - 1);
	else if(minIndex > maxIndex)
		cout<<((n-1-minIndex) + maxIndex);
	return 0;
}

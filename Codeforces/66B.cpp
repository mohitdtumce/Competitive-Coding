#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int inc[n] = {};
	int dec[n] = {};
	inc[0] = 1;
	for (int i = 1; i < n; ++i)
	{
		if(arr[i-1] <= arr[i])
			inc[i] = inc[i-1] + 1;
		else
			inc[i] = 1;
	}
	dec[n-1] = 1;
	for (int i = n-2; i >= 0; --i)
	{
		if(arr[i] >= arr[i+1])
			dec[i] = dec[i+1] + 1;
		else
			dec[i] = 1;
	}
	int maximal = 1;
	for (int i = 0; i < n; ++i)
	{
		maximal = max(inc[i] + dec[i] - 1, maximal);
	}
	cout<<maximal;
	return 0;
}

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int maxl = 2;
	int count = 2;
	long arr[n];
	
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	if(n == 1)
	{
		cout<<"1";
		return 0;
	}
	for (int i = 2; i < n; ++i)
	{
		if(arr[i] == arr[i-1] + arr[i-2])
		{
			count++;
		}else{
			count = 2;
		}
		if(count > maxl)
		{
			maxl = count;
		}
	}
	cout<<maxl;
	return 0;
}

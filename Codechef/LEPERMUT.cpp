#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		int inv = 0, linv = 0;
		for (int i = 0; i < n-1; ++i)
		{
			if(arr[i] > arr[i+1])
				linv++;
			for (int j = i+1; j < n; ++j)
			{
				if(arr[i] > arr[j])
					inv++;
			}
		}
		if(inv)
	}
}
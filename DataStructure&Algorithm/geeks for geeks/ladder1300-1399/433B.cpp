#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	long long arr[n];
	long long sum[n+1] = {0};
	long long sum1[n+1] = {0};
	for (int i = 1; i <= n; ++i)
	{
		cin>>arr[i-1];
		sum[i] = sum[i-1] + arr[i-1];
	}
	sort(arr,arr+n);
	for (int i = 1; i <= n; ++i)
	{
		sum1[i] = sum1[i-1] + arr[i-1];
	}
	int q, t, l, r;
	cin>>q;
	while(q--)
	{
		cin>>t>>l>>r;
		if(t == 1)
		{
			cout<<(sum[r] - sum[l-1])<<endl;
		}else{
			cout<<(sum1[r] - sum1[l-1])<<endl;
		}
	}
}

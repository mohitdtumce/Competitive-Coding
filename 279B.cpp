#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long n, t, i, j;
	cin>>n>>t;
	int a[n];
	for (i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	long maxCount = 0;
	long long totalMin = 0;
	i = 0;
	j = 0;
	while(i < n && j < n)
	{
		while(j < n && totalMin <= t)
		{
			totalMin += a[j];
			if(totalMin <= t){
				maxCount = max(maxCount, j - i + 1);
			}
			j++;
		}
		while(totalMin > t)
		{
			totalMin -= a[i];
			i++;
		}
	}
	cout<<maxCount;
	return 0;
}

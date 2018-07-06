#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	long long n, m, k;
	cin >> n >> m >> k;
	long long left = 1, right = n*m+1;
	while(left+1 < right)
	{
		long long mid = (left+right)/2;
		int calc = 0;
		for(int i = 1; i <= n; i++)
			if(!(mid%i) && mid/i <= m)
				calc++;
		
		long long t = 0;
		for(int i = 1; i <= n; i++)
			t += min(mid/i, m);
		t -= calc;
		if(!calc)
		{
			if(t < k)
				left = mid;
			else right = mid;
		}
		else
		{
			if(t < k)
				left = mid;
			else right = mid;
		}
	}
	cout << left << '\n';
	return 0;
}
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;


void sieve(int n, vector<int>& prime)
{
	bool mark[n+1] = {false};
	for (int p = 2; p*p < n; ++p)
	{
		if(mark[p] == false)
		{
			for(int i = 2*p; i < n; i += p)
			{
				mark[i] = true;
			}
		}
	}
	for(int p = 2; p <= n; p++)
	{
		if(mark[p] == false)
		{
			cout<<p<<" ";
			prime.push_back(p);
		}
	}
}

void segmentedSieve(int n)
{
	int limit = sqrt(n) + 1;
	vector<int> prime;
	sieve(limit, prime);
	int low = limit;
	int high = 2*limit;
	while(low < n)
	{
		bool mark[limit+1] = {};
		for(int i = 0; i < prime.size(); i++)
		{
			int lowLim = (low/prime[i])*prime[i];
			if(lowLim < low)
				lowLim += prime[i];
			for(int j = lowLim; j < high; j += prime[i])
			{
				mark[j-low] = true;
			}	
		}

		for(int i = low; i < high; i++)
		{
			if(mark[i-low] == false)
				cout<<i<<" ";
		}
		low += limit;
		high += limit;
		if(high > n)
			high = n;
	}
}
int main()
{
    int n = 100;
    segmentedSieve(n);
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	bool prime[1000001];
	prime[0] = prime[1] = false;
	for (long i = 2; i < 1000001; ++i)
	{
		prime[i] = true;
	}
	for (long i = 2; i < 1000001; ++i)
	{
		if(prime[i])
		{
			for (long j = 2; i*j < 1000001; ++j)
			{
				prime[i*j] = false;
			}
		}
	}

	int n;
	cin>>n;
	long long num;
	while(n--)
	{
		cin>>num;
		int count = 0;
		for (long i = 2; i < sqrt(num)+1; ++i)
		{
			if(prime[i] && num%i == 0)
			{
				count++;
			}
		}
		if(count == 3)
		{
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}
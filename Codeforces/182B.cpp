#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long d, a;
	int n;
	long long sum = 0;
	cin>>d;
	cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		cin>>a;
		if(i != n)
			sum += (d - a);
	}
	cout<<sum;
	return 0;
}
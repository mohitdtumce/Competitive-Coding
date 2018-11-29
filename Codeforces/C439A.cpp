#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, d, temp;
	cin>>n>>d;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		sum += temp;
	}
	sum += (n-1)*10;
	if(d < sum)
	{
		cout<<"-1";
	}
	else
	{
		cout<<((2*n - 2) + (d - sum)/5);
	}
	return 0;
}

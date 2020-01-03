#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin>>n>>m;
	int sum = ((n*(n+1))/2);
	sum = m%sum;
	int i = 1;
	while(i <= n)
	{
		if(i > sum)
			break;
		sum -= i;
		i++;
	}
	cout<<sum;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	long n;
	cin>>n;
	cout<<n<<" ";
	while(n != 1){
		long i = 2;
		for (i = 2; i <= n/2; ++i)
		{
			if(n%i == 0)
				break;
		}
		n = n/i;
		cout<<n<<" ";
	}
	return 0;
}

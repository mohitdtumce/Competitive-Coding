#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long long n;
	cin>>n;
	while(n)
	{
		if(n%10 == 1)
		{
			n = n/10;
		}else if(n%100 == 14)
		{
			n = n/100;
		}else if(n%1000 == 144)
		{
			n = n/1000;
		}else{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}

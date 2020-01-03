#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int a;
	while(t--)
	{
		cin>>a;
		if(360 % (180-a) == 0)
		{
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}

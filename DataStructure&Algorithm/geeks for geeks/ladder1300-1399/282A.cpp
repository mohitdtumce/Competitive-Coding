#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string str;
	int x = 0;
	while(n--)
	{
		cin>>str;
		if(str[1] == '+')
		{
			x++;
		}else if(str[1] == '-')
		{
			x--;
		}
	}
	cout<<x;
	return 0;
}

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int c1 =0, c2 = 0, temp;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		if(temp == 100)
			c1++;
		else
			c2++;
	}
	if(c1 == 0 && c2%2 == 1)
	{
		cout<<"NO";
		return 0;
	}
	if(c1%2 == 1)
	{
		cout<<"NO";
		return 0;
	}
	cout<<"YES";
	return 0;
}

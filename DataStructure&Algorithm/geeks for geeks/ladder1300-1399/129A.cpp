#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int odd = 0, even = 0, temp, sum = 0;

	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		sum += temp;
		if(temp%2 == 0)
			even++;
		else
			odd++;
	}
	if(sum%2 == 0)
		cout<<even;
	else{
		cout<<odd;
	}
	return 0;
}

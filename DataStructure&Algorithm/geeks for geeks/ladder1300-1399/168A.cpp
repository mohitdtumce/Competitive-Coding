#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, x, p;
	cin>>n>>x>>p;
	int res = ceil(n*p*(0.01));
	if(x < res)
	{
		cout<<res-x;
	}else{
		cout<<"0";
	}
	return 0;
}

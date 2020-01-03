#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	long x, y;
	cin>>x>>y;
	long val = abs(x) + abs(y);
	long res1 = (y/abs(y))*val;
	long res2 = (x/abs(x))*val;
	if(0 < res2)
		cout<<"0 "<<res1<<" "<<res2<<" 0";		
	else
		cout<<res2<<" 0 0 "<<res1;
	return 0;
}

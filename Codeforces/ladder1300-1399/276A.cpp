#include <iostream>
#include <limits>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	long k;
	cin>>n>>k;
	int f,t;
	int maxJoy = INT_MIN;
	int joy;
	for (int i = 0; i < n; ++i)
	{
		cin>>f>>t;
		if(t>k)
			joy = (f - (t - k));
		else
			joy = f;
		if(maxJoy < joy)
			maxJoy = joy;
	}
	cout<<maxJoy;
	return 0;
}

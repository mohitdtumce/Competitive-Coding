#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	long double l, temp;
	cin>> n >> temp;
	vector<long double> vec;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		vec.push_back(temp);
	}
	sort(vec.begin(),vec.end());
	long double d = 0;
	if(vec[0] != 0)
	{
		d = fmaxl(d,2*double(vec[0]));
	}
	if(vec[n-1] != l)
	{
		d =  fmaxl(d,2*double(l - vec[n-1]));
	}

	for (int i = 0; i < n-1; ++i)
	{
		d = fmaxl(d,(double(vec[i+1] - vec[i])));
	}
	//printf("%20.10f",d/2);
	cout<<((double)(d))/2;
	return 0;
}

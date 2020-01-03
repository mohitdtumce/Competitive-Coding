#include <iostream>
#include <algorithm>
using namespace std;

struct laptop{
	int p;
	int q;
};

bool comp(struct laptop a,struct laptop b)
{
	return (a.p < b.p);
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	struct laptop L[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>L[i].p>>L[i].q;
	}
	sort(L,L+n, comp);
	for (int i = 0; i < n-1; ++i)
	{
		if(L[i+1].q < L[i].q)
		{
			cout<<"Happy Alex";
			return 0;
		}
	}
	cout<< "Poor Alex";
	return 0;
}

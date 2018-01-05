#include<bits/stdc++.h>
using namespace std;
long long bsearch(long long a[], long long item, long long n)
{
	long long p, q;
	p = 0;
	q=n-1;
	while(q-p != 1)
	{
		long long m = (p+q)/2;
		if(a[m] <= item)
			p = m;
		else
			q = m;
	}
	if(a[q] <= item)
		return q;
	else
		return p;
}
int main()
{
	ios_base::sync_with_stdio(0);
	unordered_map<long, bool> mymap;
	long long n, m;
	cin>>n>>m;
	long long a[n], b, i, j;
	for(i = 0; i < n; i++)
	{
		cin>>a[i];
		mymap[a[i]] = true;
	}
	long long c = n;
	for(i = 0 ; i < m; i ++)
	{
		cin>>b;
		long long z = bsearch(a,b,n);
		j = z;
		while(j >= 0)
		{
			if(mymap[a[j]] && a[j] <= b)
			{
				mymap[a[j]] = false;
				c--;
				break;
			}
			else
				j--;
			
		}
	}
	cout<<c;
}
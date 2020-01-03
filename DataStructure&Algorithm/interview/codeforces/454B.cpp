#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int t=1;
	int n,x=0,i;
	
	while(t--)
	{
		cin>>n;
		int c=0;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		i=1;
		while(i<n)
		{
		 if(a[i-1]<=a[i])
		 i++;
		 else
		 break;	
		}
		x=n-1;
		while(x>=i)
		{
		if(a[x]<=a[c])	
		{
			if(c==0)
			c=n-1;
			else
			c--;
			x--;
		}
		else
		break;
		}
		if(x==i-1)
		cout<<n-i;
		else
		cout<<"-1";
	}
	
}
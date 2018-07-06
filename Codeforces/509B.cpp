#include<iostream>
#include <climits>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int max = INT_MIN;
	int min = INT_MAX;
 	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i = 0; i < n; i++)
	{
	 	cin>>a[i];
	 	if(a[i] > max)
	 		max=a[i];
	 	if(a[i]	< min)
	 		min=a[i];
	}
	if(max-min<=k)
	{
		cout<<"YES"<<endl;
	 
	 	for(int i = 0;i < n; i++)
	 	{
	 		int count=0;
	 		for(int j = 0; j < min; j++)
	 	 		cout<<"1 ";
	 	 	count = min;
	 	 
		 	for(int j = 1; count < a[i]; j++)
		 	{   
		 		cout<<j<<" ";
		 		count++;
			}
			cout<<endl;
		}
	} 
	else cout<<"NO";
}
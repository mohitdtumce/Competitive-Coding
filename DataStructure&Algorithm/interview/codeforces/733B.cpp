#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][2],btyl=0,btyr=0,bty=0;
	for(int i=0;i<n;i++){
		cin>>arr[i][0]>>arr[i][1];
		btyl+=arr[i][0];
		btyr+=arr[i][1];
	}
	bty=abs(btyl-btyr);
	int temp1=0,temp2=0,index=0,flag=0;
	for(int i=0;i<n;i++){
		temp1=btyl-arr[i][0]+arr[i][1];
		temp2=btyr-arr[i][1]+arr[i][0];
		if(bty<abs(temp1-temp2)){
			flag=1;
			bty=abs(temp1-temp2);
			index=i;
		}
	}
	if(flag==1)
		cout<<index+1;
	else{
		cout<<0;	
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int k,m;
	cin>>k>>m;
	long a[n1],b[n2],d1=0,d2=0;
	for(int i=0;i<n1;i++){
		cin>>a[i];
		if(i==(k-1)){
			d1=a[i];
		}
	}
	for(int i=0;i<n2;i++){
		cin>>b[i];
		if(i==(n2-m)){
			d2=b[i];
		}
	}
	if(d1<d2){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
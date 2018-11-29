#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=1;i<n;i++){
		while(a[i-1]>=a[i]){
			count++;
			a[i]++;
		}
	}
	cout<<count;
}
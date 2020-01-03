//cut-the-sticks
#include<iostream>
#include<algorithm>
#define N 1001
using namespace std;
int main(){
	int n,temp;
	cin>>n;
	int hash[N]={0};
	for(int i=0;i<n;i++){
		cin>>temp;
		hash[temp]++;
	}
	cout<<n;
	for(int i=0;i<N;i++){
		if(hash[i]!=0){
			cout<<n-hash[i];
		}
	}
	return 0;
}

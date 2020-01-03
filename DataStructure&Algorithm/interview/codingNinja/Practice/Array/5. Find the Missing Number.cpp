#include<iostream>
using namespace std;

// Method using XOR
int findMissing(int arr[],int n){
	int res=0;
	for(int i=1;i<=n;i++){
		res=res^i;
	}
	for(int i=0;i<n-1;i++){
		res=res^arr[i];
	}
	return res;
}

// Method using sum formula
int findMissing1(int arr[],int n){
	int sum=(n*(n+1))/2;
	for(int i=0;i<n-1;i++){
		sum-=arr[i];
	}
	return sum;
}
int main(){
int arr[]={1, 2, 4, 6, 3, 7, 8};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<findMissing(arr,n+1)<<endl;
	cout<<findMissing1(arr,n+1);
	return 0;
}
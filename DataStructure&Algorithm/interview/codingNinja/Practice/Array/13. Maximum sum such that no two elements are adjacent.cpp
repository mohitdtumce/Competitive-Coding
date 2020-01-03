#include<iostream>
using namespace std;

int MaxSumNoAdjecency(int arr[],int n){
	int inc=0,exc=0;
	for(int i=0;i<n;i++){
		int temp=exc;
		exc=max(inc,exc);
		inc=temp+arr[i];
	}
	return max(inc,exc);
}
int main(){
	int arr[] = {5, 5, 10, 100, 10, 5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<MaxSumNoAdjecency(arr,n);
	return 0;
}
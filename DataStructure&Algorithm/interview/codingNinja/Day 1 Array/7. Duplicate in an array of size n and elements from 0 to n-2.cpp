//7. Duplicate in an array of size n and elements from 0 to n-2
#include<iostream>
#include<cmath>
using namespace std;

//Method 1: Using Sum 
int Sum(int arr[],int n){
	long t=((n-2)*(n-1))/2;
	for(int i=0;i<n;i++){
		t-=arr[i];
	}
	return abs(t);
} 

//Method 2:Using XOR
int Xor(int arr[],int n){
	int a=0,i;
	for(i=1;i<n-1;i++){
		a=a^i;
	}
	for(i=0;i<n;i++){
		a=a^arr[i];
	}
	return a;
}
int main(){
	int arr[]={0,1,2,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<Sum(arr,n)<<'\n';
	cout<<Xor(arr,n);
	return 0;
}

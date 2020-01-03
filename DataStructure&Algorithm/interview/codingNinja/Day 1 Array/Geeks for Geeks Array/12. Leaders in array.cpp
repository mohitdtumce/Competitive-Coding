/*
	12. Leaders in array
	An element is called the leader if it is greater than all the elements to its right
*/
#include<iostream>
#include<limits>
using namespace  std;

void Leaders(int arr[],int n){
	int l=INT_MIN;
	for(int i=n-1;i>=0;i--){
		if(arr[i]>=l){
			l=arr[i];
			cout<<l<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int A[] = { 13, 15, 2, 8, 5, 7, 9};	
	int n = sizeof(A)/sizeof(A[0]);
	Leaders(A,n);
	return 0;
}

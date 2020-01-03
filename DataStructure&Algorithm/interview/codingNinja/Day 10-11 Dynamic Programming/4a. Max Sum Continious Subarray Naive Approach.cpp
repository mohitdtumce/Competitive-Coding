#include<iostream>
using namespace std;
// Naive Approach Time Complexity:O(n^2)
int MS(int *arr,int n){
	int MaxSum=0;
	for(int i=0;i<n;i++){
		int CurrentSum=0;
		for(int j=i;j<n;j++){
			CurrentSum+=arr[j];
			if(CurrentSum>MaxSum){
				MaxSum=CurrentSum;
			}
		}
	}
	return MaxSum;
}
int main(){
	int arr[]={ -2,11,-4,13,-5,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<MS(arr,n);
	return 0;
}
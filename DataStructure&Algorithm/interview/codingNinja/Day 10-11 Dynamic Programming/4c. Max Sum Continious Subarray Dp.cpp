#include<iostream>
using namespace std;

// Maximum Sum Continious Subarray Time:O(n), Space O(1)
int MaxSum(int* arr,int n){
	int MaxSoFar=0,prev=0;
	if(arr[0]>0){
		prev=arr[0];
	}
	for(int i=1;i<n;i++){
		if(arr[i]+prev>0){
			prev+=arr[i];
		}else{
			prev=0;
		}
		if(prev>MaxSoFar){
			MaxSoFar=prev;
		}
	}
	return MaxSoFar;
}

int main(){
	int arr[]={ -2,11,-4,13,-5,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<MaxSum(arr,n);
	return 0;
}
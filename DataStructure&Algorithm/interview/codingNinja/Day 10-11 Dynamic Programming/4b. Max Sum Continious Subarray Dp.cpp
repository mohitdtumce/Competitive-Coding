#include<iostream>
using namespace std;

// Maximum Sum Continious Subarray Time:O(n), Space O(n)
int MaxSum(int* arr,int n){
	int M[n]={};
	if(arr[0]>0){
		M[0]=arr[0];
	}
	for(int i=1;i<n;i++){
		if(arr[i]+M[i-1]>0){
			M[i]=arr[i]+M[i-1];
		}
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(M[i]>max){
			max=M[i];
		}
	}
	return max;
}

int main(){
	int arr[]={ -2,11,-4,13,-5,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<MaxSum(arr,n);
	return 0;
}
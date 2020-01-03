#include<iostream>
using namespace std;

int eqIndex(int arr[],int n){
	long sum=0;
	for(int i=0;i<n;i++){
		sum += arr[i];
	}
	long curr=arr[0];
	for(int i=1;i<n;i++){
		if(2*curr==sum-arr[i]){
			return i;
		}else{
			curr+=arr[i];
		}
	}
	return -1;
}
int main(){
	int arr[] = {-7, 1, 5, 2, -4, 3, 0};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	cout<<eqIndex(arr,arr_size);
	return 0;
}
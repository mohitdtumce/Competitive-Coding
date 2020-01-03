#include<iostream>
#include<climits>
using namespace std;

bool ifConsecutive(int arr[],int n){
	int Min=INT_MAX;

	for(int i=0;i<n;i++){
		if(Min>arr[i]){
			Min=arr[i];
		}
	}
	long Sum=0;
	for(int i=0;i<n;i++){
		arr[i]-=(Min-1);
		Sum+=arr[i];
	}
	if(Sum==(n*(n+1))/2){
		return true;
	}else{
		return false;
	}
	
}
int main(){
	int arr[]={7, 6, 5, 5, 3, 4};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<ifConsecutive(arr,n);
	return  0;
}
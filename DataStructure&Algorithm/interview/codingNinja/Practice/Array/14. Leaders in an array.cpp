#include<iostream>
using namespace std;

void printLeaders(int arr[],int n){
	int temp=arr[n-1];
	for(int i=n-1;i>=0;i--){
		if(temp<=arr[i]){
			cout<<arr[i]<<" ";
			temp=arr[i];
		}
	}
}
int main(){
	int arr[] = {16, 17, 4, 3, 5, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	printLeaders(arr,n);
	return 0;
}
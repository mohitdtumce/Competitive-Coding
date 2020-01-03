// Assignment Arrays and String
// Push Zeroes to the end

#include<iostream>
using namespace std;

void PushZeroesEnd(int arr[], int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			count++;
		}else{
			arr[i-count]=arr[i];
		}
	}
	int j=n-1;
	while(j>=0 && count){
		arr[j]=0;
		count--;
		j--;
	}	
}

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
}
int main(){
	int n=7;
	int arr[]={2, 0, 4, 1, 3, 0, 28};
	PushZeroesEnd(arr,n);
	PrintArray(arr,n);
}

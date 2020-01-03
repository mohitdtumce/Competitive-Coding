//21. Segregate 0s and 1s 
#include<iostream>
using namespace std;

void Segregate(int arr[],int n){
	int count=0;
	for(int i=0;i<=n;i++){
		if(arr[i]==0){
			count++;
		}else{
			arr[i-count]=arr[i];
		}
	}
	for(int i=n-1;i>(n-1-count);i--){
		arr[i]=0;
	}
}

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[] = {0, 2, 0, 5, 16, 11};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	Segregate(arr, arr_size);
	PrintArray(arr,arr_size);
}

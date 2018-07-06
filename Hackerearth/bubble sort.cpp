#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				/**/
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[]={ 7, 4, 5, 2};
	int n=sizeof(arr)/sizeof(arr[0]);
	printArray(arr,n);
	bubbleSort(arr,n);
	printArray(arr,n);
	return 0;
}
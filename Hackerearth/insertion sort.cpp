#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
	int temp;int j;
	for(int i=1;i<n;i++){
		int j=i-1;
		temp=arr[i];
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	printArray(arr,n);
	insertionSort(arr,n);
	printArray(arr,n);
	return 0;
}
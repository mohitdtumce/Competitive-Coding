// Insertion Sort
#include<iostream>
using namespace std;
int InsertionSort(int arr[],int n){
	int count=0;
	for(int i=1;i<n;i++){
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j=j-1;
			count++;
		}
		arr[j+1]=temp;
	}
	return count;
}

void PrintArray(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<' ';
	}
	cout<<"\n";
}

int main(){
	int arr[]={2,1,3,1,2};
	cout<<InsertionSort(arr,5);
	return 0;
}

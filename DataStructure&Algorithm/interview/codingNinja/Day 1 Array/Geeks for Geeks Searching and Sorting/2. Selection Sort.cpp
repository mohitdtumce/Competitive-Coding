// Selection Sort
// Time Complexity O(n*n)
// Space complexity O(1)
#include<iostream>
using namespace std;

void Swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSort(int A[],int n){
	int i,j,min_index;
	for(i=0;i<n-1;i++){
		min_index = i;
		for(j=i+1;j<n;j++){
			if(A[min_index]>A[j]){
				min_index=j;
			}
		}
		Swap(&A[min_index],&A[i]);
	}
}

void PrintArray(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<' ';
	}
	cout<<"\n";
}
int main(){
	int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	SelectionSort(arr, n);
	PrintArray(arr,n);
	return 0;
}

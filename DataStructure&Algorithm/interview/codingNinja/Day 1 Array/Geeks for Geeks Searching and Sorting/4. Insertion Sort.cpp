// Insertion Sort
	// Time Complexity O(n*n)
	// Space complexity O(1)
#include<iostream>
using namespace std;

void PrintArray(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<' ';
	}
	cout<<"\n";
}

void InsertionSort(int A[],int n){
	int i,j,small,small_index;
	for(i=1;i<n;i++){
		small=A[i];
		j=i-1;
		while(j>=0 && A[j]> small){
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1] = small;
	}
}
int main(){
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	InsertionSort(arr, n);
	PrintArray(arr, n);
	return 0;
}

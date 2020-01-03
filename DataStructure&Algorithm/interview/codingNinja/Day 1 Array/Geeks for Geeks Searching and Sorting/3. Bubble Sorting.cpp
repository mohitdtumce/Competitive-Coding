// Bubble sorting
// Time Complexity O(n*n)
// Space complexity O(1)
#include<iostream>
using namespace std;

void Swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void PrintArray(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<' ';
	}
	cout<<"\n";
}
void BubbleSort(int A[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				Swap(&A[j],&A[j+1]);
			}
		}
	}
}
int main(){
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr, n);
	PrintArray(arr, n);
	return 0;
}

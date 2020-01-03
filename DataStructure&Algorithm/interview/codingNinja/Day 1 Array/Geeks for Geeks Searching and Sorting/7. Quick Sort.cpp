// Quick Sort
#include<iostream>
using namespace std;

void PrintArray(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<' ';
	}
	cout<<"\n";
}

void Swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int Partition(int A[],int l,int h){
	int x= A[h];
	int i =l-1;
	for(int j=l;j<=h-1;j++){
		if(A[j]<=x){
			i++;
			Swap(&A[i],&A[j]);
		}
	}
	Swap(&A[i+1],&A[h]);
	return(i+1);
}

void QuickSort(int A[],int l,int h){
	if(l<h){
		int p=Partition(A,l,h);
		QuickSort(A,l,p-1);
		QuickSort(A,p+1,h);
	}
}
int main(){
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	QuickSort(arr, 0, n-1);
	PrintArray(arr, n);
	return 0;
}

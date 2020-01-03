// Merge Sort
// Time Complexity O(n*log(n))
// Space complexity O(n)
#include<iostream>
using namespace std;

void PrintArray(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<' ';
	}
	cout<<"\n";
}

void Merge(int A[],int l,int m,int r){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++){
		L[i]=A[l+i];
	}
	for(j=0;j<n2;j++){
		R[j]=A[m+1+j];
	}
	i=0;j=0;k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			A[k]=L[i];
			i++;
			k++;
		}else{
			A[k]=R[j];
			j++;
			k++;
		}
	}
	while(i<n1){
		A[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		A[k]=R[j];
		j++;
		k++;
	}
}

void MergeSort(int A[],int l,int r){
	if(l<r){
		int mid = l+(r-l)/2;
		MergeSort(A,l,mid);
		MergeSort(A,mid+1,r);
		Merge(A,l,mid,r);
	}
}
int main(){
	int arr[] ={64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	MergeSort(arr, 0, n - 1);
	PrintArray(arr,n);
	return 0;
}

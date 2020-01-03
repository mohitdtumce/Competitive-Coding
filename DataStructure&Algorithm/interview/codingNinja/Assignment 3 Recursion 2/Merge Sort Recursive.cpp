// Assignment Recursion 2
// Merge Sort Recursive
#include<bits/stdc++.h>
using namespace std;

void Merge(int input[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++){
        L[i]=input[l+i];
    }
    for(j=0;j<n2;j++){
        R[j]=input[m+1+j];
    }
    i=0;j=0;k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            input[k]=L[i];
            i++;
            k++;
        }else{
            input[k]=R[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        input[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        input[k]=R[j];
        j++;
        k++;
    }
}

void MergeSort(int input[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        MergeSort(input,l,m);
        MergeSort(input,m+1,r);
        Merge(input,l,m,r);
    }
}
void mergeSort(int input[], int size){
	// Write your code here
      MergeSort(input,0,size-1); 
}


void PrintArray(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<' ';
	}
	cout<<"\n";
}

int main(){
	int arr[] ={64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr, n );
	PrintArray(arr,n);
	return 0;
}

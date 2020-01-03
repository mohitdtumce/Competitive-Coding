#include<iostream>
#include<algorithm>
using namespace std;

// Quicksort
// O(nlogn)
void swap(int* a,int* b){
	int temp= *a;
	*a = *b;
	*b= temp;
}
int partition(int arr[],int si,int ei){
	int pivot=arr[ei];
	int val=si-1;
	for(int i=si;i<ei;i++){
		if(arr[i]<=pivot){
			val++;
			swap(&arr[i],&arr[val]);
		}
		swap(&arr[i+1],&arr[ei]);
	}
	return val+1;
}
void quicksort(int arr[],int si,int ei){
	if(si<ei){
		int p=partition(arr,si,ei);
		quicksort(arr,si,p-1);
		quicksort(arr,p+1,ei);
	}
}

bool isThere(int arr[],int n,int x){
	quicksort(arr,0,n-1);
	int start=0;
	int end=n-1;
	while(start<end){
		if(arr[start]+arr[end]==x){
			return true;
		}else if(arr[start]+arr[end]<x){
			start++;
		}else{
			end--;
		}
	}
	return false;
}

int main(){
	int A[] = {1, 4, 45, 6, 10, -8};
	int n = 16;
	int arr_size = 6;
	cout<<isThere(A,arr_size,n);
	return 0;
}
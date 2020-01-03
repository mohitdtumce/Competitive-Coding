// Search an element in a sorted and rotated array
#include <iostream>
using namespace std;

int findPivot(int A[],int low,int high){
	if(high < low){
		return -1;
	}
	if(high == low){
		return low;
	}
	int mid = low + (high-low)/2;
	//base case
	if(mid<high && A[mid]>A[mid+1]){
		return mid;
	}else if(mid>low && A[mid]<A[mid-1]){
		return mid-1;
	}
	if(A[low]>=A[mid]){
		return findPivot(A,low,mid-1);
	}
	return findPivot(A,mid+1,high);
}

int binarySearch(int A[],int low,int high,int x){
	if(low <= high){
		int mid = low + (high-low)/2;
		if(A[mid]==x){
			return mid;
		}else if(A[mid] < x){
			return binarySearch(A,mid+1,high,x);
		}else{
			return binarySearch(A,low,mid-1,x);
		}
	}else{
		return -1;
	}
}
int searchElementInSortedRotatedArray(int A[],int low,int high,int x){
	int pivot = findPivot(A,low,high);
	if(pivot == -1){
		return binarySearch(A,low,high,x);
	}
	if(A[pivot]==x){
		return pivot;
	}
	if(A[0]<x){
		return binarySearch(A,low,pivot-1,x);	
	}
	return binarySearch(A,pivot+1,high,x);
} 
int main(){
	int A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
	int n = sizeof(A)/sizeof(A[0]);
	int x = 3;
	cout<<searchElementInSortedRotatedArray(A,0,n-1,x);
	return 0;
}
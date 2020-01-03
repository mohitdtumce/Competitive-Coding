#include<iostream>
using namespace std;

int findPivot(int arr[],int si,int ei){
	if(si>ei){
		return -1;
	}
	if(si==ei){
		return si;
	}
	int mid=si+(ei-si)/2;
	if(mid<ei && arr[mid]>arr[mid+1]){
		return mid;
	}
	if(si<mid && arr[mid-1]>arr[mid]){
		return mid-1;
	}
	if(arr[si]>=arr[mid]){
		return findPivot(arr,si,mid-1);
	}
	return findPivot(arr,mid+1,ei);
}

int binarySearch(int arr[],int si,int ei,int x){
	if(ei<si){
		return -1;
	}
	int mid=si+(ei-si)/2;
	if(arr[mid]==x){
		return mid;
	}else if(arr[mid]>x){
		return binarySearch(arr,si,mid-1,x);
	}else{
		return binarySearch(arr,mid+1,ei,x);
	}
}

int PivotedBinarySearch(int arr[],int n,int key){
	int pivot=findPivot(arr,0,n);
	if(pivot==-1){
		return -1;
	}
	if (arr[pivot] == key)
		return pivot;
	if (arr[0] <= key)
		return binarySearch(arr, 0, pivot-1, key);
	return binarySearch(arr, pivot+1, n-1, key);
}

int main(){
	int arr[]={5, 6, 7, 8, 9, 1, 2, 3};;
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=3;
	cout<<PivotedBinarySearch(arr,n,x);
	return 0;
}
/*6. 
 Search an element in sorted and rotated array.
 
 Algo:
 1) find the pivoted element.
 2) If element to be searched for is found greater than 0th element
 		search(Binary Seach) in left subarray
	else
		search in right subarray 
*/
#include<iostream>
using namespace std;

//Step 1: Finding the Pivot Element
int FindPivot(int arr[],int l,int h){
	if(h<l){
		return -1;
	}
	if(h==l){
		return l;
	}
	int m=l+(h-l)/2;
	if(m<h && arr[m]>arr[m+1]){
		return m;
	}
	if(m>l && arr[m-1]>arr[m]){
		return m-1;
	}
	if(arr[l]>arr[m]){
		return FindPivot(arr,l,m-1);
	}
	return FindPivot(arr,m+1,h);
}

// Writing the binary Search
int BinarySearch(int arr[],int l,int r,int x){
	if(l<=r){
		int mid=l+(r-l)/2;
		if(arr[mid]==x){
			return mid;
		}else if(arr[mid]>x){
			return BinarySearch(arr,l,mid-1,x);
		}else{
			return BinarySearch(arr,mid+1,r,x);
		}
	}
	return -1;
}

int FindElement(int arr[],int l,int r,int x){
	int pivot=FindPivot(arr,l,r);
	if(x==pivot){
		return pivot;
	}else if(x>arr[0]){
		return BinarySearch(arr,l,pivot-1,x);
	}else{
		return BinarySearch(arr,pivot+1,r,x);
	}
}

int main(){
	int n=10;
	int A[]={7,9,10,1,2,3,4,5,6};
	cout<<FindElement(A,0,n-1,9);
	return 0;
}

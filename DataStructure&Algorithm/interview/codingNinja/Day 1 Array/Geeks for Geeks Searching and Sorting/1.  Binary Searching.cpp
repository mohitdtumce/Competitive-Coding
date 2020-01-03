// Binary Search 
#include<iostream>
using namespace std;
// Recursive
int BinarySearchRecursive(int A[],int i,int j,int item){
	int mid = (i+((j-i)/2));
	if(i<=j){
		if(A[mid]==item){
			return mid;
		}else if(A[mid]>item){
			j=mid-1;
			return BinarySearchRecursive(A,i,j,item);
		}else{
			i=mid+1;
			return BinarySearchRecursive(A,i,j,item);
		}
	}else{
		return -1;
	}	
}
// Iterative
int BinarySearchIterative(int A[],int i,int j,int item){
	int mid;
	while(i<=j){
		mid = (i+((j-i)/2));
		if(A[mid]==item){
			return mid;
		}else if(A[mid]>item){
			j=mid-1;
		}else{
			i=mid+1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {2, 3, 4, 10, 40};
	int n = sizeof(arr)/ sizeof(arr[0]);
	int x = 10;
	//Recursive implementation 
	int result = BinarySearchRecursive(arr, 0, n-1, x);
	(result == -1)? cout<<"Element is not present in array\n" : cout<<"Element is present at index "<<result<<"\n";
	// Iterative Implementation
	result = BinarySearchIterative(arr, 0, n-1, x);
	(result == -1)? cout<<"Element is not present in array" : cout<<"Element is present at index "<<result<<"\n";
	return 0;
}

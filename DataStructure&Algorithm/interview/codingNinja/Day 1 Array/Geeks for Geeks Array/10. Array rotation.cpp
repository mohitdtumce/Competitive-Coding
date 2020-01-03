/*
	10. Array rotation
	Methods 1: time complexity: O(n), Space complexity O(d)
		a) Using a temporary array for first d element to be rotated.
		b) shift the rest of the elements by d.
		c) Store rest of the elements at the end.
	Method 2: time complexity: O(n*d), Space complexity O(1)
		Using two loops and shifting the place 1 by 1
	Method 3: Reversal Algorithm
*/

#include<iostream>
using namespace std;

// Method 1
void ArrayRotation(int arr[],int n,int d){
	int temp[d]={0};
	for(int i=0;i<d;i++){
		temp[i]=arr[i];
	}
	for(int i=d;i<n;i++){
		arr[i-d]=arr[i];
	}
	for(int i=0;i<d;i++){
		arr[n-1-i]=temp[d-1-i];
	}
}

// Method 2
void ArrayRotation2(int arr[],int n,int d){
	for(int i=0;i<d;i++){
		int temp=arr[0];
		for(int i=1;i<n;i++){
			arr[i-1]=arr[i];
		}
		arr[n-1]=temp;
	}
}

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int A[] = {2, 8, 13, 15, 20, 5, 7, 9, 25};	
	int n = sizeof(A)/sizeof(A[0]);
	PrintArray(A,n);
	ArrayRotation(A,n,3);
	PrintArray(A,n);
	ArrayRotation2(A,n,3);
	PrintArray(A,n);
	return 0;
}

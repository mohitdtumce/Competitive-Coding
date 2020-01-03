/*
	10. Array rotation
	Method 3: Reversal Algorithm
*/

#include<iostream>
using namespace std;

//Method 3
void Swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void Reverse(int arr[],int l,int h){
	int mid=(h-l)/2;
	for(int i=0;i<=mid;i++){
		Swap(&arr[l+i],&arr[h-i]);
	}
}
void ArrayRotation3(int arr[],int n,int d){
	Reverse(arr,0,d-1);
	Reverse(arr,d,n-1);
	Reverse(arr,0,n-1);
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
	ArrayRotation3(A,n,3);
	PrintArray(A,n);
	return 0;
}

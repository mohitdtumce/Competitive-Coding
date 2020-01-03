#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void reverse(int arr[],int start,int end){
	int temp;
	while(start<end){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void arrayRotate(int arr[],int n,int d){
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
	
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int d=2;
	print(arr,n);
	arrayRotate(arr,n,d);
	print(arr,n);
	return 0;
}
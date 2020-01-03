#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void reverse(int arr[],int n){
	for(int i=0;i<n/2;i++){
		swap(&arr[i],&arr[n-i-1]);
	}
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n=sizeof(arr)/sizeof(arr[0]);
	print(arr,n);
	reverse(arr,n);
	print(arr,n);
	return 0;
}
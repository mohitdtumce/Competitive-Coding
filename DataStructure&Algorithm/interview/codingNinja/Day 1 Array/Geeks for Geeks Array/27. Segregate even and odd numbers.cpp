/*
	27. Segregate even and odd numbers	
*/
#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;

void Swap(int *a,int *b){
	int temp= *a;
	*a=*b;
	*b=temp;
}
void Segregate(int arr[],int n){
	int i=0,j=n-1;
	while(i<j){
		while(arr[i]%2!=1 && i<n){
			i++;
		}
		while(arr[j]%2!=0 && j>=0){
			j--;
		}
		if(arr[i]%2==1 && arr[j]%2==0){
			Swap(&arr[i],&arr[j]);
			i++;
			j--;
		}
	}
}
void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int arr[]={5,7,8,3,4,6,1,2,9,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	Segregate(arr,n);
	PrintArray(arr,n);
	return 0;
}

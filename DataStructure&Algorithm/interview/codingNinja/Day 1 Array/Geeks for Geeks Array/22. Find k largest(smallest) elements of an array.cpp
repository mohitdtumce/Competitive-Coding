/*
	22. Find k largest(smallest) elements of an array	
	Methods:
		1) Modified bubble sort where outer look runs for k times
		2) Sorting and then next printing last k elements
*/
#include<iostream>
#include<limits>
#include<algorithm>
using namespace std;

//Method 1: Modified Bubble Sort
void Swap(int *a,int *b){
	int temp= *a;
	*a=*b;
	*b=temp;
}
void LargestK(int arr[],int n,int k){
	for(int i=0;i<k;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				Swap(&arr[j],&arr[j+1]);
			}
		}
	}
	for(int i=n-k;i<n;i++){
		cout<<arr[i]<<' ';
	}
	cout<<"\n";
}

//Method 2: Sorting
void SmallestK(int arr[],int n,int k){
	sort(arr,arr+n);
	for(int i=0;i<k;i++){
		cout<<arr[i]<<' ';
	}
	cout<<"\n";
}

int main(){
	int arr[]={5,7,8,3,4,6,1,2,9,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	LargestK(arr,n,3);
	SmallestK(arr,n,4);
	return 0;
}

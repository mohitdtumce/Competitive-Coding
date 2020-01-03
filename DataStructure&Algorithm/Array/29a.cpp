#include <iostream>
using namespace std;

void swap(int *a,int *b){
	int temp =*a;
	*a = *b;
	*b = temp;
}
void printArray(int A[],int n){
	for(int i = 0;i < n;i++){
		cout<<A[i]<<" "; 
	}
	cout<<endl;
}

void segregate012(int A[],int n){
	int low = 0;
	int mid = 0;
	int high = n-1;
	while(mid<=high){
		switch(A[mid]){
			case 0: swap(&A[low],&A[mid]);
					low++;
					mid++;
					break;
			case 1: mid++;
					break;
			case 2: swap(&A[mid],&A[high]);
					high--;
		}
	}
	printArray(A,n);
}

int main(){
	int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	segregate012(arr,n);
	return 0;
}
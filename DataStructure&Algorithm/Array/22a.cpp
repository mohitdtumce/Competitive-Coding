//k largest(or smallest) elements in an array
#include <iostream>
using namespace std;

void swap(int *a,int *b){
	int temp =*a;
	*a = *b;
	*b = temp;
}

void kthLargestElement(int A[],int n,int k){
	for(int i=0;i<k;i++){
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				swap(&A[j],&A[j+1]);
			}
		}
	}
	for(int i=0;i<k;i++){
		cout<<A[n-1-i]<<" ";
	}
}
int main(){
	int A[] ={1, 23, 12, 9, 30, 2, 50};
	kthLargestElement(A,7,3);
	return 0;
}
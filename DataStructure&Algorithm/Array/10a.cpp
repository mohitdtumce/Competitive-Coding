//Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
#include <iostream>
using namespace std;

void printArray(int A[],int n){
	for(int i = 0;i < n;i++){
		cout<<A[i]<<" "; 
	}
	cout<<endl;
}

void swap(int *a,int *b){
	int temp =*a;
	*a = *b;
	*b = temp;
}
void reverseArray(int A[],int i,int j){
	while(i<j){
		swap(&A[i],&A[j]);
		i++;
		j--;
	}
}

void rotateArray(int A[],int n,int d){
	reverseArray(A,0,d-1);
	reverseArray(A,d,n-1);
	reverseArray(A,0,n-1);
}
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	rotateArray(arr,12,4);
	printArray(arr,12);
	return 0;
}
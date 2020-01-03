/*
Given an array A[], write a function that segregates even and 
odd numbers. The functions should put all even numbers first, 
and then odd numbers.
*/
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

void segregateEvenOddNumbers(int A[],int n){
	int i = 0;
	int j = n-1;
	while(i<j){
		while(A[i]%2==0 && i<j){
			i++;
		}
		while(A[j]%2==1 && i<j){
			j--;
		}
		if(i<j){
			swap(&A[i],&A[j]);
			i++;
			j--;
		}
	}
	printArray(A,n);
}
int main(){
	int A[] = {12, 34, 45, 9, 8, 90, 3};
	int n = sizeof(A)/sizeof(A[0]);
	segregateEvenOddNumbers(A,n);
	return 0;
}
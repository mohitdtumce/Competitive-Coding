// Write a program to reverse an array or string
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
void reverseArray(int A[],int n){
	int i=0,j=n-1;
	while(i<j){
		swap(&A[i],&A[j]);
		i++;
		j--;
	}
}
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	printArray(arr, 6);
	reverseArray(arr, 6);
	printArray(arr, 6);
	return 0;
}
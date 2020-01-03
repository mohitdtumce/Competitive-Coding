// Segregate 0s and 1s in an array
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

void segregateZeroesOnes(int A[],int n){
	int i=0;
	int j=n-1;
	while(i<j){
		while(A[i]==0 && i<j){
			i++;
		}
		while(A[j]==1 && i<j){
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
	int A[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
	int n = 10;
	segregateZeroesOnes(A,n);
	return 0;
}
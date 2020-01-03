/*
Given an array of positive numbers, find the maximum sum of a subsequence 
with the constraint that no 2 numbers in the sequence should be adjacent 
in the array. So 3 2 7 10 should return 13 (sum of 3 and 10) or 3 2 5 10 7 
should return 15 (sum of 3, 5 and 7). Answer the question in most efficient way.
*/
#include <iostream>
using namespace std;

int arrayMaxSumWithNoAdjecentElements(int A[],int n){
	int exc = 0;
	int inc = A[0];
	for(int i=1;i<n;i++){
		int temp = max(inc,exc);
		inc = exc+A[i];
		exc = temp;
	}
	return max(inc,exc);
}

int main(){
	int arr[] = {5, 5, 10, 100, 10, 5};
	int n = 6;
	cout<<arrayMaxSumWithNoAdjecentElements(arr,n);
	return 0;
}

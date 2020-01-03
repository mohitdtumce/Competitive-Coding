/*
Write a program to print all the LEADERS in the array. An element is
leader if it is greater than all the elements to its right side. And
the rightmost element is always a leader.
*/

#include <iostream>
using namespace std;

void printLeaders(int A[],int n){
	int maxSofar = A[n-1];
	for(int i=n-1;i>=0;i--){
		if(A[i]>=maxSofar){
			cout<<A[i]<<" ";
			maxSofar = A[i];
		}
	}
}
int main(){
	int arr[] = {16, 17, 4, 3, 5, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	printLeaders(arr, n);
	return 0;
}
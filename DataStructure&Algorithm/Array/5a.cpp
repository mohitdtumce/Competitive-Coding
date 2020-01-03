/*
You are given a list of n-1 integers and these integers are in the 
range of 1 to n. There are no duplicates in list. One of the integers 
is missing in the list. Write an efficient code to find the missing integer.
*/
#include <iostream>
using namespace std;

int findMissing(int A[],int n){
	long long sum = 0;
	for(int i = 1; i <= n+1;i++){
		sum += i;
	}
	for(int i = 0;i < n;i++){
		sum -= A[i];
	}
	return sum;
}

int main(){
	int A[] = {1,2,4,5,6};
	int n = 5;
	cout<<findMissing(A,n);
	return 0;
}
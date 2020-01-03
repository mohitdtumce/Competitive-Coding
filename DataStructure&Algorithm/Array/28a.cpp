/*
You are given an array of n+2 elements. All elements of the array 
are in range 1 to n. And all elements occur once except two numbers 
which occur twice. Find the two repeating numbers.
*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void findNumbers(int A[],int n){
	for(int i = 0;i < n+2;i++){
		if(A[abs(A[i])-1]<0){
			cout<<abs(A[i])<<" ";
		}else{
			A[abs(A[i])-1] *= (-1); 
		}
	}
}
int main(){
	int A[] = {4, 2, 4, 5, 2, 3, 1};
	findNumbers(A,5);
	return 0;
}
/*
Find the Minimum length Unsorted Subarray, sorting which makes 
the complete array sorted.
*/
#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;

void minLengthUnsortedSubarray(int A[],int n){
	int i = 0,j = n-1;
	for(;i<n-1;i++){
		if(A[i+1]<A[i]){
			break;
		}
	}
	for(;j>0;j--){
		if(A[j-1]>A[j]){
			break;
		}
	}
	// finding the minimum element and maximum element from the array A[s..e]
	int mx = A[i];
	int mn = A[i];
	for(int p = i+1;p <= j; p++){
		if(A[p] > mx){
			mx = A[p];
		}
		if(A[p] < mn){
			mn = A[p];
		}
	}
	int s,e;
	for(s=0;s<i;s++){
		if(mn < A[s]){
			i = s;
			break;
		}
	}
	for(e = n-1;e > j;e--){
		if(mx > A[e]){
			j = e;
			break;
		}
	}
	cout<<i<<" "<<j<<endl;
}
int main(){
	int A[] = {0, 1, 15, 25, 6, 7, 30, 40, 50};
	minLengthUnsortedSubarray(A,9);
	return 0;
}
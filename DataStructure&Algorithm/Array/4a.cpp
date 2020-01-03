// Write an efficient C program to find the sum of contiguous subarray 
// within a one-dimensional array of numbers which has the largest sum.
#include <iostream>
#include <climits>
using namespace std;

// Kadenes algorithm
int sumLargestSumContinuousSubarray(int A[],int n){
	int sumSofar = 0;
	int maxSum = INT_MIN;
	for(int i  = 0;i < n;i++)
	{
		sumSofar += A[i];
		if(maxSum < sumSofar){
			maxSum = sumSofar;
		}
		if(sumSofar < 0){
			sumSofar = 0;
		}
		
	}
	return maxSum;
}

int main(){
	int arr[] = {-2,-1,-4};
	int n = 3;
	cout<<sumLargestSumContinuousSubarray(arr,n);
	return 0;
}
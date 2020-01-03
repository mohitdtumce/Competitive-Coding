//Two elements whose sum is closest to zero
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int minAbsSum(int A[],int n){
	sort(A,A+n);
	int i = 0;
	int j = n-1;
	int minSumSofar = INT_MAX;
	pair<int,int> P;
	while(i<j){
		if(A[i]+A[j]==0){
			return 0;
		}else if(A[i]+A[j]<0){
			if(abs(A[i]+A[j]) < abs(minSumSofar)){
				minSumSofar = A[i]+A[j];
			}
			i++;
		}else{
			if(abs(A[i]+A[j]) < abs(minSumSofar)){
				minSumSofar = A[i]+A[j];
			}
			j--;
		}
	} 
	return minSumSofar;
}
int main(){
	int arr[] = {1, 60, -10, 70, 80, -85};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<minAbsSum(arr, n);
	return 0;
}

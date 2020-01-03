#include<iostream>
#include<climits>
using namespace std;

int largestSumContigiousSubarray(int arr[],int n){
	int max_sum_sofar=INT_MIN;
	int max_sum=0;
	for(int i=0;i<n;i++){
		max_sum+=arr[i];
		if(max_sum<0){
			max_sum=0;
		}
		if(max_sum>max_sum_sofar){
			max_sum_sofar=max_sum;
		}
	}
	return max_sum_sofar;
}
int main(){
	int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<largestSumContigiousSubarray(arr,size);
	return 0;
}
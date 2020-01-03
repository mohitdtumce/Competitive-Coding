/*
	20. Find Minimum and Maximum of an array	
*/
#include<iostream>
#include<limits>
using namespace std;

void MinAndMax(int arr[],int n){
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<min<<" "<<max;
}
int main(){
	int arr[] = {12, 13, 1, 10, 34, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	MinAndMax(arr,n);
	return 0;
}

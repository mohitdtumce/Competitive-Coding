/*
	16. Counting inversions in an array	
*/
#include<iostream>
using namespace std;

int CountingInversion(int arr[],int n){
	int count=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				count++;
			}
		}
	}
	return count;
}
int main(){
	int arr[] = {2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<CountingInversion(arr,n);
	return 0;
}

/* 1. 
Given an array A[] of n numbers and another number x,
determines whether or not there exist two elements in A[] whose sum is exactly x.
*/
#include<iostream>
#include<algorithm>
using namespace std;
//Method 1
bool function(int arr[],int n,int sum){
	sort(arr,arr+n);
	int l=0,r=n-1;
	while(l<r){
		if(arr[l]+arr[r]==sum){
			return 1;
		}else if(arr[l]+arr[r]<sum){
			l++;
		}else if(arr[l]+arr[r]>sum){
			r--;
		}
	}
	return 0; 
}

// Method 2: Hash map if the range of numbers is known
#define max 1001
bool function1(int arr[],int n,int sum){
	bool binmap[max]={0};
	int i,temp;
	for(i=0;i<n;i++){
		temp= sum-arr[i];
		if (temp >= 0 && binmap[temp] == 1)
			return 1;
		binmap[arr[i]] = 1;	
	}
	return 0;
}

int main(){
	int sum=21;
	int arr[]={1,21,20,10,19,32,45,67,54,55};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	std::cout<<function(arr,arr_size,sum)<<endl;
	std::cout<<function1(arr,arr_size,sum)<<endl;
	return 0;
}

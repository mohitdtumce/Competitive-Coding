#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool findSum(int arr[],int start,int end,int x){
	while(start<end){
		if(arr[start]+arr[end]==x){
			return 1;
		}else if(arr[start]+arr[end]<x){
			start++;
		}else{
			end--;
		}
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		bool result = false;
		for(int i=0;i<=n-3;i++){
			if(findSum(arr,i+1,n-1,x-arr[i])){
				result = true;
			}
		}
		cout<<result;
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
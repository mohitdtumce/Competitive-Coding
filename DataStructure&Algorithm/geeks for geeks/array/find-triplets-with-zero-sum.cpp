#include <iostream>
#include <algorithm>
using namespace std;
bool findDoubletWithGivenSum(int arr[],int l,int r,int x){
	while(l<r){
		if(arr[l] + arr[r] == x){
			return true;
		}else if(arr[l] + arr[r] < x){
			l++;
		}else{
			r--;
		}
	}
	return false;
}
bool findTriplets(int arr[], int n){
	if(n <= 2){
		return false;
	}
	sort(arr,arr+n);
	for(int i = n-1;i >= 2 ;i--){
		int rem = -arr[i];
		if(findDoubletWithGivenSum(arr,0,i-1,rem)==true){
			return true;
		}
	}
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n;i++){
			cin>>arr[i];
		}
		cout<<findTriplets(arr,n);
	}
	return 0;
}

#include<iostream>
#include<set>
using namespace std;

// Brute force method
// O(n*n)
bool zeroSum(int arr[],int n){
	int res;
	for(int i=0;i<n-1;i++){
		res=arr[i];
		if(res==0){
			return true;
		}
		for(int j=i+1;j<n;j++){
			res+=arr[j];
			if(res==0){
				return true;
			}
		}
	}
	return false;
}

// Hashing approach
// O(n)
bool zeroSumModified(int arr[],int n){
	set<int> myset;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		myset.insert(sum);
	}
	if(myset.size()<n){
		return true;
	}else{
		return false;
	}
}

int main(){
	int arr[] = {-3, 2, 3, 1, 6};
	cout<<zeroSum(arr,5);
	cout<<zeroSumModified(arr,5);
	return 0;
}
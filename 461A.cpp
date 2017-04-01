#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

long long function(int arr[],int start,int end,long long sum){
	if(start==end){
		return sum;
	}else{
		return sum+function(arr,start,start,arr[start])+function(arr,start+1,end,sum-arr[start]);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	long long sum = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum += arr[i];
	}
	sort(arr,arr+n);
	cout<<function(arr,0,n-1,sum);
	return 0;
}
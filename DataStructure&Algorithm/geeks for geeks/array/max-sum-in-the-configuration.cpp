#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// Method 1
// int max_sum(int arr[],int n)
// {
// 	int sum, maxSum = INT_MIN;
// 	for(int i=0;i<n;i++){
// 		sum = 0;
// 		for(int j=0;j<n;j++){
// 			if(j<i){
// 				sum += ((n - i + j)*arr[j]);
// 			}else{
// 				sum += ((j - i)*arr[j]);
// 			}
// 		}
// 		if(sum > maxSum){
// 			maxSum = sum;
// 		}
// 	}
// 	return maxSum;
// }

// Method 2
int max_sum(int arr[],int n){
	int sum = 0;
	int curr = 0;
	for(int i = 0;i < n; i++){
		sum += arr[i];
		curr += (i*arr[i]);
	}
	int fin = curr, res;
	for(int i = 1;i < n;i++){
		res = curr - (sum - arr[i-1]) + arr[i-1]*(n-1);
		fin = max(fin,res);
		curr = res;
	}
	return fin;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		cout<<max_sum(arr,n)<<endl;
	}
	return 0;
}
#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

//Brute force method
//O(n*n)
int subarrayLength(int arr[],int n,int x){
	int sum;
	int count=INT_MAX;
	int temp;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			if(x<sum){
				temp=(j-i+1);
				if(count>temp){
					count=temp;
				}
			}
		}
	}
	return count;
}

// Efficient approach
// O(n)
int subarrayLengthModified(int arr[],int n,int x){
	int cur_sum=0;
	int min_len=n+1;
	int start=0;
	int end=0;
	while(end<n){
		while(cur_sum<=x && end<n){
			cur_sum+=arr[end++];
		}
		while(cur_sum>x && start<n){
			if(min_len>(end-start)){
				min_len=(end-start);
			}
			cur_sum-=arr[start++];
		}
	}
	return min_len;
}
int main(){
	int arr[]={1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
	cout<<subarrayLength(arr,10,280);
	cout<<subarrayLengthModified(arr,10,280);
	return 0;
}
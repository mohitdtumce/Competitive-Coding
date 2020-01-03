/* 1. 
Given an array A[] of n numbers and another number x,
determines whether or not there exist two elements in A[] whose sum is exactly x.
*/
#include<iostream>
#include<algorithm>
using namespace std;
struct fp{
	int val;
	int index;
};
bool comp(struct fp a,struct fp b){
	return(a.val<b.val);
}
//Method 1
void FindPair(struct fp arr[],int n,int sum){
	stable_sort(arr,arr+n,comp);
	int l=0,r=n-1;
	while(l<r){
		if(arr[l].val+arr[r].val==sum){
			cout<<arr[l].index<<" "<<arr[r].index<<endl;
			return;
		}else if(arr[l].val+arr[r].val<sum){
			l++;
		}else if(arr[l].val+arr[r].val>sum){
			r--;
		}
	} 
}

int main(){
	int T,M,N;
	cin>>T;
	while(T--){
		cin>>M>>N;
		struct fp arr[N];
		for(int i=0;i<N;i++){
			cin>>arr[i].val;
			arr[i].index=i+1;
		}
		FindPair(arr,N,M);
	}
	return 0;
}

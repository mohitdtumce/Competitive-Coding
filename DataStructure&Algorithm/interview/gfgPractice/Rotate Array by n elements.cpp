#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
void rotate(int arr[],int start,int end){
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] =  temp;
		start++;
		end--;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		rotate(arr,0,d-1);
		rotate(arr,d,n-1);
		rotate(arr,0,n-1);
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
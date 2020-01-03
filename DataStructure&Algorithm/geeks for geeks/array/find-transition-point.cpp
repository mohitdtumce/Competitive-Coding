#include <iostream>
using namespace std;

int transitionPoint(int arr[],int n)
{
	int l = 0,r = n-1;
	while(l <= r){
		int mid = l+(r-l)/2;
		if(mid > l && (arr[mid-1] ^ arr[mid])){
			return mid;
		}else if(mid < r && (arr[mid] ^ arr[mid+1])){
			return mid+1;
		}

		if(arr[mid] == 0){
			l = mid+1;
		}else if(arr[mid] == 1){
			r = mid;
		}
	}
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
		cout<<transitionPoint(arr,n)<<endl;
	}
	return 0;
}

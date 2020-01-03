#include <iostream>
#include <algorithm>
using namespace std;
int binSearch(int arr[],int l,int r,int x)
{
	int count = 0;
	int mid;
	while(l <= r){
		mid = l+(r-l)/2;
		if(arr[mid] > x){
			r = mid-1;
		}else if(arr[mid] <= x){
			count += (mid-l+1);
			l = mid+1;
		}
	}
}
void countEleLessThanOrEqual(int arr1[], int arr2[], int m, int n)
{
	sort(arr2,arr2+n);
	for(int i = 0;i < m; i++){
		int x = binSearch(arr2,0,n-1,arr1[i]);
		cout<<x<<" ";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int arr1[m];
		int arr2[n];
		for(int i = 0; i < m; i++){
			cin>>arr1[i];
		}
		for(int j=0;j<n;j++){
			cin>>arr2[j];
		}
		countEleLessThanOrEqual(arr1,arr2,m,n);
		cout<<endl;
	}
	return 0;
}
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int ri=0,rj=n-1,sum=INT_MAX;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(abs(arr[i]+arr[j])<sum){
					sum = abs(arr[i]+arr[j]);
					ri = i;
					rj = j;
				}
			}
		}
		int mx = max(arr[ri],arr[rj]);
		int mn = min(arr[ri],arr[rj]);
		cout<<mn<<" "<<mx;
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
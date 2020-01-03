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
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
			arr[i]=arr[i]-i;
		int mn = INT_MAX;
		int mx = INT_MIN;
		for(int i=0;i<n;i++){
			if(mn>arr[i]){
				mn = arr[i];
			}
			if(mx<arr[i]){
				mx = arr[i];
			}
		}
		cout<<(mx-mn);
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
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
		vector<int> vec;
		vec.push_back(arr[n-1]);
		int temp = arr[n-1];
		for(int i=n-1;i>=0;i--){
			if(temp<arr[i]){
				temp = arr[i];
				vec.push_back(arr[i]);
			}
		}
		int sz = vec.size();
		for(int i = sz-1;i>=0;i--){
			cout<<vec[i]<<" ";
		}
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
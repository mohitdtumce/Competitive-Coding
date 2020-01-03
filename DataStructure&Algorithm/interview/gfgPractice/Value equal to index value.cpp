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
		bool flag = false;
		for(int i=0 ; i<n ; i++){
			if(arr[i] == (i+1)){
				flag  = true;
				cout<<arr[i]<<" ";
			}
		}
		if(!flag){
			cout<<"Not Found";
		}
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
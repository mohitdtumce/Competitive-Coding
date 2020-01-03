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
		for(int i=n-1;i>=0;i--){
			cout<<arr[i];
			if(i>0){
				cout<<" ";
			}
		}
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
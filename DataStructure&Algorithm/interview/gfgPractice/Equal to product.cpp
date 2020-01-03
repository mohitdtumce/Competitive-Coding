#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		long p;
		cin>>p;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		bool result = false;
		int start=0,end = n-1;
		long currProduct = 1;
		while(start<end){
			if(arr[start]*arr[end]==p){
				result = true;
				break;
			}
			else if(arr[start]*arr[end]<p){
				start++;
			}else{
				end--;
			}
		}
		if(result){
			cout<<"Yes";
		}else{
			cout<<"No";
		}

		if(T>0){
			cout<<endl;
		}
	}
	return 0;
}
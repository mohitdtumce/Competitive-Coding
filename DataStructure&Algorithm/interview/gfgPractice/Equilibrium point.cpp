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
		int arr[n],sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum += arr[i];
		}
		int currentSum=0;
		int index = 0;
		bool result = false;
		for(int i=0;i<n;i++){
			if(sum-arr[i] == 2*currentSum){
				result = true;
				index = i+1;
				break;
			}
			currentSum+=arr[i];
		}
		if(result){
			cout<<index;
		}else{
			cout<<-1;
		}
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
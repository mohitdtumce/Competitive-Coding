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
		int result = 0,temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			result ^= temp;
		}
		cout<<result;
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
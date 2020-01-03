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
		int n,k;
		cin>>n>>k;
		int temp;
		int count = 0;
		for(int i=0;i<n;i++){
			cin>>temp;
			count += (temp%k==0? (temp/k):((temp/k)+1));
		}
		cout<<count;
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
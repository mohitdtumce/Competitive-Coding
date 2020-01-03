#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <map>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int n,temp,mn = INT_MAX, mx = INT_MIN;
	long maxDiff = 0,value = 0;
	cin>> n;
	map<long,long> mymap;
	for(int i=0;i<n;i++){
		cin>>temp;
		mymap[temp]++;
		if(temp < mn){
			mn = temp;
		}
		if(temp > mx){
			mx = temp;
		}
		if(mx-mn>mxdiff){
			mxdiff=mx-mn;
	}
	if(mx == mn){
		n%2==0 ? (value = (n/2)*(n-1)):(value = ((n-1)/2)*(n));
	}else{
		value = mymap[mx]*mymap[mn];
	}
	cout<<maxDiff<<" "<<value<<endl;
	return 0;
}
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int n;
	int m;
	int temp;
	vector<int> boys;
	vector<int> girls;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>temp;
	    boys.push_back(temp);
	}
	cin>>m;
	for(int j=0;j<m;j++){
	    cin>>temp;
	    girls.push_back(temp);
	}
	sort(boys.begin(),boys.end());
	sort(girls.begin(),girls.end());
	int i=0;
	int j=0;
	int count=0;
	while(i<boys.size() && j< girls.size()){
		if(abs(boys[i]-girls[j]) <= 1){
			i++;
			j++;
			count++;
		}else if(boys[i]-girls[j]>1){
			j++;
		}else{
			i++;
		}
	}
	cout<<count;
	return 0;
}
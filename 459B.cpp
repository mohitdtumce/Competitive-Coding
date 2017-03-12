#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long n,i,temp;
	cin>>n;
	vector<long>vec;
	for(i=0;i<n;i++){
		cin>>temp;
		vec.push_back(temp);
	}
	sort(vec.begin(),vec.end());
	long mini=1,maxi=1;
	for(i=1;i<n && vec[0] == vec[i];i++){
		mini++;
	}
	for(i=n-2; i>=0 && vec[n-1] == vec[i];i--){
		maxi++;
	}
	long long val = mini*maxi;
	cout<<(vec[n-1]-vec[0])<<" "<<val<<"\n";
	return 0;
}
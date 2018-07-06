#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

int main(){
	int n,m,temp;
	cin>>n>>m;
	int arr[n];
	int vec[n];
	set<int> myset;
	for(int i=0;i <n;i++){
		cin>>arr[i];
	}
	for(int i=n-1;i >= 0;i--){
		myset.insert(arr[i]);
		vec[i]=myset.size();
	}
	int l;
	for(int i=0;i<m;i++){
		cin>>l;
		cout<<vec[l-1]<<endl;
	}
	return 0;
}

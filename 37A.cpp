#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

int main(){
	int n;
	cin>>n;
	int temp,count=0;
	map<int,int> mymap;
	for(int i=0;i<n;i++){
		cin>>temp;
		mymap[temp]++;
		if(mymap[temp]>count){
			count = mymap[temp];
		}
	}
	cout<<count<<" "<<mymap.size();
	return 0;
}
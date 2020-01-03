#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int temp;
		map<int,int> mymap;
		for(int i=0;i<n;i++){
			cin>>temp;
			mymap[temp]++;
		}
		bool result = false;
		map<int,int>::iterator itr;
		for(itr = mymap.begin();itr != mymap.end();itr++){
			if(2*(itr->second)>n){
				cout<<(itr->first);
				result = true;
				break;
			}
		}
		if(!result){
			cout<<"NO Majority Element";
		}
		if(t>0){
			cout<<endl;
		}
	}
	return 0;
}
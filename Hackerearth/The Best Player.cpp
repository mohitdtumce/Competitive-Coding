#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct grp{
	string name;
	int q;
};

bool comp(grp a,grp b){
	if(a.q < b.q){
		return 0;
	}else if(a.q > b.q){
		return 1;
	}else{
		if(a.name<b.name){
			return 1;
		}else{
			return 0;
		}
	}
}

int main(){
	int N,T;
	cin>>N>>T;
	struct grp fans[N];
	string tempname;
	int tempq;
	for(int i=0;i<N;i++){
		cin>>tempname>>tempq;
		fans[i].name=tempname;
		fans[i].q=tempq;
	}
	sort(fans,fans+N,comp);
	for(int i=0;i<T;i++){
		cout<<fans[i].name<<endl;
	}
	return 0;
}
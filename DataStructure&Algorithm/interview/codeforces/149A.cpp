#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int rg,i,temp;
	cin>>rg;
	vector<int> vec;
	for(i=0;i<12;i++){
		std::cin>>temp;
		vec.push_back(temp);
	}
	if(rg == 0){
		std::cout<<"0";
		return 0;
	}
	sort(vec.begin(),vec.end());
	for(i = 1; i<=12 ;i++){
		rg = rg -vec[12-i];
		if(rg<=0){
			std::cout<<i;
			return 0;
		}
	}
	if(rg>0){
		std::cout<<"-1";
	}
	return 0;
	
}

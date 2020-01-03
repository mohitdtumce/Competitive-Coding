#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int min(int a,int b){
	return a>b?b:a;
}
int main(){
	int n, teamCount = 0,temp;
	vector<int> cat1,cat2,cat3;

	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>temp;
		if(temp == 1){
			cat1.push_back(i);
		}else if(temp == 2){
			cat2.push_back(i);
		}else{
			cat3.push_back(i);
		}
	}

	teamCount = min(cat1.size(), min(cat2.size(),cat3.size()));
	cout << teamCount << endl;
	if(teamCount!=0){
		for(int i=0; i< teamCount;i++){
			cout<<cat1[i]<<" "<<cat2[i]<<" "<<cat3[i]<<endl;
		}
	}
	return 0;
}
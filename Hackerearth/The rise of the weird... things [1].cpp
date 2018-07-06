#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> zom;
	vector<int> vamp;
	int temp;
	int sumzom=0;
	int sumvamp=0;
	for(int i=0; i<n; i++){
		cin>>temp;
		if(temp%2==0){
			zom.push_back(temp);
			sumzom+=temp;
		}else{
			vamp.push_back(temp);
			sumvamp+=temp;
		}
	}
	sort(zom.begin(),zom.end());
	sort(vamp.begin(),vamp.end());
	for(vector<int>::iterator it=zom.begin();it!=zom.end();it++){
		cout<<*it<<" ";
	}
	cout<<sumzom<<" ";
	for(vector<int>::iterator it=vamp.begin();it!=vamp.end();it++){
		cout<<*it<<" ";
	}
	cout<<sumvamp;
	return 0;
}
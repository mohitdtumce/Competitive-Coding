#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
string num2string(int num){
	int temp;
	string str;
	while(num){
		temp = num % 10;
		str = char(temp+'0')+str;
		num /= 10;
	}
	return str;
}
int main(){
	map<string,int> mymap;
	map<string,int>::iterator itr;
	int n;
	cin>>n;
	string str;
	for(int i=0;i<n;i++){
		cin>>str;
		if(mymap.count(str)==0){
			mymap.insert(pair<string,int>(str,0));
			cout<<"OK\n";
		}else{
			itr = mymap.find(str);
			itr->second++;
			string temp = num2string(itr->second);
			str+=temp;
			cout<<str<<endl;
		}
	}
	return 0;
}
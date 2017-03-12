#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	string str;
	cin>>str;
	for(int i=1; i<n; i++){
		if(str[i]==str[i-1]){
			count++;
		}
	}
	std::cout<<count;
	return 0;
}
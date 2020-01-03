#include <iostream>
#include <string>
using namespace std;

int findCount(string str){
	int len = str.length();
	int count = 0;
	int count0 = 0;
	int fc = 0;
	for(int i = 0; i < len;i++){
		if(str[i] != '0' && str[i] != '1'){
			count = 0;
			count0 = 0;
		}else if(str[i] == '0'){
			count0++;
		}
		else if(str[i] == '1'){
			count++;
			if(count0 > 0 && count > 1){
				fc ++;
				count = 1;
				count0 = 0;
			}
		}
	}
	return fc;
}
int main(){
	int t;
	cin>>t;
	string str;
	while(t--){
		cin>>str;
		cout<<findCount(str)<<endl;
	}
	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str){
	int len=str.length();
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-1-i]){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	string str;
	while(t--){
		cin>>str;
		if(isPalindrome(str)==true){
			if(str.length()%2==0){
				cout<<"YES EVEN\n";
			}else{
				cout<<"YES ODD\n";
			}
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}
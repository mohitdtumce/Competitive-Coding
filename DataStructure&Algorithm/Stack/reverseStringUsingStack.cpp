#include <iostream>
#include <stack>
using namespace std;

string reverseString(string str){
	int len = str.length();
	stack<char> S;
	for(int i = 0;i < len; i++){
		S.push(str[i]);
	}
	for(int i = 0;i < len; i++){
		str[i] = S.top();
		S.pop();
	}
	return str;
}

int main(){
	string str = "MohitSharma";
	cout<<str<<endl;
	cout<<reverseString(str)<<endl;
	return 0;
}
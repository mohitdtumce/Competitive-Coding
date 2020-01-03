#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
bool isDigit(char ch){
	return (ch >= '0' && ch <= '9');
}
int evaluatePostfix(string str){
	stack<int> S;
	int len = str.length();
	for(int i = 0;i < len;i++){
		if(isDigit(str[i])){
			S.push(str[i] - '0');
		}else{
			int b = S.top();S.pop();
			int a = S.top();S.pop();
			switch (str[i]){
				case '+':
					S.push(a+b);
					break;
				case '-':
					S.push(a-b);
					break;
				case '*':
					S.push(a*b);
					break;
				case '/':
					S.push(a/b);
					break;
				case '^':
					S.push(pow(a,b));
			}
		}
	}
	return S.top();
}
int main(){
	string str = "231*+9-";
	cout<<evaluatePostfix(str);
	return 0;
}
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperand(char ch){
	return (ch >= '0' && ch <= '9');
}

int precedence(char ch){
	switch (ch){
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3; 
	}
	return -1;
}
void infix2Postfix(string str){
	int l = str.length();
	stack<char> S;
	for(int i = 0;i < l;i++){
		if(isOperand(str[i])){
			cout<<str[i];
		}else if(str[i] == '('){
			S.push(str[i]);
		}else if(str[i] == ')'){
			while(S.top() != '('){
				cout<<S.top();
				S.pop();
			}
			S.pop();
		}else{
			while(S.empty()==false && precedence(str[i]) <= precedence(S.top())){
				cout<<S.top();
				S.pop();
			}
			S.push(str[i]);
		}
	}
	while(S.empty()==false){
		cout<<S.top();
		S.pop();
	}
}
int main(){
	string exp = "1+2*(3^4-5)^(6+7*8)-9";
    infix2Postfix(exp);
}
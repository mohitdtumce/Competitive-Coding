#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isMatchingPair(char a, char b)
{
   if (a == '(' && b == ')')
     return 1;
   else if (a == '{' && b == '}')
     return 1;
   else if (a == '[' && b == ']')
     return 1;
   else
     return 0;
}
bool parenthesisMatching(string exp){
	stack<char> S;
	int len = exp.length();
	for(int i = 0;i < len;i++){
		if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{'){
			S.push(exp[i]);
		}else{  
			if(S.empty() == true || !isMatchingPair(S.top(),exp[i])){
				return false;
			}else{
				S.pop();
			}
		}
	}
	return S.empty();
}
int main(){
	string exp = "{()}[]";
	cout<<parenthesisMatching(exp);
	return 0;
}
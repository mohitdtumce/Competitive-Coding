#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool matchingPair(char a,char b)
{
	if(a == '(' && b == ')')
		return true;
	else if(a == '[' && b == ']')
		return true;
	else if(a == '{' && b == '}')
		return true;
	return false;
}
bool parenthesisChecker(string str)
{
	int len = str.length();
	stack<char> S;
	for (int i = 0; i < len; ++i)
	{
		if(str[i] == '(' ||  str[i] == '[' || str[i] == '{')
        	S.push(str[i]);
		else{
			if(S.empty() == true){
				return false;
			}
			char temp = S.top();
			S.pop();
			if(!matchingPair(temp,str[i])){
				return false;
			}
		}
	}
	if(S.empty() == false){
		return false;
	}
	return true;
}
int main(int argc, char const *argv[])
{
	string str = "{(}[]";
	cout<<parenthesisChecker(str);
	return 0;
}

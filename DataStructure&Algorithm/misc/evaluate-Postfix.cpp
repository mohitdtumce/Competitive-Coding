// Evaluate postfix expression
#include <stack>
#include <iostream>
#include <cmath>
using namespace std;

int evaluatePostfixExpression(string str)
{
	int len = str.length();
	stack<int> S;
	for (int i = 0; i < len; ++i)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			S.push(str[i]-'0');
		}else{
			int b = S.top();
			S.pop();
			int a = S.top();
			S.pop();
			switch(str[i])
			{
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
					break;
			}
		}
	}
	return S.top();
}
int main(int argc, char const *argv[])
{
	string str = "231*+9-";
	cout<<evaluatePostfixExpression(str);
	return 0;
}
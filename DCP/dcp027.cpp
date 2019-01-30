/*
Given a string of round, curly, and square open and closing brackets, 
return whether the brackets are balanced (well-formed).

For example, given the string "([])[]({})", you should return true.

Given the string "([)]" or "((()", you should return false.
*/

#include <bits/stdc++.h>
using namespace std;

bool isMatching(char open, char close)
{
    return ((open == '(' && close == ')') ||
            (open == '[' && close == ']') ||
            (open == '{' && close == '}'));
}
bool isBalanced(string exp)
{
    stack<char> S;
    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '(')
        {
            S.push(exp[i]);
        }
        else
        {
            if (S.empty())
                return false;
            char temp = S.top();
            S.pop();
            if (!isMatching(temp, exp[i]))
                return false;
        }
    }

    return true;
}

int main()
{
    return 0;
}
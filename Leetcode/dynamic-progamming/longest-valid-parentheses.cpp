#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<int> S;
        S.push(-1);
        int result = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                S.push(i);
            }
            else
            {
                S.pop();
                if (S.empty())
                {
                    S.push(i);
                }
                else
                {
                    result = max(result, i - S.top());
                }
            }
        }
    }
};
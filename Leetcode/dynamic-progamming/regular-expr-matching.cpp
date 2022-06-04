#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool isMatch(int i, int j, string &s, string &p, vector<vector<int>> &result)
    {
        if (result[i][j] != -1)
        {
            return result[i][j] == 1;
        }
        bool ans = false;
        if (j == p.length())
        {
            ans = (i == s.length());
        }
        else
        {
            bool match = (i < s.length() && (s[i] == p[j] || p[j] == '.'));
            if (j + 1 < p.length() && p[j + 1] == '*')
            {
                ans = (match && isMatch(i + 1, j, s, p, result)) || (isMatch(i, j + 2, s, p, result));
            }
            else
            {
                ans = match && isMatch(i + 1, j + 1, s, p, result);
            }
        }
        result[i][j] = ans ? 1 : 0;
        return ans;
    }

public:
    bool isMatch(string s, string p)
    {
        vector<vector<int>> result(s.length() + 1, vector<int>(p.length() + 1, -1));
        return isMatch(0, 0, s, p, result);
    }
};
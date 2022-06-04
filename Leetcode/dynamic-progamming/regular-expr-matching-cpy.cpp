#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool isMatch(int i, int j, string &s, string &p, vector<vector<int>> &result)
    {
        if (result[i][j] != -1) {
            return result[i][j] == 1;
        }
        if (i >= s.size() && j >= p.size())
            return true;
        if (j >= p.size())
            return false;
        // j is less than p.size()
        bool match = (i < s.size() && (s[i] == p[j] || p[j] == '.'));
        if (j + 1 < p.size() && p[j + 1] == '*')
        {
            result[i][j] = ((match && isMatch(i + 1, j, s, p, result)) || isMatch(i, j + 2, s, p, result));
            return result[i][j]; 
        }

        if (match)
        {
            result[i][j] = isMatch(i + 1, j + 1, s, p, result);
            return result[i][j];
        }
        result[i][j] = 0;
        return result[i][j];
    }

public:
    bool isMatch(string s, string p)
    {
        vector<vector<int>> result(s.length() + 1, vector<int>(p.length() + 1, -1));
        return isMatch(0, 0, s, p, result);
    }
};
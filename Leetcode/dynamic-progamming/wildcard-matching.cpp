#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeAdjacentAsterisks(string str)
    {
        string p = "";
        int i = 0, j;
        while (i < str.size())
        {
            p += str[i];
            if (str[i] == '*')
            {
                j = i + 1;
                while (j < str.size() && str[j] == '*')
                {
                    j++;
                }
                i = j;
            }
            else
            {
                i++;
            }
        }
        return p;
    }
    bool isMatch(string s, string pc)
    {
        string p = removeAdjacentAsterisks(pc);
        int sl = s.size(), pl = p.size();
        bool dp[sl + 1][pl + 1];
        dp[0][0] = true;

        for (int pi = 1; pi <= pl; pi++)
        {
            if (pi == 1 && p[pi - 1] == '*')
            {
                dp[0][pi] = true;
            }
            else
            {
                dp[0][pi] = false;
            }
        }

        for (int si = 1; si <= sl; si++)
        {
            dp[si][0] = false;
        }

        for (int si = 1; si <= sl; si++)
        {
            for (int pi = 1; pi <= pl; pi++)
            {
                if (s[si - 1] == p[pi - 1] || p[pi - 1] == '?')
                {
                    dp[si][pi] = dp[si - 1][pi - 1];
                }
                else if (p[pi - 1] == '*')
                {
                    // We can use * to match the current character. We can use the * again. dp[si - 1][pi]
                    // or we can ignore the *. We'll try to match the string without the help of *. i.e. dp[si][pi - 1]
                    dp[si][pi] = dp[si - 1][pi] || dp[si][pi - 1];
                }
                else
                {
                    dp[si][pi] = false;
                }
            }
        }
        return dp[sl][pl];
    }
};
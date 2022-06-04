#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        int m = word1.size(), n = word2.size();
        int dp[m + 1][n + 1] = {};
        for (int i = 0; i <= m; i++)
        {
            dp[i][0] = i;
        }

        for (int j = 0; j <= n; j++)
        {
            dp[0][j] = j;
        }

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == 0)
                    dp[i][j] = j;
                else if (j == 0)
                    dp[i][j] = i;
                else
                {
                    if (word1[i] == word2[j])
                    {
                        dp[i][j] = dp[i - 1][j - 1];
                    }
                    else
                    {
                        dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
                    }
                }
            }
        }
        return dp[m][n];
    }
};
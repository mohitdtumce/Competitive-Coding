#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int N = nums.size();
        if (N <= 1)
            return true;

        int dp[N] = {};
        dp[0] = 0;
        for (int i = 1; i < N; i++)
        {
            dp[i] = INT_MAX;
            for (int j = i - 1; j >= 0; j--)
            {
                if (dp[j] != INT_MAX && nums[j] + j >= i)
                {
                    dp[i] = min(dp[i], dp[j] + 1);
                }
            }
        }
        return dp[N - 1];
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int N = nums.size();
        if (N <= 1)
            return true;

        bool dp[N] = {};
        dp[0] = true;
        for (int i = 1; i < N; i++)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (dp[j] && nums[j] + j >= i)
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[N - 1];
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool subsetSum(vector<int> &nums, int target)
    {
        int size = nums.size();
        bool dp[target + 1][size + 1];
        for (int t = 1; t <= target; t++)
        {
            dp[t][0] = false;
        }
        for (int i = 0; i <= size; i++)
        {
            dp[0][i] = true;
        }

        for (int t = 1; t <= target; t++)
        {
            for (int i = 1; i <= size; i++)
            {
                if (nums[i - 1] > t)
                {
                    // if the item is larger than the required target,
                    // we'll not include the item in our result;
                    dp[t][i] = dp[t][i - 1];
                }
                else
                {
                    // If the item is smaller or equal than the required target,
                    // then we have an option to either select or reject the item.
                    dp[t][i] = dp[t][i - 1] || dp[t - nums[i - 1]][i - 1];
                }
            }
        }
        return dp[target][size];
    }

public:
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (int num : nums)
        {
            sum += num;
        }
        if (sum & 1)
        {
            return false;
        }
        else
        {
            return subsetSum(nums, sum >> 1);
        }
    }
};
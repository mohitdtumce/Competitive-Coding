#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void printMatrix(vector<vector<bool>> &dp)
    {
        for (int i = 0; i < dp.size(); i++)
        {
            for (int j = 0; j < dp[i].size(); j++)
            {
                cout << (dp[i][j] ? 'T' : 'F') << " ";
            }
            cout << "\n";
        }
    }
    void findSubsets(vector<int> &nums, vector<vector<bool>> &dp, const int &R, const int &C, int t, int i, int target, vector<int> &resSoFar, vector<vector<int>> &result)
    {
        // cout << "t: " << t << " i: " << i << " target: " << target << "\n";
        if (target < 0)
        {
            return;
        }
        if (t <= 0 || i <= 0 && target == 0)
        {
            result.push_back(resSoFar);
            return;
        }

        // this number is part of sum;
        if (t >= nums[i - 1] && i >= 0 && dp[t - nums[i - 1]][i])
        {
            // If dp[t - nums[i - 1]][i - 1] is true, then we can include this in the result
            resSoFar.push_back(nums[i - 1]);
            // cout << "Case 1: Including nums[i - 1]: " << nums[i - 1] << "\n";
            findSubsets(nums, dp, R, C, t - nums[i - 1], i, target - nums[i - 1], resSoFar, result);
            resSoFar.pop_back();
        }
        if (i - 1 >= 0 && dp[t][i - 1])
        {
            // If dp[t][i - 1] is true, it means we can create the target without the help of current number too.
            // If dp[t - nums[i - 1]][i - 1] is true, then we can include this in the result
            // cout << "Case 2: Not including nums[i - 1]: " << nums[i - 1] << "\n";
            findSubsets(nums, dp, R, C, t, i - 1, target, resSoFar, result);
        }
    }
    vector<vector<int>> subsetSum(vector<int> &nums, int target)
    {
        int size = nums.size();
        vector<vector<bool>> dp(target + 1, vector<bool>(size + 1, false));
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
                    dp[t][i] = dp[t][i - 1];
                }
                else
                {
                    dp[t][i] = dp[t][i - 1] || dp[t - nums[i - 1]][i];
                }
            }
        }
        // printMatrix(dp);
        if (!dp[target][size])
        {
            return {};
        }
        else
        {
            vector<vector<int>> result;
            vector<int> resSoFar = {};
            findSubsets(nums, dp, target + 1, size + 1, target, size, target, resSoFar, result);
            return result;
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        return subsetSum(candidates, target);
    }
};
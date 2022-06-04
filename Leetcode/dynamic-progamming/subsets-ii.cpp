#include <bits/stdc++.h>
using namespace std;

class Solution
{
    
    void subsetsWithDup(vector<int> &nums, int index, vector<int> &resSoFar, vector<vector<int>> &result)
    {
        result.push_back(resSoFar); 
        if (index  >= nums.size())
            return;           
        for (int i = index; i < nums.size(); i++)
        {
            if (i == index || nums[i] != nums[i - 1])
            {
                resSoFar.push_back(nums[i]);
                subsetsWithDup(nums, i + 1, resSoFar, result);
                resSoFar.pop_back();
            }
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> result = {};
        vector<int> resSoFar = {};
        sort(nums.begin(), nums.end());
        subsetsWithDup(nums, 0, resSoFar, result);
        return result;
    }
};
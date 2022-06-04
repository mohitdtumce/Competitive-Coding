#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<vector<int>> result;
    void permute(vector<int> &nums, int index)
    {
        if (index >= nums.size())
        {
            result.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[i], nums[index]);
            permute(nums, index + 1);
            swap(nums[i], nums[index]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        permute(nums, 0);
        return result;
    }
};
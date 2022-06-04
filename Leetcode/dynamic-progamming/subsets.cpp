#include <bits/stdc++.h>
using namespace std;


class Solution {
    vector<vector<int>> subsetResults;
    void subsets(vector<int> &subsetSoFar, int index, const vector<int> nums) {
        if (index >= nums.size()) {
            subsetResults.push_back(subsetSoFar);
        } else {
            subsets(subsetSoFar, index + 1, nums);
            subsetSoFar.push_back(nums[index]);
            subsets(subsetSoFar, index + 1, nums);
            subsetSoFar.pop_back();
        }       
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> vec;
        subsets(vec, 0, nums);
        return subsetResults;
    }
};
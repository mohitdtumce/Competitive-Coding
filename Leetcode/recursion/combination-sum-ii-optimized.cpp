#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<vector<int>> result;
    vector<int> resSoFar;
    void combinationSum2(const vector<int> &candidates, int index, int target)
    {
        if (target < 0)
        {
            return;
        }
        if (target == 0)
        {
            result.push_back(resSoFar);
            return;
        }

        for (int i = index; i < candidates.size(); i++)
        {
            if (i == index || candidates[i] != candidates[i - 1])
            {
                resSoFar.push_back(candidates[i]);
                combinationSum2(candidates, i + 1, target - candidates[i]);
                resSoFar.pop_back();
            }
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        result = {};
        resSoFar = {};
        sort(candidates.begin(), candidates.end());
        combinationSum2(candidates, 0, target);
        return result;
    }
};
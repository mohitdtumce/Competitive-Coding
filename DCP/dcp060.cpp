/*
Given a multiset of integers, return whether it can be partitioned into two subsets 
whose sums are the same.

For example, given the multiset {15, 5, 20, 10, 35, 15, 10}, it would return true, 
since we can split it up into {15, 5, 10, 15, 10} and {20, 35}, which both add up to 55.

Given the multiset {15, 5, 20, 10, 35}, it would return false, 
since we can't split it up into two subsets that add up to the same sum.
*/

#include <bits/stdc++.h>
using namespace std;

bool isSubset(const vector<int> &vec, int sum)
{
    vector<vector<bool>> dp(vec.size() + 1, vector<bool>(sum + 1, false));

    for (int i = 0; i <= vec.size(); i++)
        dp[i][0] = true;

    for (int i = 1; i <= vec.size(); i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j < vec[i - 1])
            {
                dp[i][j] = dp[i][j - 1];
            }
            else
            {
                dp[i][j] = dp[i][j - 1] || dp[i - 1][j - vec[i - 1]];
            }
        }
    }

    return dp[vec.size()][sum];
}

bool partitionSet(const vector<int> &vec)
{
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
        sum += vec[i];

    if (sum & 1)
        return false;
    else
        return isSubset(vec, sum / 2);
}

int main()
{
    vector<int> set = {15, 5, 20, 10, 35};
    cout<<partitionSet(set);
}
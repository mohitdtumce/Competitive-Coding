/*
Given a list of integers S and a target number k, 
write a function that returns a subset of S that adds up to k. 

If such a subset cannot be made, then return null.

Integers can appear more than once in the list. 
You may assume all numbers in the list are positive.

For example, given S = [12, 1, 61, 5, 9, 2] and k = 24, return [12, 9, 2, 1] 
since it sums up to 24.
*/

#include <bits/stdc++.h>
using namespace std;

bool subsetSumProblem(const vector<int> &set, int sum)
{
    int len = set.size(), i, j;
    bool dp[len + 1][sum + 1] = {};
    for (i = 0; i <= len; i++)
    {
        dp[i][0] = true;
    }

    for (j = 1; j <= sum; j++)
    {
        dp[0][j] = false;
    }

    for (i = 1; i <= len; i++)
    {
        for (j = 1; j <= sum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= set[i - 1])
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - set[i - 1]];
            }
        }
    }

    if (!dp[len][sum])
    {
        return false;
    }
    else
    {
        // Print the subset
        return true;
    }
}

int main()
{
}
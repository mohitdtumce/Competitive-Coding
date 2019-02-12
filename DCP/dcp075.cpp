/*
Given an array of numbers, find the length of the longest increasing subsequence in the array. 
The subsequence does not necessarily have to be contiguous.

For example, given the array [0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15], 
the longest increasing subsequence has length 6: it is 0, 2, 6, 9, 11, 15.

*/

#include <bits/stdc++.h>
using namespace std;

int LongestIncreasingSubsequence(const vector<int> &vec)
{
    int size = vec.size();
    vector<int> dp(size, 1);

    int lis = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (vec[i] < vec[j])
            {
                dp[j] = max(dp[j], dp[i] + 1);
                lis = max(lis, dp[j]);
            }
        }
    }

    return lis;
}

int main()
{
    vector<int> vec = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    cout<<LongestIncreasingSubsequence(vec);
    return 0;
}
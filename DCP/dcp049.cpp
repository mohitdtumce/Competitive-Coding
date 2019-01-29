/*
Given an array of numbers, find the maximum sum of any contiguous subarray of the array.

For example, given the array [34, -50, 42, 14, -5, 86], 
the maximum sum would be 137, since we would take elements 42, 14, -5, and 86.

Given the array [-5, -1, -8, -9], 
the maximum sum would be 0, since we would not take any elements.

Do this in O(N) time.
*/

#include <bits/stdc++.h>
using namespace std;

int maximumSumContiguousSubarray(const vector<int> &vec)
{
    if (vec.size() == 0)
        return 0;

    int currMax = vec[0], maxSum = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        currMax = max(currMax + vec[i], vec[i]);
        maxSum = max(maxSum, currMax);
    }

    return maxSum;
}

int main()
{

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(const vector<int> &A)
{
    if (A.size() == 0)
        return 0;
    int currSum = A[0];
    int maxSum = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        currSum = max(currSum + A[i], A[i]);
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main()
{
    return 0;
}
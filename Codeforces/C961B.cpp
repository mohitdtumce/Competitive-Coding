#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> theorems(n);
    vector<bool> awake(n);
    for (int i = 0; i < n; i++)
    {
        cin >> theorems[i];
    }

    bool isAwake;
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> isAwake;
        awake[i] = isAwake;
        if (awake[i])
        {
            sum += theorems[i];
        }
    }

    long currSum = 0;
    for (int i = 0; i < k; i++)
    {
        if (!awake[i])
        {
            currSum += theorems[i];
        }
    }

    long maxSum = currSum + sum;
    for (int i = k; i < n; i++)
    {
        if (!awake[i])
        {
            currSum += theorems[i];
        }

        if (!awake[i - k])
        {
            currSum -= theorems[i-k];
        }
        maxSum = max(maxSum, sum + currSum);
    }
    cout << maxSum;
    return 0;
}
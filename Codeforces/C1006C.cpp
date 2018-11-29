#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long sum[n - 1];
    sum[0] = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
    }

    long long res = 0, currSum = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        currSum += arr[i];
        if (binary_search(sum, sum + i, currSum)) {
            res = currSum;
        }
    }
    cout<<res;
    return 0;
}
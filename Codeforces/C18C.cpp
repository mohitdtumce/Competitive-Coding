#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    long long sum = 0, currSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        currSum += vec[i];
        sum -= vec[i];
        if (currSum == sum)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
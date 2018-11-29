#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, t, c;
    cin >> n >> t >> c;
    vector<long> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vec[0] = ((vec[0] <= t) ? 1 : 0);
    for (int i = 1; i < n; i++)
    {
        if (vec[i] <= t)
        {
            vec[i] = vec[i - 1] + 1;
            vec[i - 1] = 0;
        }
        else
        {
            vec[i] = 0;
        }
    }

    long long ways = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] >= c)
        {
            ways += (vec[i] - c + 1);
        }
    }
    cout << ways;
    return 0;
}
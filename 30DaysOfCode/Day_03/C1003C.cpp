#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    long double res = 0, firstk;
    for (int i = 0; i < n; i++)
    {
        firstk = 0;
        for (int j = i; j < n; j++)
        {
            firstk += vec[j];
            if (j - i + 1 >= k)
            {
                res = max(res, firstk / (j - i + 1));
            }
        }
    }
    cout << setprecision(6) << fixed << res;
    return 0;
}
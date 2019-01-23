#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    if (n <= 1)
    {
        cout << "0";
    }
    else
    {
        sort(vec.begin(), vec.end());
        int maxDiameter = 101, i, j;
        for (auto itr = vec.begin(); itr != vec.end(); itr++)
        {
            auto jtr = upper_bound(itr, vec.end(), *itr + d);
            maxDiameter = min(maxDiameter, n - int(jtr-itr));
        }
        cout << maxDiameter << "\n";
    }

    return 0;
}
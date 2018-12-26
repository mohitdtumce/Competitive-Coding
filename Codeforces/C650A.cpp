#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, x, y;
    cin >> n;
    map<long long, long long> rows, cols;
    map<pair<long long, long long>, long long> cords;
    while (n--)
    {
        cin >> x >> y;
        rows[x]++;
        cols[y]++;
        cords[make_pair(x, y)]++;
    }

    long long res = 0;
    for (auto itr = rows.begin(); itr != rows.end(); itr++)
    {
        res += ((itr->second) * (itr->second - 1)) / 2;
    }
    for (auto itr = cols.begin(); itr != cols.end(); itr++)
    {
        res += ((itr->second) * (itr->second - 1)) / 2;
    }

    for (auto itr = cords.begin(); itr != cords.end(); itr++)
    {
        res -= ((itr->second) * (itr->second - 1)) / 2;
    }
    cout << res;
    return 0;
}
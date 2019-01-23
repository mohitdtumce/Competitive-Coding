#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    long p;
    cin >> k >> p;
    long long res = 0;
    string first, last;
    for (int i = 1; i <= k; i++)
    {
        first = to_string(i);
        last = first;
        reverse(last.begin(), last.end());
        res = (res + stoll(first + last) % p) % p;
    }
    cout << res;
    return 0;
}
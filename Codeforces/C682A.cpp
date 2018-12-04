#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    vector<long long> a(5, n / 5);
    vector<long long> b(5, m / 5);
    for (long long i = 1; i <= n % 5; i++)
    {
        a[i] += 1;
    }
    for (long long i = 1; i <= m % 5; i++)
    {
        b[i] += 1;
    }
    long long res = 0;
    for (int i = 1; i < 5; i++) {
        res += a[i]*b[5-i];
    }
    res += a[0]*b[0];
    cout<<res;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
    unsigned long long n, pnd, d = 0, nd = 3, pow3 = 1;
    cin >> n;
    if (n <= 1)
        cout << "0";
    else
    {
        int zD = 1;
        int zABC = 0;
        for (int i = 1; i <= n; i++)
        {
            int nzD = zABC * 3LL % MOD;
            int nzABC = (zABC * 2LL + zD) % MOD;
            zD = nzD;
            zABC = nzABC;
        }
        cout << zD;
    }
}
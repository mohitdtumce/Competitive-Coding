#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

long long Power(long a, long b)
{
    if (b == 0)
        return 1;
    long res = (Power(a, b / 2) % Mod);
    if (b % 2 == 0)
        return ((res * res) % Mod);
    else
        return ((a % Mod) * ((res * res) % Mod)) % Mod;
}
int main()
{
    int t;
    cin >> t;
    long long n;
    while (t--)
    {
        cin >> n;
        long long res = 1;
        cout<<((Power(2, n) % Mod - 1) % Mod)<<"\n";
    }
    return 0;
}
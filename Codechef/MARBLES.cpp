#include <bits/stdc++.h>
using namespace std;

unsigned long long GCD(unsigned long long a, unsigned long long b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
unsigned long long C(unsigned long long n, unsigned long long k)
{
    unsigned long long num = 1, gcd, den = 1;
    for (unsigned long long i = 1; i <= k; i++)
    {
        num *= (n - k + i);
        den *= i;
        gcd = GCD(num, den);
        num /= gcd;
        den /= gcd;
    }
    return num;
}
int main()
{
    int t;
    cin >> t;
    unsigned long long n, k;
    while (t--)
    {
        cin >> n >> k;
        cout << C(n - 1, k - 1) << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long n, count2, count5, p, q;
    while (t--)
    {
        cin >> n;
        p = 2;
        q = 5;
        count2 = 0;
        count5 = 0;
        while (n / p > 0)
        {
            count2 += (n / p);
            p *= 2;
        }

        while (n / q)
        {
            count5 += (n / q);
            q *= 5;
        }

        cout << min(count2, count5) << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, x, y, ctr;
    cin >> n >> p >> q;
    string str;
    cin >> str;
    for (int i = 0; i <= n / p; i++)
    {
        if ((n - i * p) % q == 0)
        {
            x = i;
            y = (n - i * p) / q;
            ctr = 0;
            cout << x + y << "\n";
            while (x--)
            {
                cout << str.substr(ctr, p) << "\n";
                ctr += p;
            }

            while (y--)
            {
                cout << str.substr(ctr, q) << "\n";
                ctr += q;
            }

            return 0;
        }
    }
    cout << "-1";
    return 0;
}
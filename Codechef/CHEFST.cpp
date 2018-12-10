#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long n1, n2, m;
    while (t--)
    {
        cin >> n1 >> n2 >> m;
        long long temp = (m * (m + 1)) / 2;
        if (temp >= min(n1, n2))
        {
            cout << abs(n1 - n2) << "\n";
        }
        else
        {
            cout << (n1 - temp) + (n2 - temp)<< "\n";
        }
    }
    return 0;
}
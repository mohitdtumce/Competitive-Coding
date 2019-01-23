#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q;
    long n;
    while (q--)
    {
        cin >> n;
        switch (n % 4)
        {
        case 0:
            cout << n / 4 << "\n";
            break;
        case 1:
            if (n < 8)
                cout << "-1\n";
            else
                cout << ((n / 4) - 1) << "\n";
            break;
        case 2:
            if (n < 4)
                cout << "-1\n";
            else
                cout << n / 4 << "\n";
            break;
        case 3:
            if (n < 15)
                cout << "-1\n";
            else
                cout << ((n / 4) - 1)  << "\n";
            break;
        }
    }
    return 0;
}
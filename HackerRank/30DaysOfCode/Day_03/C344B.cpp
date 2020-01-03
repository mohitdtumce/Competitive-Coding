#include <bits/stdc++.h>
using namespace std;

int main()
{
    long x, y, z, a, b, c;
    cin >> x >> y >> z;
    if (((x + y - z) % 2 == 0) && ((y + z - x) % 2 == 0) && ((z + x - y) % 2 == 0))
    {
        a = (x + y - z) / 2;
        b = (y + z - x) / 2;
        c = (z + x - y) / 2;
        if (a < 0 || b < 0 || c < 0)
        {
            cout << "Impossible";
        }
        else
        {
            cout << a << " " << b << " " << c;
        }
    }
    else
    {
        cout << "Impossible";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    r = (r + 1) / 2;
    g = (g + 1) / 2;
    b = (b + 1) / 2;
    int t = max(r, max(g, b));
    if (t == b)
    {
        cout << (29 + 3 * t);
    }
    else if (t == g)
    {
        cout << (29 + 3 * t - 1);
    }
    else
    {
        cout << (29 + 3 * t - 2);
    }
    return 0;
}
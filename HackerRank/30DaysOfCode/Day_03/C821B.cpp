#include <bits/stdc++.h>
using namespace std;

int main()
{
    long m, b;
    cin >> m >> b;

    long X = m * b, Y = b;
    long long maxBanana = 0, x, y;
    for (x = 0; x <= X; x++)
    {
        y = (X - x) / m;
        maxBanana = max(maxBanana, ((x + 1) * (y + 1) * (x + y)) / 2);
    }

    cout << maxBanana;
    return 0;
}
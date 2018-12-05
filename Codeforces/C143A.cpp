#include <bits/stdc++.h>
using namespace std;

bool areSame(int a, int b, int c, int d)
{
    return (a == b || a == c || a == d || b == c || b == d || c == d);
}
int main()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    bool found = false;
    for (int x = 1; x <= 9; x++)
    {
        for (int y = 1; y <= 9; y++)
        {
            for (int z = 1; z <= 9; z++)
            {
                for (int w = 1; w <= 9; w++)
                {
                    if (x + y == r1 && x + z == c1 && x + w == d1 && z + w == r2 && y + w == c2 && y + z == d2 && !areSame(x, y, z, w))
                    {
                        cout << x << " " << y << "\n";
                        cout << z << " " << w;
                        found = true;
                        break;
                    }
                }
            }
        }
    }
    if (!found)
        cout << "-1";
    return 0;
}
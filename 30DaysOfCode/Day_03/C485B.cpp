#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long x, y, minx, maxx, miny, maxy;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (i == 0)
        {
            minx = x, maxx = x;
            miny = y, maxy = y;
        }
        else
        {
            minx = min(minx, x);
            maxx = max(maxx, x);
            miny = min(miny, y);
            maxy = max(maxy, y);
        }
    }
    long long side = max(maxx - minx, maxy - miny);
    cout<<side*side;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string wind;
    cin >> wind;
    
    long n = 0, s = 0, e = 0, w = 0;
    if (sx < ex)
        e = (ex - sx);
    else if (sx > ex)
        w = (sx - ex);
    if (sy < ey)
        n = (ey - sy);
    else if (sy > ey)
        s = (sy - ey);

    for (long i = 0; i < t; i++)
    {
        switch (wind[i])
        {
        case 'E':
            if (e > 0)
                e--;
            break;
        case 'W':
            if (w > 0)
                w--;
            break;
        case 'N':
            if (n > 0)
                n--;
            break;
        case 'S':
            if (s > 0)
                s--;
            break;
        }

        if (e == 0 && w == 0 && n == 0 && s == 0)
        {
            cout << i + 1;
            return 0;
        }
    }

    cout << "-1";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long n, x, y, d;

    while (t--)
    {
        cin >> n >> x >> y >> d;
        bool firstway = false, lastway = false;
        if ((max(x, y) - min(x, y)) % d == 0)
        {
            cout << ((max(x, y) - min(x, y)) / d) << "\n";
        }
        else
        {
            long long firstToY = 0, lastToY = 0;
            if (abs(y - 1) % d == 0)
            {
                firstway = true;
                firstToY += (abs(y - 1) / d);
                if ((x - 1) % d == 0)
                {
                    firstToY += ((x - 1) / d);
                }
                else
                    firstToY += ((x - 1) / d) + 1;
            }

            if (abs(n - y) % d == 0)
            {
                // cout<<abs(n-y)/d<<" "<<lastToY<<"\n";
                lastway = true;
                lastToY += (abs(n - y) / d);
                // cout << lastToY << "--\n";
                if ((n - x) % d == 0)
                {
                    lastToY += ((n - x) / d);
                    // cout << lastToY << "---\n";
                }
                else
                {
                    lastToY += ((n - x) / d) + 1;
                    // cout << lastToY << "----\n";
                }
            }
            if (firstway && lastway)
            {
                // cout << "firstway and lastway\n";
                cout << min(firstToY, lastToY) << "\n";
            }
            else if (firstway)
            {
                // cout << "firstway\n";
                cout << firstToY << "\n";
            }
            else if (lastway)
            {
                // cout << "lastway\n";
                cout << lastToY << "\n";
            }
            else
                cout << "-1\n";
        }
    }
    return 0;
}
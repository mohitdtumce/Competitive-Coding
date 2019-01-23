#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f;
    cin >> f;
    string tm;
    cin >> tm;
    int hr = stoi(tm.substr(0, 2)), mn = stoi(tm.substr(3, 2));
    if (mn >= 60)
    {
        tm[3] = '0';
    }
    if (f == 24)
    {
        if (hr >= 24)
        {
            tm[0] = '0';
        }
    }
    else
    {
        if (hr > 12)
        {
            if (hr % 10 == 0)
                tm[0] = '1';
            else
                tm[0] = '0';
        }

        if (hr == 0)
        {
            tm[0] = '1';
        }
    }
    cout << tm;
    return 0;
}
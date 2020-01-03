#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    size_t found;
    int curr = 0;
    long res = 0;
    while (1)
    {
        found = str.find("bear", curr);
        if (found == string::npos)
            break;
        else
        {
            res += (found - curr + 1) * (str.size() - found - 3);
            curr = found + 1;
        }
    }
    cout << res;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string res = "";
    if (t == 10)
    {
        if (n == 1)
        {
            res = "-1";
        }
        else
        {
            res += "1";
            for (int i = 0; i < n - 1; i++)
                res += "0";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
            res += to_string(t);
    }
    cout << res;
}
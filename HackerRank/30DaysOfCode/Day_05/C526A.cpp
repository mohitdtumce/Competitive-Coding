#include <bits/stdc++.h>
using namespace std;

bool jump(string &str, int n, int curr, int lap, int count)
{
    if (curr > n && count < 5)
        return false;

    if (str[curr] == '*')
    {
        count++;
        if (count == 5)
            return true;
        else
            return jump(str, n, curr + lap, lap, count);
    }
    else
    {
        return false;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string pattern;
    cin >> n >> pattern;
    for (int i = 0; i < n; i++)
    {
        if (pattern[i] == '*')
        {
            for (int j = 1; j <= n / 4; j++)
            {
                if (jump(pattern, n, i+j, j, 1))
                {
                    cout << "yes";
                    return 0;
                }
            }
        }
    }

    cout << "no";
    return 0;
}
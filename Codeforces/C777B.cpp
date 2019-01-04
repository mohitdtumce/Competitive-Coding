#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, minFlicks = 0, maxFlicks = 0, i, j;
    cin >> n;
    string s, m;
    cin >> s >> m;
    sort(s.begin(), s.end());
    sort(m.begin(), m.end());

    i = 0, j = 0;
    while (i < n && j < n)
    {
        if (s[i] <= m[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    minFlicks = (n - i);

    i = 0, j = 0;
    while (i < n && j < n)
    {
        if (s[i] < m[j])
        {
            i++;
            j++;
            maxFlicks++;
        }
        else
        {
            j++;
        }
    }

    cout << minFlicks << "\n"
         << maxFlicks;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    int res = 0, start, rem = (n % (2 * k + 1));
    if (rem == 0)
    {
        res = (n / (2 * k + 1));
        cout << res << "\n";

        start = k + 1;
        while (start <= n)
        {
            cout << start << " ";
            start += (2 * k + 1);
        }
    }
    else if (rem <= k)
    {

        res = 1 + (n / (2 * k + 1));
        cout << res << "\n";

        start = rem;
        while (start <= n)
        {
            cout << start << " ";
            start += (2 * k + 1);
        }
    }
    else
    {
        res = 1 + (n / (2 * k + 1));
        cout << res << "\n";

        start = rem - k;
        while (start <= n)
        {
            cout << start << " ";
            start += (2 * k + 1);
        }
    }
    return 0;
}
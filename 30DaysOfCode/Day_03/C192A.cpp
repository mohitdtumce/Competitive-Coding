#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b, sq;
    cin >> n;
    for (long long a = 1; a * (a + 1) / 2 <= n; a++)
    {
        b = (n - ((a * (a + 1)) / 2));
        b = 2 * b;
        sq = sqrt(1 + 4 * b);
        if (sq * sq == 1 + 4 * b && sq >= 3)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
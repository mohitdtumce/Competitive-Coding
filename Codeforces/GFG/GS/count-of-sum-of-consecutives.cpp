#include <bits/stdc++.h>
using namespace std;

long count(long N)
{
    long res = 0;
    double a;
    for (long l = 1; l * (l + 1) < 2 * N; l++)
    {
        a = double((1.0 * N) - ((l * (l + 1)) / 2)) / (l + 1);
        if (a - long(a) == 0.0)
            res++;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    long n;
    while (t != 0)
    {
        cin >> n;
        cout << count(n) << "\n";
        t -= 1;
    }
    return 0;
}
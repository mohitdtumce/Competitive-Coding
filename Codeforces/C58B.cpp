#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long i = 2;
    cout << n << " ";
    while (n > 1 && i <= n / 2)
    {
        i = 2;
        while (i <= n / 2)
        {
            if (n % i == 0)
            {
                cout << n / i << " ";
                n /= i;
                break;
            }
            else
            {
                i++;
            }
        }
    }
    if (n > 1)
        cout << "1";
    return 0;
}
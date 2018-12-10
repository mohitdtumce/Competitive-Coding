#include <bits/stdc++.h>
using namespace std;

long sumOfDigits(long n)
{
    long sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    long n;
    cin >> n;
    long x, count = 0;
    if (n <= 100)
    {
        for (long i = n; i >= 1; i--)
        {
            x = sumOfDigits(i);
            if (n - i == x + sumOfDigits(x))
                count++;
        }
    }
    else
    {
        for (long i = n; i >= n-100; i--)
        {
            x = sumOfDigits(i);
            if (n - i == x + sumOfDigits(x))
                count++;
        }
    }

    cout << count;
    return 0;
}
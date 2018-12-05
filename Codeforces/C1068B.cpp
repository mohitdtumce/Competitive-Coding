#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    long long square_root = (long long )sqrt(num) + 1;
    long long count = 0;
    for (long long i = 1; i < square_root; i++)
    {
        if (num % i == 0 && i * i != num)
            count += 2;
        if (num % i == 0 && i * i == num)
            count += 1;
    }
    cout<<count;
}
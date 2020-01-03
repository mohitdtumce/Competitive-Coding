#include <bits/stdc++.h>
using namespace std;

long long findYears(long long a, long long b)
{
    long long count = 0;
    for (int i = 0; i <= 63; i++)
    {
        long long val = (1LL << i) - 1, res;
        for (int j = 0; j <= i-2; j++)
        {
            res = val - (1LL << j);
            if (res >= a && res <=b)
                count++;
        }
    }
    return count;
}

int main()
{
    unsigned long long a, b;
    cin>>a>>b;
    cout<<findYears(a, b);
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long N, k;
    cin>>N>>k;
    long long sum = 0;
    long long x[k];
    long long y[k];
    for(long i = 0; i < k; i++)
    {
        cin>>x[i];
    }
    for(long i = 0; i < k; i++)
    {
        cin>>y[i];
    }
    for(long i = 0; i < k; i++)
    {
        sum += min(abs(x[i] - 1), abs(N - x[i])) + min(abs(y[i] - 1), abs(N - y[i]));
    }
    cout<<sum;
    return 0;
}
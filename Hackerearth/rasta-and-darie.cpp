#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        unsigned long long n, p, k;
        cin>>n>>p>>k;
        unsigned long long q = gcd(n, p);
        if(((k-1)*q + 1) > n)
        {
            cout<<"-1\n";
        }
        else
        {
            
            cout<<((k-1)*q + 1)<<endl;   
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int gcd(int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
    long n;
    cin>>n;
    long arr[n];
    long long hcf;
    long long prod = 1;
    for(long i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr[i] = arr[i] % mod;
        if(i == 0)
            hcf = arr[0];
        else
            hcf = gcd(hcf, arr[i]);
        prod = (((prod % mod) * (arr[i] % mod)) % mod); 
    }
    // cout<<hcf;
    long long res = 1;
    for(long i = 1; i <= hcf; i++)
        res = ((res % mod)*(prod % mod))%mod; 
    cout<<res;
    return 0;
}
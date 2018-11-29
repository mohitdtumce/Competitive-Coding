#include <bits/stdc++.h>
using namespace std;

long int Mod = 100000007;

long long powxn(long x, long n) {
    if (n == 0)
        return 1;
    long long temp = (powxn(x, n/2) % Mod);
    cout<<x<<" "<<n/2<<" "<<temp<<"\n";
    if (n % 2 == 0) 
        return ((temp * temp) % Mod);
    else   
        return (x*((temp * temp) % Mod)) % Mod;
}

int reverse(long num) {
    long res = 0;
    while (num) {
        res = res*10 + num%10;
        num /= 10;
    }
    return res;
}

int main() {
    long t, x;
    cin>>t;
    while (t--) {
        cin>>x;
        long n = reverse(x);
        cout<<pow(x, n)<<"\n";
    }
    return 0;
}
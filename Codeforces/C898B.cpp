#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b;
    cin>>n>>a>>b;
    for (long long i = 0; i <= n/a; i++) {
        if ((n - i*a) % b == 0) {
            cout<<"YES\n";
            cout<<i<<" "<<(n - i*a) / b;
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
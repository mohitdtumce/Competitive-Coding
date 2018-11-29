#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

int main() {
    long long x, y, n, z;
    cin>>x>>y;
    cin>>n;
    n = n % 6;
    vector<long long> vec(6);
    vec[0] = x - y;
    vec[1] = x;
    vec[2] = y;
    vec[3] = y - x;
    vec[4] = -x;
    vec[5] = -y;
    cout<<((vec[n] % Mod) + Mod) % Mod;
    return 0;
}

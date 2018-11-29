#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007
#define size 100001
long long dp[size] = {};
void ways() {
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= size; i++) {
        dp[i] = ((dp[i-1] % Mod) + (dp[i-2] % Mod)) % Mod;
    }
}
int main() {
    ways();
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        cout<<dp[n]<<"\n";
    }
}
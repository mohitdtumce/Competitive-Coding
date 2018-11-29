#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007
long binomialCoeff(int n, int r) {
    long ncr[n+1][r+1] = {};
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, r); j++) {
            if(j == 0 || j == i)
                ncr[i][j] = 1;
            else 
                ncr[i][j] = ((((ncr[i-1][j]) % Mod) + ((ncr[i-1][j-1])%Mod)) % Mod);
        }
    }
    return ncr[n][r];
}
int main() {
    int t, n, r;
    cin>>t;
    while (t--) {
        cin>>n>>r;
        cout<<binomialCoeff(n, r)<<"\n";
    }
}
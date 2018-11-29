#include <bits/stdc++.h>
using namespace std;
#define Mod 1000000007

int ways(int n) {
    int a = 1, b = 2, c;
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    
    for (int i = 3; i <= n; i++) {
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        cout<<ways(n)<<"\n";
    }
}
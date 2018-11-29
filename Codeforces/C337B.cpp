#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int GCD;
    if(a*d >= b*c) {
        GCD = __gcd(a*d - b*c, a*d);
        cout<<((a*d - b*c)/GCD)<<"/"<<((a*d)/GCD);
    } else {
        GCD = __gcd(b*c - a*d, b*c);
        cout<<((b*c - a*d)/GCD)<<"/"<<((b*c)/GCD);
    }
    return 0;
}
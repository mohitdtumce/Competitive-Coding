#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    int m, n, o, p, q, r;
    m = (a+b)*c;
    n = a+(b*c);
    o = a+b+c;
    p = a*b*c;
    q = a*(b+c);
    r = (a*b)+c;
    cout<<max(m, max(n, max(o, max(p, max(q, r)))));
}
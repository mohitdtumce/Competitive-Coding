#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b, c, y, d, e, f, z;
    cin>>x>>a>>b>>c>>y>>d>>e>>f>>z;
    int res = (a+b+c+d+e+f)/2;
    x = res - c - e;
    y = res - b - e;
    z = res - b - d;
    cout<<x<<" "<<a<<" "<<b<<"\n";
    cout<<c<<" "<<y<<" "<<d<<"\n";
    cout<<e<<" "<<f<<" "<<z<<"\n";
    return 0;
}
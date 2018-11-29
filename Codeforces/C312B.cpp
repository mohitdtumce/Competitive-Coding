#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    double res = (double(a*d))/(b*c + a*d - a*c);
    cout<<setprecision(7)<<fixed<<res;
}
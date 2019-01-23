#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    for (int i = 0; i <= 10000; i++) {
        for (int j = 0; j <= 10000; j++) {
            if ((a*i + b) == (c*j + d)) {
                cout<<(a*i+b);
                return 0;
            }
        }
    }
    cout<<"-1";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int res = -1;
    for (int x = 0; x <= n/2; x++) {
        if ((n-x) % m == 0)
            res = (n-x);
    }
    cout<<res;
    return 0;
}
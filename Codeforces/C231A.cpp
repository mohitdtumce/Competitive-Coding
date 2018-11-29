#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0, p, v, t;
    cin>>n;
    while(n--) {
        cin>>p>>v>>t;
        count += ((p + v + t) >= 2)?1:0;
    }
    cout<<count;
    return 0;
}
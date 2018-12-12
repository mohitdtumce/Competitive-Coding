#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, m;
    cin>>a>>m;
    long product = a;
    unordered_map<long, bool> mymap;
    for (int i = 1; i <= 100000; i++) {
        if (mymap[product % m]) {
            cout<<"No";
            return 0;
        } else {
            product += (product % m);
            mymap[product] = true;
        }
    }
    cout<<"Yes";
    return 0;
}
// Vanya and Lanterns
#include <bits/stdc++.h>
using namespace std;

int main() {
    long n, l;
    cin>>n>>l;
    long loc;
    vector<long> locs;
    for (int i = 0; i < n; i++){
        cin>>loc;
        locs.push_back(loc);
    }
    sort(locs.begin(), locs.end());
    double d = 2*max(locs[0], l - locs[n-1]);
    for (int i = 0; i < n - 1; i++) {
        d = max(d, double(locs[i+1] - locs[i]));
    }
    cout<<setprecision(9)<<fixed<<d/2;
    return 0;
}
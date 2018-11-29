// Problem: Xenia and Ringroad
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int currentLocation = 1, nextLocation;
    long long reqTime = 0;
    for(int i = 0; i < m; i++) {
        cin>>nextLocation;
        if (currentLocation <= nextLocation) {
            reqTime += (nextLocation - currentLocation);
        } else {
            reqTime += (n - (currentLocation - nextLocation));
        }
        currentLocation = nextLocation;
    }
    cout<<reqTime;
    return 0;
}
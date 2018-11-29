#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, y;
    cin>>n>>m;
    bool road[n] = {};
    for (int i = 0; i < n; i++){
        cin>>x>>y;
        road[x-1] = road[y-1] = true;
    }
    int res = -1;
    for (int i = 0; i < n; i++){
        if(road[i] == false) {
            res = i+1;
        }
    }
    cout<<(n-1)<<"\n";
    for(int i = 1; i <= n; i++) {
        if(res != i) {
            cout<<res<<" "<<i<<"\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int bCount;
    cin>>bCount;
    vector<int> b(bCount);
    for(int i = 0; i < bCount; i++) {
        cin>>b[i];
    }
    int gCount;
    cin>>gCount;
    vector<int> g(gCount);
    for(int i = 0; i < gCount; i++) {
        cin>>g[i];
    }
    sort(g.begin(), g.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0, counter = 0;
    while ( i < bCount && j < gCount) {
        if(abs(b[i] - g[j]) <= 1) {
            counter++;
            i++;
            j++;
        } else if (b[i] < g[j]) {
            i++;
        } else if (g[j] < b[i]) {
            j++;
        }
    }

    cout<<counter;
    return 0;
}
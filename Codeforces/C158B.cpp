#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp;
    cin>>n;
    int count[5] = {};
    for(int i = 0; i < n; i++) {
        cin>>temp;
        count[temp]++;
    }

    int taxi = 0;
    taxi += (count[4] + count[3]);
    count[1] -= min(count[1], count[3]);
    taxi += count[2]/2;
    if (count[2] % 2) {
        taxi += 1;
        count[1] = max(0, count[1] - 2);
    }
    if(count[1] % 4) {
        taxi += (count[1]/4 + 1);
    } else {
        taxi += (count[1]/4);
    }
    
    cout<<taxi;
    return 0;
}
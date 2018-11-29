#include <bits/stdc++.h>
using namespace std;

int main() {
    long s, n, x, y, i;
    cin>>s>>n;
    vector<pair<int, int> > dragon(n);
    for (i = 0; i < n; i++) {
        cin>>dragon[i].first>>dragon[i].second;
    }
    sort(dragon.begin(), dragon.end());
    i = 0;
    while (i < n) {
        if (s > dragon[i].first) {
            s += dragon[i].second;
            i++;
        } else {
            break;
        }
    }

    if (i == n) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}
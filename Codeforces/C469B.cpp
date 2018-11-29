#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, q, l, r, i, j, k;
    cin>>p>>q>>l>>r;
    vector<pair<int,int> > z(p), x(q);
    for(i = 0; i < p; i++) {
        cin>>z[i].first>>z[i].second;
    }
    for(j = 0; j < q; j++) {
        cin>>x[j].first>>x[j].second;
    }

    int a, b, c, d, count = 0;
    for (int k = l; k <= r; k++) {
        i = 0, j = 0;
        while (i < p && j < q){
            if (z[i].second < x[j].first + k) {
                i++;
            } else if (x[j].second + k < z[i].first) {
                j++;
            } else {
                count++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}
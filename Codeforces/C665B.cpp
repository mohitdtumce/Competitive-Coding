#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, m, k, item;
    cin>>n>>m>>k;
    unordered_map<int, int> mymap;
    for (int i = 1; i <= k; i++) {
        cin>>item;
        mymap[item] = i;
    }

    long timeReq = 0;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin>>item;
            timeReq += mymap[item];
            for (auto itr = mymap.begin(); itr != mymap.end(); itr++) {
                if(itr->first != item && itr->second < mymap[item]) {
                    itr->second ++;
                }
            }
            mymap[item] = 1;
        } 
    }
    cout<<timeReq;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, d, a;
    cin>>n>>m>>d;
    map<int, int> mymap;
    for(int i = 0; i < n*m; i++) {
        cin>>a;
        mymap[a]++;
    }
    int minMove = n*m, counter;
    bool set = false;
    for(auto itr = mymap.begin(); itr != mymap.end(); itr++) {
        // cout<<"\n"<<itr->first<<"-"<<itr->second<<"\n";
        bool possible = true;
        counter = 0;
        for(auto jtr = mymap.begin(); jtr != mymap.end(); jtr++) {
            if(abs(jtr->first - itr->first) % d != 0) {
                possible = false;
                break;
            } else {
                counter += (abs(jtr->first - itr->first) / d)*jtr->second;
                // cout<<counter<<" ";
            }
        }
        if(possible) {
            if(set == false) {
                minMove = counter;
                set = true;
            } else {
                minMove = min(minMove, counter);
            }
        }
    }

    if(set == false) {
        cout<<"-1";
    } else {
        cout<<minMove;
    }
    return 0;
}
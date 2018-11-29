#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int, int> > kit;
    unordered_map<int, int> mymap;
    int home, away;
    for (int i = 0; i < n; i++) {
        cin>>home>>away;
        kit.push_back(make_pair(home, away));
        mymap[home]++;
    }

    for (int i = 0; i < n; i++) {
        home = (n - 1) +  mymap[kit[i].second];
        away = 2*(n - 1) - home;
        cout<<home<<" "<<away<<"\n";
    }
    return 0;
}
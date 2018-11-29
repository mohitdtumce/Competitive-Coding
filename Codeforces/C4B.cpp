#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, sumTime, minTime = 0, maxTime = 0;
    cin>>d>>sumTime;
    vector<pair<int, int> >schedule(d);
    for(int i = 0; i < d; i++) {
        cin>>schedule[i].first>>schedule[i].second;
        minTime += schedule[i].first;
        maxTime += schedule[i].second;
    }

    if (minTime <= sumTime && sumTime <= maxTime) {
        cout<<"YES\n";
        int toAllocate = sumTime - minTime;
        for (int i = 0; i < d; i++) {
            if (toAllocate > 0) {
                cout<<schedule[i].first + min(toAllocate, (schedule[i].second - schedule[i].first))<<" ";
                toAllocate -= min(toAllocate, (schedule[i].second - schedule[i].first));
            } else {
                cout<<schedule[i].first<<" ";
            }
        }
    } else {
        cout<<"NO\n";
    }
}
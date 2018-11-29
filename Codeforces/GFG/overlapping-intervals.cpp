#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.first < b.first)
        return true;
    else if (a.first == b.first)
        return a.second > b.second;
    else 
        return false;
}
int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<pair<int, int> > intervals(n);
        for (int i = 0; i < n; i++) {
            cin>>intervals[i].first>>intervals[i].second;
        }
        sort(intervals.begin(), intervals.end(), comp);
        stack<pair<int, int> > S;
        for (int i = n-1; i >= 0; i--)
            S.push(intervals[i]);
        
        pair<int, int> p, q, r;
        while (S.size() > 1) {
            p = S.top();
            S.pop();
            q = S.top();
            S.pop();
            if (p.second >= q.first) {
                r.first = p.first;
                r.second = max(p.second, q.second);
                S.push(r);
            } else {
                cout<<p.first<<" "<<p.second<<" ";
                S.push(q);
            }
        }
        cout<<S.top().first<<" "<<S.top().second<<"\n";
    }
}
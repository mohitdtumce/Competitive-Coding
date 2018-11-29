#include <bits/stdc++.h>
using namespace std;

class seat{
    public:
        int index, width;
};

bool comp(seat a, seat b) {
    return a.width < b.width;
}
int main() {
    int n;
    cin>>n;
    vector<seat> S(n);
    for (int i = 0; i < n; i++) {
        cin>>S[i].width;
        S[i].index = i+1;
    }
    sort(S.begin(), S.end(), comp);
    stack<seat> halfOccupied;
    string passanger;
    cin>>passanger;
    int idx = 0;
    for (int i = 0; i < 2*n; i++) {
        if (passanger[i] == '0') {
            cout<<S[idx].index<<" ";
            halfOccupied.push(S[idx]);
            idx++;
        } else if (passanger[i] == '1'){
            cout<<halfOccupied.top().index<<" ";
            halfOccupied.pop();
        }
    }
    return 0;
}